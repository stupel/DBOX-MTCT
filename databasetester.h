#ifndef DATABASETESTER_H
#define DATABASETESTER_H

#include <QObject>
#include <QThread>
#include <QDir>
#include <QDebug>
#include <QTime>
#include <QFile>
#include <QTextStream>
#include <QProcess>
#include <QMap>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>

#include "preprocessing.h"
#include "extraction.h"
#include "matcher.h"

#include "qmatconverter.h"

//OpenCV
#include <opencv2/opencv.hpp>

class DatabaseTester : public QThread
{
    Q_OBJECT

public:
    DatabaseTester();
    ~DatabaseTester();

    void setDbInputPath(const QString &value);
    QString getDbInputPath() const;
    void setExtractionFeatures(MATCHER matcher, bool useVarBlockSize, bool useOrientationFixer);
    void setPreprocessingParams(int blockSize, int basicOMapBlockSize, int advancedOMapBlockSize, double basicOMapSigma, double advancedOMapSigma, double gaborSigma, double gaborLambda);

private slots:
    void startTesting(MATCHER matcher, int numOfSubject, int imgPerSubject);
    void stateSlot(int state);

    void preprocessingDoneSlot(QMap<QString, PREPROCESSING_RESULTS> results);
    void extractionDoneSlot(QMap<QString, QVector<MINUTIA> > results);
    void extractionDoneSlot(QMap<QString, unsigned char *> results);
    void dbTestDoneSlot(DBTEST_RESULT results);


private:
    Preprocessing *preprocessing;
    Extraction *extraction;
    Matcher *matcher;

    QString dbInputPath;
    MATCHER matcherType;
    QString dbTestPhase;

    void run();

signals:
    void logSignal(const QString logFieldName, const QString text);
    void updateProgressBarSignal(QString barName, int value, QString text = "");
    void warningSignal(const QString type, const QString text, QString subject = "");
    void drawGraphSignal(DBTEST_RESULT results);
    void clearLog(QString objectName);
};

#endif // DATABASETESTER_H
