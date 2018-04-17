#ifndef DATABASETESTER_H
#define DATABASETESTER_H
#define GLOG_NO_ABBREVIATED_SEVERITIES

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
//#include "extraction.h"
#include "isoconverter.h"
#include "bozorth3m.h"

#include "qmatconverter.h"

//OpenCV
#include <opencv2/opencv.hpp>

#include "UFMatcher.h" // Suprema

typedef QVector<std::tuple<QPoint, int, int, int>> MINUTIAE_VECTOR;

typedef struct PLOT_PARAMS_ {
    double min;
    double max;
    double sensitivity;
} PLOT_PARAMS;

typedef struct PREPROCESS_PARAMS_ {
    int blockSize;
    int basicOMapBlockSize;
    int advancedOMapBlockSize;
    double basicOMapSigma;
    double advancedOMapSigma;
    double gaborSigma;
    double gaborLambda;
} PREPROCESS_PARAMS;

typedef struct TEST_ITERATION_ {
    int blockSize;
    int sigma;
    int lambda;
} TEST_ITERATION;

class DatabaseTester : public QThread
{
    Q_OBJECT

public:
    DatabaseTester();
    ~DatabaseTester();

    void setDbInputPath(const QString &value);
    QString getDbInputPath() const;
    void setExtractionSettings(bool useMask, bool useVarBlockSize, bool useFixOrientations, bool useDistinctMinutiae);
    void setPreprocessingParams(int blockSize, int basicOMapBlockSize, int advancedOMapBlockSize, double basicOMapSigma, double advancedOMapSigma, double gaborSigma, double gaborLambda);
    void setTestIter(int blockSize, int sigma, int lambda);

private slots:
    void startTesting(QString matcher, int numOfSubject, int imgPerSubject);
    void extract(cv::Mat imgSkeleton, cv::Mat imgSkeletonInverted, cv::Mat mask, cv::Mat orientationMap);
    void getBozorthScores(int);
    void stateSlot(int state);

private:
    Preprocessing *preprocessing;
    //Extraction *extraction;
    HUFMatcher hMatcher;
    BozorthMultiThreadManager bozorth3;

    QString dbInputPath;
    QString matcher;

    cv::Mat imgOrig;
    cv::Mat imgMask;
    QMap<QString, cv::Mat> imgMasks;
    QVector<QPair<MINUTIAE_VECTOR, QString>> minutiaeData;

    QMap<QString, MINUTIAE_VECTOR> bozorthTemplates;
    QVector<QPair<unsigned char*, QString>> isoTemplates;
    QVector<int> isoTemplateSizes;
    QVector<std::tuple<QString, QString, double, int>> impostorScoresInfo;      //sub1 vs sub2, success
    QVector<double> impostorScores;
    QVector<std::tuple<QString, QString, double, int>> genuineScoresInfo;       //sub1 vs sub2, success
    QVector<double> genuineScores;

    QTime timer;
    QDir inputImages;
    int actualImage;

    //EXTRACTION_SETTINGS exSettings;
    PREPROCESS_PARAMS preParamsDefault, preParams;
    PLOT_PARAMS plotParams;
    TEST_ITERATION testIter, testIterActual;

    FINGERPRINT_PAIRS genuinePairs;
    FINGERPRINT_PAIRS impostorPairs;

    bool readyGenuineScores;
    bool readyImpostorScores;

    bool continuePreprocess;
    int numOfSubject;
    int imgPerSubject;

    void preprocess();
    void convertToIso();
    void convertToBozorth();
    void compareFingerprints();
    void computeImpostorScores();
    void computeGenuineScores();
    double computeEERValue(const QVector<double> &, const QVector<double> &fnmr);
    void drawFmrFnmr();
    void testingDone();
    void sortNScaleMinutiaeByQuality(MINUTIAE_VECTOR &mv, int newMin, int newMax);
    void optimizeMinutiaeByQuality(MINUTIAE_VECTOR &mv);

    void run();

signals:
    void logSignal(const QString logFieldName, const QString text);
    void updateProgressBarSignal(QString barName, int value, QString text = "");
    void warningSignal(const QString type, const QString text, QString subject = "");
    void drawGraphSignal(QString graphType, QVector<double> x, QVector<double> y, double err = 0);
    void clearLog(QString objectName);
};

#endif // DATABASETESTER_H
