#ifndef EXTRACTIONTESTER_H
#define EXTRACTIONTESTER_H

#include <QObject>
#include <QThread>
#include <QDebug>

#include "preprocessing.h"
#include "extraction.h"

class ExtractionTester : public QThread
{
    Q_OBJECT

public:
    ExtractionTester();
    ~ExtractionTester();

    QString getInputPath() const;
    void setInputPath(const QString &value);
    void setPreprocessingParams(int blockSize, int basicOMapBlockSize, int advancedOMapBlockSize, double basicOMapSigma, double advancedOMapSigma, double gaborSigma, double gaborLambda, int holeSize);
    void setFeatures(int numThreads, bool useGaborFilterGPU, bool useContrastEnhancement, bool useRemoveHoles, bool useFixOrientations, bool useMask, bool useQualityMap, bool useFrequencyMap);

    cv::Mat getImgOrig() const;
    void setImgOrig(const cv::Mat &value);

    cv::Mat getImgSkeleton() const;
    cv::Mat getImgSkeletonInv() const;
    cv::Mat getImgOMap() const;
    cv::Mat getImgQMap() const;
    cv::Mat getImgFMap() const;

    bool getIsImgLoaded() const;


private:

    QString inputPath;

    Preprocessing *preprocessing;
    Extraction *extraction;

    cv::Mat imgOrig;
    cv::Mat imgMask;
    cv::Mat imgOMap;
    cv::Mat imgQMap;
    cv::Mat imgFMap;
    cv::Mat imgEnhanced;
    cv::Mat imgBinarized;
    cv::Mat imgSkeleton;
    cv::Mat imgSkeletonInv;

    bool isImgLoaded;

    void sendResults();

private slots:
    void startTesting();
    void saveResults(PREPROCESSING_ALL_RESULTS results);
    void sendDurationLog(PREPROCESSING_DURATIONS durations);

signals:
    void preprocessingResultsSignal(cv::Mat imgOrig, cv::Mat imgOMap, cv::Mat imgEnhanced, cv::Mat imgBinarized, cv::Mat imgSkeleton, cv::Mat imgSkeletonInv, cv::Mat imgMask, cv::Mat imgQMap, cv::Mat imgFMap);
    void sendLogSignal(QString, QString);
};

#endif // EXTRACTIONTESTER_H
