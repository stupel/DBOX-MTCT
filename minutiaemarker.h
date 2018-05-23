#ifndef MINUTIAEMARKER_H
#define MINUTIAEMARKER_H

#include <QObject>
#include <QVector>
#include <QPoint>
#include <QMap>
#include <QDir>
#include <QThread>

#include "mousefingerprintscene.h"
#include "qmatconverter.h"
#include "opencv2/opencv.hpp"

class MinutiaeMarker : public QThread
{
    Q_OBJECT

public:
    MinutiaeMarker();

    QString getInputPath() const;
    void setInputPath(const QString &value);
    QString getOutputPath() const;
    void setOutputPath(const QString &value);
    QVector<std::tuple<QPoint, QString> > getMinutiae() const;
    void setMinutiae(const QVector<std::tuple<QPoint, QString> > &value);
    QMap<QString, QVector<std::tuple<QPoint, QString> > > getImages() const;
    void insertImage(QString imgName, QVector<std::tuple<QPoint, QString>> minutiae);
    void removeMinutia(int lineNum);
    void removeAllBlocks();

    QImage rotateBlock(QImage &qBlock, int angle);
    QImage irisBlurBlock(QImage &qBlock, const double &blurValue, const double &irisBlurValue);
    QImage blurBlock(QImage &qBlock, const double &blurValue);
    QImage sharpBlock(QImage &qBlock);

private:
    QMatConverter h;
    void run();

    QString inputPath;
    QString outputPath;

    QMap<QString, QVector<std::tuple<QPoint, QString>>> images;
    QVector<std::tuple<QPoint, QString>> minutiae;

    int countOutputFiles();

private slots:
    void pushMinutia(QPoint xy, QString type);
    void generateBlocks(int blockSize, int additionalBlocks, QString outputFormat, bool rotations, bool blur, double blurValue, bool irisBlur, double irisBlurValue, double irisRadiusValue);
    void updataMinutiae(QString prevImgName, QString imgName);

signals:
    void updateProgressBarSignal(QString barName, int value, QString text = "");
    void updateMinutiaeMarkerSceneSignal(QString action);
    void blocksSaved();

};

#endif // MINUTIAEMARKER_H
