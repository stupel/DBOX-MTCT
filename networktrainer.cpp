#include "networktrainer.h"

NetworkTrainer::NetworkTrainer()
{

}

void NetworkTrainer::run()
{
    exec();
}

void NetworkTrainer::sendLog(QString logFieldName, QString text)
{
    emit logSignal(logFieldName, text);
}

void NetworkTrainer::sendProgressBarValue(QString progressbarName, int value, QString text)
{
    emit updateProgressBarSignal(progressbarName, value, text);
}

QVector<QPair<QString, int> > NetworkTrainer::dirExtractor(const QString& inputDir, const QString& outputDir, const QVector<QString>& minutiaTypes, const QString& fileFormat, const QString& setName, bool rotations, bool blur, bool irisblur, int trainSet, int testSet)
{

    // spocitanie vsetkych suborov
//    QDirIterator test(inputDir, QStringList() << "*" + minutiaType +"*." + fileFormat+ "", QDir::Files, QDirIterator::Subdirectories);
//    int i=0;
//    while (test.hasNext()){
//        test.next();
//        i++;
//    }
//    qDebug() << "Number of files: " <<  i;

    QFile data(outputDir + "/" + setName + "ImgPaths.txt");
    data.open(QIODevice::WriteOnly);
    QTextStream ts(&data);

    QVector<QPair<QString, int> > imgPaths;
    int cnt = 0;

    QString rotStr = "rot0";
    QStringList strList;
    if (rotations) rotStr = "rot";

    for (int i = 0; i < minutiaTypes.size(); i++) {
        strList << "*_orig_" + rotStr + "*" + minutiaTypes[i] + "*." + fileFormat;
        if (blur) strList << "*_blur_" + rotStr + "*" + minutiaTypes[i] +"*." + fileFormat;
        if (irisblur) strList << "*_irisblur_" + rotStr + "*" + minutiaTypes[i] +"*." + fileFormat;
        QDirIterator iterator(inputDir, strList, QDir::Files, QDirIterator::Subdirectories);

        while (iterator.hasNext()){
            QString s = iterator.next();
            if (setName == "train") {
                if (cnt <= trainSet) {
                    imgPaths.push_back(qMakePair(s, i));
                    ts << s << " " << i << "\n";
                }
            }
            else if (setName == "test") {
                if (cnt <= testSet) {
                    imgPaths.push_back(qMakePair(s, i));
                    ts << s << " " << i << "\n";
                }
            }

            cnt++;
            if (cnt > 100) cnt = 0;
        }
        strList.clear();
    }

    data.close();

    return imgPaths;
}

void NetworkTrainer::startTrain(bool rotations, bool blur, bool irisblur, int trainSet, int testSet)
{
    this->caffeNetworkTh = new CaffeNetwork();
    this->caffeNetworkTh->moveToThread(this->caffeNetworkTh);
    this->caffeNetworkTh->start();

    connect(this->caffeNetworkTh, SIGNAL(logSignal(QString, QString)), this, SLOT(sendLog(QString, QString)));
    connect(this->caffeNetworkTh, SIGNAL(updateProgressBarSignal(QString, int, QString)), this, SLOT(sendProgressBarValue(QString, int, QString)));

    qRegisterMetaType<QVector<QPair<QString, int>>>("QVector<QPair<QString, int>");

    //Caffe Network Connecter
    connect(this, SIGNAL(convertImagesetSignal(QVector<QPair<QString, int>>, QString, QString)), this->caffeNetworkTh, SLOT(convertImageset(QVector<QPair<QString,int> >, QString, QString)));

    //QVector<QString> minutiaTypes = {"bif", "end", "not"};
    QVector<QString> minutiaTypes = {"end", "not"};

    QString setName = "train";
    emit convertImagesetSignal(this->dirExtractor(this->imgInputPath, this->outputPath, minutiaTypes, this->fileFormat, setName, rotations, blur, irisblur, trainSet, testSet), this->outputPath, setName);

    setName = "test";
    emit convertImagesetSignal(this->dirExtractor(this->imgInputPath, this->outputPath, minutiaTypes, this->fileFormat, setName, rotations, blur, irisblur, trainSet, testSet), this->outputPath, setName);
}

QString NetworkTrainer::getImgInputPath() const
{
    return imgInputPath;
}

void NetworkTrainer::setImgInputPath(const QString &value)
{
    imgInputPath = value;
}

QString NetworkTrainer::getOutputPath() const
{
    return outputPath;
}

void NetworkTrainer::setOutputPath(const QString &value)
{
    outputPath = value;
}

QString NetworkTrainer::getFileFormat() const
{
    return fileFormat;
}

void NetworkTrainer::setFileFormat(const QString &value)
{
    fileFormat = value;
}
