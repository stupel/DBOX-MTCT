#ifndef MINUTIAECHECKER_H
#define MINUTIAECHECKER_H

#define VARBLOCKSTEP 1
#define VARBLOCKITER 5
#define ACCEPTTHRESHOLD 99.8
#define WHITEIGNORE false

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QFile>
#include <QTextStream>
#include <QFuture>
#include <QtConcurrent/QtConcurrentRun>

#include "caffenetwork.h"
#include "qmatconverter.h"

class MinutiaeChecker : public QThread
{
    Q_OBJECT

public:
    MinutiaeChecker();
    ~MinutiaeChecker();

    QString getImgInputPath() const;
    void setImgInputPath(const QString &value);

    QString getModelInputFile() const;
    void setModelInputFile(const QString &value);

    //void nic();

private slots:
    void loadCaffeModel();
    void predictHeatmap(const QImage &fpQImage, int blockSize, bool variableBlockSize);
    void predictOne(const QImage &fpQImage, const QPoint &xy, int blockSize, bool variableBlockSize);


signals:
    void loadModelSignal(const QString, const QString, const QString, const QString);
    void updateProgressBarSignal(const QString barName, const int value, QString text = "");
    void heatmapReadySignal(const QImage);
    void sendPredictedMinutiaSignal(const QPoint, const QVector<QPair<QString,float> >);

private:
    QString imgInputPath;
    QString modelInputFile;

    QString fileDeploy;
    QString fileCaffeModel;
    QString fileImageMean;
    QString fileLabelNames;

    CaffeNetwork *caffeNetworkTh;

    void heatmapGeneratorTh(cv::Mat &fpImage, cv::Mat &heatMap, int height, int blockSize, int borderSize, bool variableBlockSize, int startX);
    void run();

};

#endif // MINUTIAECHECKER_H
