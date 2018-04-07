 #include "databasetester.h"

DatabaseTester::DatabaseTester()
{
    this->actualImage = 0;
    this->continuePreprocess = false;
    bool readyGenuineScores = false;
    bool readyImpostorScores = false;

    this->preprocessing = nullptr;
    this->extraction = nullptr;
    //this->hMatcher = nullptr;
}

DatabaseTester::~DatabaseTester()
{

}

void DatabaseTester::run()
{

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

void DatabaseTester::setExtractionSettings(bool useMask, bool useVarBlockSize, bool useFixOrientations, bool useDistinctMinutiae)
{
    this->exSettings.useMask = useMask;
    this->exSettings.useVarBlockSize = useVarBlockSize;
    this->exSettings.useFixOrientations = useFixOrientations;
    this->exSettings.useDistincsMinutiae = useDistinctMinutiae;
}

void DatabaseTester::setPreprocessingParams(int blockSize, int basicOMapBlockSize, int advancedOMapBlockSize, double basicOMapSigma, double advancedOMapSigma, double gaborSigma, double gaborLambda)
{
    this->preParamsDefault = {blockSize, basicOMapBlockSize, advancedOMapBlockSize, basicOMapSigma, advancedOMapSigma, gaborSigma, gaborLambda};
    this->preParams = {blockSize, basicOMapBlockSize, advancedOMapBlockSize, basicOMapSigma, advancedOMapSigma, gaborSigma, gaborLambda};
}

void DatabaseTester::preprocess()
{
    if (!this->continuePreprocess) {
        emit logSignal("dbTester", "Preparing data...");

        this->preprocessing = new Preprocessing();
        this->extraction = new Extraction();

        this->inputImages.setPath(this->dbInputPath);
        this->inputImages.setNameFilters(QStringList() << "*.png" << "*.jpg" << "*.bmp" << "*.tif");

        this->preprocessing->setPreprocessingParams(this->preParams.blockSize, this->preParams.gaborLambda, this->preParams.gaborSigma,
                                                    this->preParams.basicOMapBlockSize, this->preParams.basicOMapSigma, this->preParams.advancedOMapBlockSize, this->preParams.advancedOMapSigma, 20);
        this->preprocessing->setFeatures(true, 0, true, true, true, false, false, false);

        this->extraction->loadExtractionModel();
        if (this->exSettings.useMask) {
            this->extraction->loadMaskModel();
        }

        qRegisterMetaType<cv::Mat>("cv::Mat");
        connect(this->preprocessing, SIGNAL(readySkeletonsMaskOMapSignal(cv::Mat,cv::Mat,cv::Mat,cv::Mat)), this, SLOT(extract(cv::Mat,cv::Mat,cv::Mat,cv::Mat)));
        connect(&this->bozorth3, SIGNAL(bozorthThreadsFinished(int)), this, SLOT(getBozorthScores(int)));
        connect(&this->bozorth3, SIGNAL(stateSignal(int)), this, SLOT(stateSlot(int)));

        this->continuePreprocess = true;

        this->readyGenuineScores = false;
        this->readyImpostorScores = false;
    }

    if (this->actualImage < this->inputImages.entryInfoList().size()) {
        emit logSignal("dbTester", "IMAGE: " + this->inputImages.entryInfoList().at(this->actualImage).fileName());

        this->imgOrig = cv::imread(this->inputImages.entryInfoList().at(this->actualImage).absoluteFilePath().toStdString(), CV_8UC1);

        this->timer.start();
        if (this->exSettings.useMask) {
            if (!this->imgMasks.contains(this->inputImages.entryInfoList().at(this->actualImage).baseName())) {
                this->imgMasks.insert(this->inputImages.entryInfoList().at(this->actualImage).baseName(), cv::imread(("./masks/" + this->inputImages.entryInfoList().at(this->actualImage).baseName() + ".bmp").toStdString(), CV_8UC1));
                //this->imgMasks.insert(this->inputImages.entryInfoList().at(this->actualImage).baseName(), this->extraction->getMask(this->imgOrig));
                emit logSignal("dbTester", "- creating fingerprint mask done (" + QString::number(timer.elapsed()) + " ms)");
            }
            this->extraction->loadMask(this->imgMasks.value(this->inputImages.entryInfoList().at(this->actualImage).baseName()));
            this->timer.start();
        }

        //cv::imwrite((this->inputImages.entryInfoList().at(this->actualImage).baseName() + ".bmp").toStdString(), this->imgMasks.value(this->inputImages.entryInfoList().at(this->actualImage).baseName()));

        /*QGraphicsView gv;
        QGraphicsScene orig;
        QGraphicsPixmapItem *ppp;
        orig.setSceneRect(0, 0, this->imgOrig.cols, this->imgOrig.rows);
        orig.addPixmap(QPixmap::fromImage(Helper::Mat2QImage(this->imgOrig, QImage::Format_Grayscale8)));
        ppp = orig.addPixmap(QPixmap::fromImage(Helper::Mat2QImage(this->imgMasks.value(this->inputImages.entryInfoList().at(this->actualImage).baseName()), QImage::Format_Grayscale8)));
        ppp->setOpacity(0.5);
        gv.setScene(&orig);

        gv.grab().save("./output/" + this->inputImages.entryInfoList().at(this->actualImage).baseName() + ".bmp");*/

        this->preprocessing->loadImg(imgOrig);
        this->preprocessing->start();
    }
    else {
        this->actualImage = 0;

        if (this->matcher == "suprema") this->convertToIso();
        else if (this->matcher == "bozorth") this->convertToBozorth();
    }
}

void DatabaseTester::extract(cv::Mat imgSkeleton, cv::Mat imgSkeletonInverted, cv::Mat mask, cv::Mat orientationMap)
{
    emit logSignal("dbTester", "- preprocessing done (" + QString::number(this->timer.elapsed()) + " ms)");
    this->timer.start();

    this->extraction->loadImages(this->imgOrig, orientationMap, imgSkeleton, imgSkeletonInverted);
    this->minutiaeData.push_back(qMakePair(this->extraction->extract(this->exSettings, this->matcher, 19, inputImages.entryInfoList().at(this->actualImage).baseName()), inputImages.entryInfoList().at(this->actualImage).baseName()));

    emit logSignal("dbTester", "- extraction done (" + QString::number(timer.elapsed()) + " ms)");
    emit updateProgressBarSignal("dbTester", (int)(this->actualImage*1.0 / this->inputImages.entryInfoList().size() * 100), "Preprocessing and Extraction");

    //imgSkeleton.save("./output/" + this->inputImages.entryInfoList().at(this->actualImage).baseName() + "_" + QString::number(this->preParams.blockSize) + "_sig" + QString::number(this->preParams.gaborSigma) +  "_lam" + QString::number(this->preParams.gaborLambda) + ".bmp");

    this->actualImage++;
    this->preprocess();
}

void DatabaseTester::setTestIter(int blockSize, int sigma, int lambda)
{
    this->testIter = {blockSize, sigma, lambda};
    this->testIterActual = {0, 0, 0};
}

void DatabaseTester::convertToIso()
{
    ISOConverter isoConverter;

    for (auto minIsoReady : minutiaeData) {
        isoConverter.load(this->imgOrig.rows, this->imgOrig.cols, 100, minIsoReady.first);
        this->isoTemplates.push_back(qMakePair(isoConverter.convert(), minIsoReady.second));
        this->isoTemplateSizes.push_back(isoConverter.getTemplateSize());
    }

    emit logSignal("dbTester", "Conversion to ISO format done");
    emit updateProgressBarSignal("dbTester", 100, "Converting to ISO");

    delete this->preprocessing;
    delete this->extraction;

    this->compareFingerprints();
}

void DatabaseTester::sortNScaleMinutiaeByQuality(MINUTIAE_VECTOR &mv, int newMin, int newMax)
{
    qSort(mv.begin(),mv.end(),[=](const std::tuple<QPoint,int,int,int>& left, const std::tuple<QPoint,int,int,int>& right){return std::get<3>(left) > std::get<3>(right);});

    int oldMin = std::get<3>(mv.last());
    int oldMax = std::get<3>(mv.first());
    for (std::tuple<QPoint,int,int,int>& m:  mv) {
        std::get<3>(m) = newMin + (((std::get<3>(m) - oldMin) * (newMax-newMin) * 1.0)/ (oldMax - oldMin));
    }
}

void DatabaseTester::optimizeMinutiaeByQuality(MINUTIAE_VECTOR &mv)
{
    int threshold = 60;

    /*qDebug() << "Original\n";
    std::for_each(mv.begin(), mv.end(), [=](std::tuple<QPoint,int,int,int> m){
        qDebug() << std::get<3>(m);
    });*/

    /*std::remove_if(mv.begin(), mv.end(), [=](std::tuple<QPoint,int,int,int> m) {
       return std::get<3>(m) < 16;
    });*/

    /*for (int i = mv.length()-1; i >= 0; i--) {
        if (std::get<3>(mv[i]) < 16) mv.remove(i);
        else break;
    }*/

    /*for (int i = mv.length()-1; i >= 0; i--) {
        /*if (std::get<3>(mv[i]) < 5) mv.remove(i);
        else *//*if (std::get<3>(mv[i]) > 40 && mv.size() < threshold) mv.push_back(mv[i]);
    }*/

    /*int cnt = 0;
    while(mv.size() < threshold) {
        mv.push_back(mv[cnt]);
        cnt++;
    }*/

    /*MINUTIAE_VECTOR medQual, highQual;

    for (int i = 0; i < mv.length(); i++) {
        if (std::get<3>(mv[i]) > 85) {
            highQual.push_back(mv[i]);
        }
        else if (std::get<3>(mv[i]) > 50){
            medQual.push_back(mv[i]);
        }
        else break;
    }

    bool highQualDuplicate = false;
    while (mv.size() < threshold || !highQualDuplicate) {
        /*for (int i = 0; i < highQual.length(); i++) {
            mv.push_back(highQual[i]);
        }*/
        /*highQualDuplicate = true;
        if (mv.size() < threshold) {
            for (int i = 0; i < highQual.length(); i++) {
                mv.push_back(highQual[i]);
            }

            if (mv.size() < threshold) {
                for (int i = 0; i < medQual.length(); i++) {
                    mv.push_back(medQual[i]);
                }
            }
        }
    }*/

    //qDebug() << mv.size();

    /*for (int i = mv.length()-1; i >= 0; i--) {
        if (mv.length() > threshold) mv.remove(i);
        else break;
    }*/

    //while (mv.size() > threshold) mv.removeLast();

    //qDebug() << mv.size();

    /*qDebug() << "\n\n\nNew:\n";
    std::for_each(mv.begin(), mv.end(), [=](std::tuple<QPoint,int,int,int> m){
        qDebug() << std::get<3>(m);
    });
    qDebug() << "\n\n\n";*/

    /*std::for_each(mv.begin(), mv.end(), [=](std::tuple<QPoint,int,int,int> m){
        qDebug() << std::get<3>(m);
    });

    qDebug() << "\n\n\nHigh: ";

    std::for_each(highQual.begin(), highQual.end(), [=](std::tuple<QPoint,int,int,int> m){
        qDebug() << std::get<3>(m);
    });

    qDebug() << "\n\n\nMed: ";

    std::for_each(medQual.begin(), medQual.end(), [=](std::tuple<QPoint,int,int,int> m){
        qDebug() << std::get<3>(m);
    });
    qDebug() << "\n\n\nNEW:";*/


}

void DatabaseTester::convertToBozorth()
{
    int prevSize;
    for (auto minutiae : this->minutiaeData) {

        if (!minutiae.first.empty()) {
            sortNScaleMinutiaeByQuality(minutiae.first, 0, 100);
            optimizeMinutiaeByQuality(minutiae.first);
            int i = 0;
            /*while(minutiae.first.size() < 60) {
                minutiae.first.push_back(minutiae.first[i++]);
            }*/

        }

        this->bozorthTemplates.insert(minutiae.second, minutiae.first);
    }

    emit logSignal("dbTester", "Conversion to ISO format done");
    emit updateProgressBarSignal("dbTester", 100, "Converting to ISO");

    delete this->preprocessing;
    delete this->extraction;

    this->compareFingerprints();
}

void DatabaseTester::getBozorthScores(int)
{
    if (!this->readyImpostorScores) {
        this->impostorPairs.clear();
        this->impostorPairs = this->bozorth3.getOutputFingerprintPairs();

        this->readyImpostorScores = true;

        emit logSignal("dbTester", "Impostors done!");

        this->bozorth3.setParameters(QThread::idealThreadCount(), this->bozorthTemplates, this->genuinePairs);

        //this->genuinePairs

        this->bozorth3.matchAll();
    }
    else if (!this->readyGenuineScores) {
        this->genuinePairs.clear();
        this->genuinePairs = this->bozorth3.getOutputFingerprintPairs();

        this->readyGenuineScores = true;

        this->drawFmrFnmr();
        this->testingDone();
    }
}

void DatabaseTester::stateSlot(int state)
{
    emit updateProgressBarSignal("dbTester", state, "Matching");
}

void DatabaseTester::compareFingerprints()
{
    this->computeImpostorScores();
    this->computeGenuineScores();
    if (matcher == "bozorth") {
        this->bozorth3.setParameters(QThread::idealThreadCount(), this->bozorthTemplates, this->impostorPairs);
        this->bozorth3.matchAll();
    }
    else if (matcher == "suprema") {
        this->drawFmrFnmr();
        this->testingDone();
    }
}


void DatabaseTester::drawFmrFnmr()
{
    QVector<double> fmrX;
    QVector<double> fmrY;
    QVector<double> fnmrX;
    QVector<double> fnmrY;

    double error;

    emit logSignal("dbTester", "Drawing FMR values...");

    if (this->matcher == "suprema") {
        int cnt = 0;
        for(double threshold = plotParams.min; threshold < plotParams.max; threshold += plotParams.sensitivity) {
            if (cnt % 100 == 0) emit updateProgressBarSignal("dbTester", (int)((threshold*1.0)/plotParams.max * 100), "Drawing FAR values");
            fmrX.push_back(threshold);
            error = std::count_if(this->impostorScores.begin(), this->impostorScores.end(), [=](double value){return value >= threshold;});
            fmrY.push_back(error/this->impostorScores.size()*100);
            cnt++;
        }

        emit drawGraphSignal("fmr", fmrX, fmrY);

        emit logSignal("dbTester", "Drawing FNMR values...");

        cnt = 0;
        for(double threshold = plotParams.min; threshold < plotParams.max; threshold += plotParams.sensitivity) {
            if (cnt % 100 == 0) emit updateProgressBarSignal("dbTester", (int)((threshold*1.0)/plotParams.max * 100), "Drawing FRR values");
            fnmrX.push_back(threshold);
            error = std::count_if(this->genuineScores.begin(), this->genuineScores.end(), [=](double value){return value < threshold;});
            fnmrY.push_back(error/this->genuineScores.size()*100);
            cnt++;
        }
    }
    else if (matcher == "bozorth") {
        int cnt = 0;
        for(double threshold = plotParams.min; threshold < plotParams.max; threshold += plotParams.sensitivity) {
            if (cnt % 100 == 0) emit updateProgressBarSignal("dbTester", (int)((threshold*1.0)/plotParams.max * 100), "Drawing FAR values");
            fmrX.push_back(threshold);
            error = std::count_if(this->impostorPairs.begin(), this->impostorPairs.end(), [=](FINGERPRINT_PAIR fp) {return fp.score >= threshold;});
            fmrY.push_back(error/this->impostorPairs.size()*100);
            cnt++;
        }

        emit drawGraphSignal("fmr", fmrX, fmrY);

        emit logSignal("dbTester", "Drawing FNMR values...");

        cnt = 0;
        for(double threshold = plotParams.min; threshold < plotParams.max; threshold += plotParams.sensitivity) {
            if (cnt % 100 == 0) emit updateProgressBarSignal("dbTester", (int)((threshold*1.0)/plotParams.max * 100), "Drawing FRR values");
            fnmrX.push_back(threshold);
            error = std::count_if(this->genuinePairs.begin(), this->genuinePairs.end(), [=](FINGERPRINT_PAIR fp) {return fp.score < threshold;});
            fnmrY.push_back(error/this->genuinePairs.size()*100);
            cnt++;
        }
    }

    emit drawGraphSignal("fnmr", fnmrX, fnmrY, computeEERValue(fmrY, fnmrY));
}

double DatabaseTester::computeEERValue(const QVector<double> &fmr, const QVector<double> &fnmr)
{
    QVector<double> absDiff;
    for(int i=0; i < fmr.size(); i++){
        absDiff.push_back(qAbs(fmr[i] - fnmr[i]));
    }
    double smallestDiff = *std::min_element(absDiff.begin(), absDiff.end());

    QFile data;
    QTextStream ts(&data);
    QString timeStamp = QDateTime::currentDateTime().toString("dd.MM.yyyy HH:mm");
    data.setFileName("./output/EER.txt");
    data.open(QIODevice::Append);
    ts.setRealNumberNotation(QTextStream::FixedNotation);

    for(int i=0; i< absDiff.size(); i++){
        if(absDiff[i] == smallestDiff) {

            ts << timeStamp << " - EER: " << (fmr[i] + fnmr[i])/2.0 << " (Block Size: " << QString::number(this->preParams.blockSize) << "; Sigma: " << QString::number(this->preParams.gaborSigma) << "; Lambda: " << QString::number(this->preParams.gaborLambda) << ")\n";

            return (fmr[i] + fnmr[i])/2.0;
        }
    }

    return 0;
}

/*void DatabaseTester::rotateMinutiae()
{

}*/

void DatabaseTester::computeGenuineScores()
{  
    float score;
    int success;
    QString infoSub1, infoSub2;
    FINGERPRINT_PAIR fp;

    this->genuineScoresInfo.clear();
    this->genuineScores.clear();

    emit logSignal("dbTester", "Computing Genuine Scores...");
    emit updateProgressBarSignal("dbTester", 0, "Computing Genuine Scores");

    QFile data("./output/GENUINE_bl" + QString::number(this->preParams.blockSize) + "_sig" + QString::number(this->preParams.gaborSigma) +  "_lam" + QString::number(this->preParams.gaborLambda) + ".txt");
    data.open(QIODevice::WriteOnly);
    QTextStream ts(&data);
    ts.setRealNumberNotation(QTextStream::FixedNotation);

    QTime timer;
    timer.start();

    for (int subject = 0; subject < this->numOfSubject; subject++) {
        emit updateProgressBarSignal("dbTester", (int)((subject)*1.0/this->numOfSubject * 100), "Computing Genuine Scores");
        for(int image1 = subject * this->imgPerSubject; image1 < subject * this->imgPerSubject + this->imgPerSubject; image1++) {
            for(int image2 = image1+1; image2 < subject * this->imgPerSubject + this->imgPerSubject; image2++) {

                if (this->matcher == "suprema") {

                    UFM_VerifyEx(this->hMatcher, this->isoTemplates[image1].first, this->isoTemplateSizes[image1], this->isoTemplates[image2].first, this->isoTemplateSizes[image2], &score, &success);
                    this->genuineScores.push_back(score);

                    infoSub1 = this->isoTemplates[image1].second;
                    infoSub2 = this->isoTemplates[image2].second;

                    ts << fp.leftFingerprint << " vs " << fp.rightFingerprint << ": " << score << " | " << success << "\n";
                }
                else if (this->matcher == "bozorth") {

                    //timer.start();
                    /*score = (float)(this->bozorth3.match(this->bozorthTemplates[image1].first, this->bozorthTemplates[image2].first));
                    this->genuineScores.push_back(score);*/

                    fp.leftFingerprint = this->minutiaeData[image1].second;
                    fp.rightFingerprint = this->minutiaeData[image2].second;
                    fp.score = -1;

                    this->genuinePairs.push_back(fp);

                    //qDebug() << infoSub1 << " vs " <<infoSub2 << " " << timer.elapsed() << " ms";

                    ts << fp.leftFingerprint << " vs " << fp.rightFingerprint << ": " << (int)score << "\n";
                }

            }
        }
    }
    data.close();

    emit logSignal("dbTester", "Done! (" + QString::number(timer.elapsed()/1000) + " s)");

    emit updateProgressBarSignal("dbTester", 100, "Computing Genuine Scores");
}

void DatabaseTester::DatabaseTester::computeImpostorScores()
{
    float score;
    int success;

    QString infoSub1, infoSub2;
    FINGERPRINT_PAIR fp;

    QFile data("./output/IMPOSTOR_bl" + QString::number(this->preParams.blockSize) + "_sig" + QString::number(this->preParams.gaborSigma) +  "_lam" + QString::number(this->preParams.gaborLambda) + ".txt");
    data.open(QIODevice::WriteOnly);
    QTextStream ts(&data);
    ts.setRealNumberNotation(QTextStream::FixedNotation);

    this->impostorScoresInfo.clear();
    this->impostorScores.clear();

    emit logSignal("dbTester", "Computing Impostor Scores...");
    emit updateProgressBarSignal("dbTester", 0, "Computing Impostor Scores");

    int actCnt = 0;
    int totalCnt = (this->numOfSubject * this->imgPerSubject) * ((this->numOfSubject * this->imgPerSubject)/2);

    QTime timer;
    timer.start();

    for (int subject = 0; subject < this->numOfSubject-1; subject++) {
        for (int image1 = subject * this->imgPerSubject; image1 < subject * this->imgPerSubject + this->imgPerSubject; image1++) {
            for (int image2 = (subject+1) * this->imgPerSubject; image2 < this->numOfSubject*this->imgPerSubject; image2++) {

                if (this->matcher == "suprema") {

                    UFM_VerifyEx(this->hMatcher, this->isoTemplates[image1].first, this->isoTemplateSizes[image1], this->isoTemplates[image2].first, this->isoTemplateSizes[image2], &score, &success);
                    this->impostorScores.push_back(score);

                    infoSub1 = this->isoTemplates[image1].second;
                    infoSub2 = this->isoTemplates[image2].second;

                    emit logSignal("dbTester", "Computing Impostor Scores...");
                    ts << infoSub1 << " vs " << infoSub2 << ": " << score << " | " << success << "\n";
                }
                else if (this->matcher == "bozorth") {

                    /*score = (float)(this->bozorth3.match(this->bozorthTemplates[image1].first, this->bozorthTemplates[image2].first));
                    this->impostorScores.push_back(score);*/

                    fp.leftFingerprint = this->minutiaeData[image1].second;
                    fp.rightFingerprint = this->minutiaeData[image2].second;
                    fp.score = -1;

                    this->impostorPairs.push_back(fp);

                    ts << fp.leftFingerprint << " vs " << fp.rightFingerprint << ": " << (int)score << "\n";
                }

                actCnt++;
            }
        }
        emit updateProgressBarSignal("dbTester", (int)(actCnt*1.0/totalCnt * 100), "Computing Impostor Scores");
    }
    data.close();

    emit logSignal("dbTester", "Done! (" + QString::number(timer.elapsed()/1000) + " s)");

    emit updateProgressBarSignal("dbTester", 100, "Computing Impostor Scores");

}

void DatabaseTester::testingDone()
{
    emit logSignal("dbTester", "Done");
    emit updateProgressBarSignal("dbTester", 100, "");

    //mozna chyba
    if (this->matcher == "suprema") {
        for (int i = 0; i < this->isoTemplates.size(); i++) delete [] this->isoTemplates[i].first;
        this->isoTemplates.clear();
        this->isoTemplateSizes.clear();
    }
    else if (this->matcher == "bozorth") {
        //for (int i = 0; i < this->bozorthTemplates.size(); i++) delete [] this->bozorthTemplates[i].first;
        this->bozorthTemplates.clear();
    }

    this->continuePreprocess = false;
    this->minutiaeData.clear();

    if (!(this->testIterActual.blockSize == this->testIter.blockSize && this->testIterActual.sigma == this->testIter.sigma && this->testIterActual.lambda == this->testIter.lambda)) {
        emit clearLog("dbTester");
        emit logSignal("dbTester", "Block Size: " + QString::number(this->preParams.blockSize) + "; Sigma: " + QString::number(this->preParams.gaborSigma) + "; Lambda: " + QString::number(this->preParams.gaborLambda));

        if (this->testIterActual.lambda < this->testIter.lambda) {
            this->testIterActual.lambda++;
            this->preParams.gaborLambda = this->preParamsDefault.gaborLambda + this->testIterActual.lambda;
            this->preprocess();
        }
        else if (this->testIterActual.sigma < this->testIter.sigma) {
            this->testIterActual.lambda = 0;
            this->preParams.gaborLambda = this->preParamsDefault.gaborLambda;
            this->testIterActual.sigma++;
            this->preParams.gaborSigma = this->preParamsDefault.gaborSigma + this->testIterActual.sigma;
            this->preprocess();
        }
        else if (this->testIterActual.blockSize < this->testIter.blockSize) {
            this->testIterActual.lambda = 0;
            this->preParams.gaborLambda = this->preParamsDefault.gaborLambda;
            this->testIterActual.sigma = 0;
            this->preParams.gaborSigma = this->preParamsDefault.gaborSigma;
            this->testIterActual.blockSize++;
            this->preParams.blockSize = this->preParamsDefault.blockSize + this->testIterActual.blockSize * 2;
            this->preprocess();
        }
    }
    else {
        if (this->matcher == "suprema") UFM_Delete(this->hMatcher);
    }
}

void DatabaseTester::startTesting(QString matcher, int numOfSubject, int imgPerSubject)
{
    this->numOfSubject = numOfSubject;
    this->imgPerSubject = imgPerSubject;
    this->matcher = matcher.toLower();

    if (matcher == "suprema") {
        this->plotParams = {0, 1, 0.0001};

        UFM_STATUS ufm_res;

        ufm_res = UFM_Create(&this->hMatcher);
        if (ufm_res != 0) {
            emit warningSignal("Warning", "You have to connect a Suprema sensor first");
            return;
        }

        ufm_res = UFM_SetTemplateType(this->hMatcher, UFM_TEMPLATE_TYPE_ISO19794_2);
        int fastMode = 0;
        ufm_res = UFM_SetParameter(this->hMatcher, UFM_PARAM_FAST_MODE, &fastMode);
        int securityLevel = 4;
        ufm_res = UFM_SetParameter(this->hMatcher, UFM_PARAM_SECURITY_LEVEL, &securityLevel);
        int rotateMode = 0;
        ufm_res = UFM_SetParameter(this->hMatcher, UFM_PARAM_AUTO_ROTATE, &rotateMode);
    }
    else if (matcher == "bozorth") {
        this->plotParams = {0, 500, 1};
        emit logSignal("dbTester", "All iterations done");
    }

    this->preprocess();
}
