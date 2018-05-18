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
    void setFeatures(bool useContrastEnhancement, bool useAdvancedOrientationMap, bool useRemoveHoles, bool generateIvertedSkeleton, bool useMask, bool useQualityMap, bool useFrequencyMap);
    void setExtractionFeatures(int useOrientationFixer, int useVarBlockSize);

    cv::Mat getImgOrig() const;
    void setImgOrig(const cv::Mat &value);

    cv::Mat getImgSkeleton() const;
    cv::Mat getImgSkeletonInv() const;
    cv::Mat getImgOMap() const;
    cv::Mat getImgQMap() const;
    cv::Mat getImgFMap() const;

    bool getIsImgLoaded() const;


    QVector<MINUTIA> getCrossingNumber() const;
    QVector<MINUTIA> getFixedOrientations() const;
    QVector<MINUTIA> getCheckedMnutiae() const;

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
    cv::Mat oMap;
    cv::Mat qMap;

    QVector<MINUTIA> crossingNumber;
    QVector<MINUTIA> fixedOrientations;
    QVector<MINUTIA> checkedMnutiae;

    bool isImgLoaded;

    void sendResults();
    void startExtraction();

private slots:
    void startTesting();
    void saveResults(PREPROCESSING_ALL_RESULTS results);
    void sendDurationLog(PREPROCESSING_DURATIONS durations);

    void sendExtractionDurationLog(EXTRACTION_DURATIONS durations);
    void saveExtractionResults(EXTRACTION_RESULTS results);
    void sendExtractionResults();

signals:
    void preprocessingResultsSignal(cv::Mat imgOrig, cv::Mat imgOMap, cv::Mat imgEnhanced, cv::Mat imgBinarized, cv::Mat imgSkeleton, cv::Mat imgSkeletonInv, cv::Mat imgMask, cv::Mat imgQMap, cv::Mat imgFMap);
    void sendLogSignal(QString field, QString text);
    void extractionResultsSignal(cv::Mat imgSkeleton, QVector<MINUTIA> crossingNumber, QVector<MINUTIA> fixedOrientations, QVector<MINUTIA> checkedMnutiae);
    void startPreprocessing();
};

#endif // EXTRACTIONTESTER_H
