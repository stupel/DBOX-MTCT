#ifndef EXTRACTION_H
#define EXTRACTION_H
#define GLOG_NO_ABBREVIATED_SEVERITIES

#define VARBLOCKSTEP 1
#define VARBLOCKITER 3

#include <QObject>
#include <QFile>

#include <QImage>
#include <QPainter>
#include <QVector>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QtMath>

#include "helper.h"
#include "caffenetwork.h"

typedef QVector<std::tuple<QPoint, int, int, int>> MINUTIAE_VECTOR;

typedef struct MINUTIA_EX_ {
    QPoint xy;
    int type; // 0-end, 1-bif
    qreal angle; // in radians
    int quality;
} MINUTIA_EX;

typedef struct EXTRACTION_SETTINGS_ {
    bool useMask;
    bool useVarBlockSize;
    bool useFixOrientations;
    bool useDistincsMinutiae;
} EXTRACTION_SETTINGS;

class Extraction : public QObject
{
    Q_OBJECT

public:
    Extraction();
    ~Extraction();

    int loadImages(cv::Mat fpImage, cv::Mat orientationMap, cv::Mat fpSkeleton, cv::Mat fpSkeletonInverted);
    int loadMask(cv::Mat imgMask);

    void setLoadFolder(const QString &value);
    void setSaveFolder(const QString &value);

    void loadMaskModel();
    void loadExtractionModel();
    MINUTIAE_VECTOR extract(const EXTRACTION_SETTINGS &exSettings, const QString &matcher, const int &extractionBlockSize, const QString &fileName);
    cv::Mat getMask(const cv::Mat &originalImage_);

private:
    CaffeNetwork *maskClassifier;
    CaffeNetwork *extractionClassifier;

    QString maskModelFile;
    QString maskTrainedFile;
    QString maskMeanFile;
    QString maskLabelFile;
    QString extractionModelFile;
    QString extractionTrainedFile;
    QString extractionMeanFile;
    QString extractionLabelFile;

    QString loadFolder;
    QString saveFolder;

    cv::Mat imgOrig;
    cv::Mat imgMask;
    cv::Mat imgSkeleton;
    cv::Mat imgSkeletonInverted;
    cv::Mat orientationMap;

    bool imagesLoaded;
    bool maskLoaded;
    bool maskModelLoaded, extractionModelLoaded;

    int crossingNumber(const bool &useMask, const int &borderSize, QVector<MINUTIA_EX> &minutiaeCN);
    void fixEndings(QVector<MINUTIA_EX> &minutiae);
    void fixBifurcations(QVector<MINUTIA_EX> &minutiae, const int &borderSize);

    MINUTIAE_VECTOR checkMinutiae(const QVector<MINUTIA_EX> &minutiae, const QString &matcher, const int &borderSize, const int &blockSize, const bool &useVariableBlockSize, const QString &fileName);
    int makeMask(const cv::Mat &originalImage_, int maskBlockSize, int exBlockSize);
    void smoothMask(QImage &smoothedMask, int maskBlockSize);

signals:
    void loadMaskModelSignal(QString modelFile, QString trainedFile, QString meanFile, QString labelFile);
    void loadExtractionModelSignal(QString modelFile, QString trainedFile, QString meanFile, QString labelFile);
};

#endif // EXTRACTION_H
