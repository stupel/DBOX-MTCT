#ifndef NETWORKTRAINER_H
#define NETWORKTRAINER_H

#include <QObject>
#include <QDir>
#include <QFile>
#include <QDirIterator>
#include <QDebug>
#include <QVector>
#include <QThread>

#include "caffenetwork.h"

class NetworkTrainer : public QThread
{
    Q_OBJECT

public:
    NetworkTrainer();

    QString getImgInputPath() const;
    void setImgInputPath(const QString &value);

    QString getOutputPath() const;
    void setOutputPath(const QString &value);

    QString getFileFormat() const;
    void setFileFormat(const QString &value);

private:
    QString imgInputPath;
    QString outputPath;
    QString fileFormat;

    //CaffeTrain caffeTrain;
    CaffeNetwork *caffeNetworkTh;

    void run();
    QVector<QPair<QString, int>> dirExtractor(const QString& inputDir, const QString &outputDir, const QVector<QString>& minutiaTypes, const QString& fileFormat, const QString &setName, bool rotations, bool blur, bool irisblur, int trainSet, int testSet);

private slots:
    void startTrain(bool rotations, bool blur, bool irisblur, int trainSet, int testSet);
    void sendLog(QString logFieldName, QString text);
    void sendProgressBarValue(QString progressbarName, int value, QString text);

signals:
    void convertImagesetSignal(QVector<QPair<QString, int>>, QString, QString);
    void logSignal(QString, QString);
    void updateProgressBarSignal(QString barName, int value, QString text = "");
    void clearLog(QString objectName);
};

#endif // NETWORKTRAINER_H
