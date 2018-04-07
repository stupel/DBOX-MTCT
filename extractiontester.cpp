#include "extractiontester.h"

ExtractionTester::ExtractionTester()
{
    this->preprocessing = new Preprocessing();
    this->extraction = new Extraction();

    this->isImgLoaded = false;

    qRegisterMetaType<PREPROCESSING_ALL_RESULTS>("PREPROCESSING_ALL_RESULTS");
    qRegisterMetaType<PREPROCESSING_DURATIONS>("PREPROCESSING_DURATIONS");
    connect(this->preprocessing, SIGNAL(preprocessingAdvancedDoneSignal(PREPROCESSING_ALL_RESULTS)), this, SLOT(saveResults(PREPROCESSING_ALL_RESULTS)));
    connect(this->preprocessing, SIGNAL(preprocessingDurrationSignal(PREPROCESSING_DURATIONS)), this, SLOT(sendDurationLog(PREPROCESSING_DURATIONS)));
    //connect(this->preprocessing, SIGNAL(preprocessingErrorSignal(int)), this, SLOT());
}

ExtractionTester::~ExtractionTester()
{

}

QString ExtractionTester::getInputPath() const
{
    return inputPath;
}

void ExtractionTester::setInputPath(const QString &value)
{
    inputPath = value;
}

void ExtractionTester::setPreprocessingParams(int blockSize, int basicOMapBlockSize, int advancedOMapBlockSize, double basicOMapSigma, double advancedOMapSigma, double gaborSigma, double gaborLambda, int holeSize)
{
    this->preprocessing->setPreprocessingParams(blockSize, gaborLambda, gaborSigma, basicOMapBlockSize, basicOMapSigma, advancedOMapBlockSize, advancedOMapSigma, holeSize);
}

void ExtractionTester::setFeatures(int numThreads, bool useGaborFilterGPU, bool useContrastEnhancement, bool useRemoveHoles, bool useFixOrientations, bool useMask, bool useQualityMap, bool useFrequencyMap)
{
    this->preprocessing->setFeatures(true, numThreads, useGaborFilterGPU, useContrastEnhancement, useRemoveHoles, useFixOrientations, useMask, useQualityMap, useFrequencyMap);
}

cv::Mat ExtractionTester::getImgOrig() const
{
    return imgOrig;
}

void ExtractionTester::setImgOrig(const cv::Mat &value)
{
    this->imgOrig = value;
    this->isImgLoaded = true;
}

cv::Mat ExtractionTester::getImgSkeleton() const
{
    return imgSkeleton;
}

cv::Mat ExtractionTester::getImgSkeletonInv() const
{
    return imgSkeletonInv;
}

cv::Mat ExtractionTester::getImgOMap() const
{
    return imgOMap;
}

cv::Mat ExtractionTester::getImgQMap() const
{
    return imgQMap;
}

bool ExtractionTester::getIsImgLoaded() const
{
    return isImgLoaded;
}

cv::Mat ExtractionTester::getImgFMap() const
{
    return imgFMap;
}

void ExtractionTester::startTesting()
{
    if (isImgLoaded) {
        this->preprocessing->loadImg(this->imgOrig);

        this->preprocessing->run();
    }
}

void ExtractionTester::saveResults(PREPROCESSING_ALL_RESULTS results)
{
    this->imgMask = results.imgMask;
    this->imgOMap = results.imgOrientationMap;
    this->imgQMap = results.imgQualityMap;
    this->imgFMap = results.imgFrequencyMap;
    this->imgEnhanced = results.imgEnhanced;
    this->imgBinarized = results.imgBinarized;
    this->imgSkeleton = results.imgSkeleton;
    this->imgSkeletonInv = results.imgSkeletonInverted;

    this->sendResults();
}

void ExtractionTester::sendResults()
{
    emit preprocessingResultsSignal(this->imgOrig, this->imgOMap, this->imgEnhanced, this->imgBinarized, this->imgSkeleton, this->imgSkeletonInv, this->imgMask, this->imgQMap, this->imgFMap);
}

void ExtractionTester::sendDurationLog(PREPROCESSING_DURATIONS durations)
{
    QString log;
    log = "PREPROCESSING DURATIONS:\n";
    if (durations.contrastEnhancement != 0) log += "Contrast Enhancement: " + QString::number(durations.contrastEnhancement) + "ms\n";
    log += "Orientation Map: " + QString::number(durations.orientationMap) + "ms\n";
    if (durations.mask != 0) log += "Mask: " + QString::number(durations.mask) + "ms\n";
    if (durations.frequencyMap != 0) log += "Frequency Map: " + QString::number(durations.frequencyMap) + "ms\n";
    if (durations.qualityMap != 0) log += "Quality Map: " + QString::number(durations.qualityMap) + "ms\n";
    log += "Gabor Filter: " + QString::number(durations.gaborFilter) + "ms\n";
    log += "Binarization: " + QString::number(durations.binarization) + "ms\n";
    if (durations.removingHoles != 0) log += "Removing Holes: " + QString::number(durations.removingHoles) + "ms\n";
    log += "Thinning: " + QString::number(durations.thinning) + "ms\n";

    emit sendLogSignal("exTester", log);
}
