 #include "databasetester.h"

DatabaseTester::DatabaseTester()
{
    this->preprocessing = nullptr;
    this->extraction = nullptr;
    this->matcher = nullptr;

    this->dbTestPhase = "Waiting";
}

DatabaseTester::~DatabaseTester()
{
    delete this->preprocessing;
    delete this->extraction;
    delete this->matcher;
}

void DatabaseTester::run()
{
    this->preprocessing = new  Preprocessing;
    this->extraction = new Extraction;
    this->matcher = new Matcher;

    qRegisterMetaType<QMap<QString,PREPROCESSING_RESULTS>>("QMap<QString,PREPROCESSING_RESULTS>");
    qRegisterMetaType<QMap<QString,QVector<MINUTIA>>>("QMap<QString,QVector<MINUTIA>>");
    qRegisterMetaType<QMap<QString,unsigned char*>>("QMap<QString,unsigned char*>");
    qRegisterMetaType<DBTEST_RESULT>("DBTEST_RESULT");

    connect(this->preprocessing, SIGNAL(preprocessingSequenceDoneSignal(QMap<QString,PREPROCESSING_RESULTS>)), this, SLOT(preprocessingDoneSlot(QMap<QString,PREPROCESSING_RESULTS>)));
    connect(this->extraction, SIGNAL(extractionSequenceDoneSignal(QMap<QString,QVector<MINUTIA>>)), this, SLOT(extractionDoneSlot(QMap<QString,QVector<MINUTIA>>)));
    connect(this->extraction, SIGNAL(extractionSequenceDoneSignal(QMap<QString,unsigned char*>)), this, SLOT(extractionDoneSlot(QMap<QString,unsigned char*>)));
    connect(this->matcher, SIGNAL(dbTestDoneSignal(DBTEST_RESULT)), this, SLOT(dbTestDoneSlot(DBTEST_RESULT)));

    connect(this->preprocessing, SIGNAL(preprocessingProgressSignal(int)), this, SLOT(stateSlot(int)));
    connect(this->extraction, SIGNAL(extractionProgressSignal(int)), this, SLOT(stateSlot(int)));
    connect(this->matcher, SIGNAL(matcherProgressSignal(int)), this, SLOT(stateSlot(int)));

    exec();
}

void DatabaseTester::setDbInputPath(const QString &value)
{
    dbInputPath = value;
}

QString DatabaseTester::getDbInputPath() const
{
    return dbInputPath;
}

void DatabaseTester::setExtractionFeatures(MATCHER matcher, bool useVarBlockSize, bool useOrientationFixer)
{
    if (matcher == bozorth3) this->extraction->setFeatures(false, useOrientationFixer, useVarBlockSize);
    else this->extraction->setFeatures(true, useOrientationFixer, useVarBlockSize);
}

void DatabaseTester::setPreprocessingParams(int blockSize, int basicOMapBlockSize, int advancedOMapBlockSize, double basicOMapSigma, double advancedOMapSigma, double gaborSigma, double gaborLambda)
{
    this->preprocessing->setPreprocessingParams(blockSize, gaborLambda, gaborSigma, basicOMapBlockSize, basicOMapSigma, advancedOMapBlockSize, advancedOMapSigma);
}

void DatabaseTester::stateSlot(int state)
{
    emit updateProgressBarSignal("dbTester", state, this->dbTestPhase);
}

void DatabaseTester::startTesting(MATCHER matcher, int numOfSubject, int imgPerSubject)
{
    this->matcherType = matcher;
    this->matcher->setMatcher(matcher);
    this->matcher->setDBTestParams(numOfSubject, imgPerSubject);

    this->dbTestPhase = "Preprocessing";
    emit logSignal("dbTester", "DB Test is starting");

    this->preprocessing->loadInput(this->dbInputPath);
    this->preprocessing->start();
}

void DatabaseTester::preprocessingDoneSlot(QMap<QString, PREPROCESSING_RESULTS> results)
{
    emit logSignal("dbTester", "Preprocessing Done");
    this->dbTestPhase = "Extraction";

    if (this->matcherType == suprema) this->extraction->setFeatures(true);
    this->extraction->loadInput(results);
    this->extraction->start();
}

void DatabaseTester::extractionDoneSlot(QMap<QString, QVector<MINUTIA> > results)
{
    this->dbTestPhase = "Matching";

    if (this->matcherType == bozorth3) {
        emit logSignal("dbTester", "Extraction Done");
        this->matcher->testDatabase(results);
    }
}

void DatabaseTester::extractionDoneSlot(QMap<QString,unsigned char*> results)
{
    emit logSignal("dbTester", "Extraction Done");
    this->dbTestPhase = "Matching";

    this->matcher->testDatabase(results);
}

void DatabaseTester::dbTestDoneSlot(DBTEST_RESULT results)
{
    emit logSignal("dbTester", "Matching Done\n TEST DONE");
    emit drawGraphSignal(results);
}
