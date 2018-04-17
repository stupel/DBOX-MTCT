#include "minutiaechecker.h"

MinutiaeChecker::MinutiaeChecker()
{
    this->setObjectName("checker");

    this->fileDeploy = "./core/config/Caffe/minutiae_deploy.prototxt";
    this->fileCaffeModel = "./core/config/Caffe/minutiae.caffemodel";
    this->fileImageMean = "./core/config/Caffe/minutiae_imagemean.binaryproto";
    this->fileLabelNames = "./core/config/Caffe/minutiae_labels.txt";

    this->caffeNetworkTh = new CaffeNetwork();
    this->caffeNetworkTh->moveToThread(this->caffeNetworkTh);
    this->caffeNetworkTh->start();

    connect(this, SIGNAL(loadModelSignal(const QString, const QString, const QString, const QString)), this->caffeNetworkTh, SLOT(loadModel(const QString, const QString, const QString, const QString)));
    //connect(this->caffeNetworkTh, SIGNAL(finished()), this, SLOT(finished()));
    connect(this->caffeNetworkTh, SIGNAL(started()), this, SLOT(loadCaffeModel()));

}

MinutiaeChecker::~MinutiaeChecker()
{
    if (this->caffeNetworkTh) this->caffeNetworkTh->exit();
}

void MinutiaeChecker::run()
{
    exec();
}

void MinutiaeChecker::loadCaffeModel()
{
    emit loadModelSignal(this->fileDeploy, this->fileCaffeModel, this->fileImageMean, this->fileLabelNames);
}

void MinutiaeChecker::predictOne(const QImage &fpQImage, const QPoint &xy, int blockSize, bool variableBlockSize)
{
    if (this->caffeNetworkTh->getNetworkLoaded()) {
        QVector<QPair<QString, float> > predictedData;

        cv::Mat fpImage;
        int borderSize = blockSize;
        if (variableBlockSize) borderSize += VARBLOCKITER * VARBLOCKSTEP;

        //make border to allow predict the endpoints
        cv::copyMakeBorder(QMatConverter::QImage2Mat(fpQImage, CV_8UC1), fpImage, borderSize, borderSize, borderSize, borderSize, cv::BORDER_CONSTANT, cv::Scalar(255,255,255));

        cv::Mat block = fpImage(cv::Rect(xy.x()+borderSize - blockSize/2, xy.y()+borderSize - blockSize/2, blockSize, blockSize));
        std::vector<Prediction> prediction = this->caffeNetworkTh->classify(block);

        if (variableBlockSize) {
            QVector<std::vector<Prediction>> predictions;
            for (int i = 0; i < VARBLOCKITER; i++) {
                block = fpImage(cv::Rect(xy.x()+borderSize - (blockSize + (i+1)*VARBLOCKSTEP)/2, xy.y()+borderSize - (blockSize + (i+1)*VARBLOCKSTEP)/2, (blockSize + (i+1)*VARBLOCKSTEP), (blockSize + (i+1)*VARBLOCKSTEP)));
                predictions.push_back(this->caffeNetworkTh->classify(block));
            }
            for (auto i : predictions) {
                if (i[0].second == 1 && i[0].first != "Nothing") break;
                if (i[0].second > prediction[0].second) prediction = i;
            }
        }

        for (int i = 0; i < prediction.size(); i++) predictedData.push_back(qMakePair(QString::fromStdString(prediction[i].first), prediction[i].second));

        emit sendPredictedMinutiaSignal(xy, predictedData);
    }
}

void MinutiaeChecker::predictHeatmap(const QImage &fpQImage, int blockSize, bool variableBlockSize)
{
    if (this->caffeNetworkTh->getNetworkLoaded()) {
        cv::Mat fpImage;
        cv::Mat heatMap(fpQImage.height(), fpQImage.width(), CV_8UC3);
        std::vector<Prediction> prediction;
        cv::Mat block;
        QColor color;
        QImage qHeatMap;

        int borderSize = blockSize;
        if (variableBlockSize) borderSize += VARBLOCKITER * VARBLOCKSTEP;

        //make border to allow predict the endpoints
        cv::copyMakeBorder(QMatConverter::QImage2Mat(fpQImage, CV_8UC1), fpImage, borderSize, borderSize, borderSize, borderSize, cv::BORDER_CONSTANT, cv::Scalar(255,255,255));

        /*float end;
        float bif;
        float noth;

        QFile data("data.txt");
        data.open(QIODevice::WriteOnly);
        QTextStream ts(&data);
        ts.setRealNumberNotation(QTextStream::FixedNotation);*/
        int progress = 0;

        for (int x = 0 + borderSize; x < fpQImage.width() + borderSize; x++) {
            for (int y = 0 + borderSize; y < fpQImage.height() + borderSize; y++) {

                block = fpImage(cv::Rect(x - blockSize/2, y - blockSize/2, blockSize, blockSize));
                prediction = this->caffeNetworkTh->classify(block);

                if (variableBlockSize) {
                    QVector<std::vector<Prediction>> predictions;
                    for (int i = 0; i < VARBLOCKITER; i++) {
                        block = fpImage(cv::Rect(x - (blockSize + (i+1)*VARBLOCKSTEP)/2, y - (blockSize + (i+1)*VARBLOCKSTEP)/2, (blockSize + (i+1)*VARBLOCKSTEP), (blockSize + (i+1)*VARBLOCKSTEP)));
                        predictions.push_back(this->caffeNetworkTh->classify(block));
                    }
                    for (auto i : predictions) {
                        if (i[0].second == 1 && i[0].first != "Nothing") break;
                        if (i[0].second > prediction[0].second) prediction = i;
                    }
                }

                //qDebug() << this->objectName();
                if (int((((x-borderSize)*fpQImage.height()+y+1-borderSize)*1.0 / (fpQImage.width()*fpQImage.height())) * 100) > progress) {
                    progress = (int)((((x-borderSize)*fpQImage.height()+y+1-borderSize)*1.0 / (fpQImage.width()*fpQImage.height())) * 100);
                    emit updateProgressBarSignal(this->objectName(), progress);
                }

                /*for (int cnt = 0; cnt< prediction.size(); cnt++) {
                    if (prediction[cnt].first == "Ending") end = prediction[cnt].second;
                    if (prediction[cnt].first == "Bifurcation") bif = prediction[cnt].second;
                    if (prediction[cnt].first == "Nothing") noth = prediction[cnt].second;
                }

                ts << x << " " << y << " " << 0 << " " << end << " " << bif << " " << noth << "\n";*/

                //visualisation!!!

                /*if (prediction[0].second*100 < threshold) color = QColor(255,255,0);
                    else if (prediction[0].first == "Bifurcation") color = QColor(0,255,0);
                    else if (prediction[0].first == "Ending") color = QColor(0,0,255);
                    else if (prediction[0].first == "Nothing") color = QColor(255,255,0);

                    heatQMap.setPixelColor(QPoint(x-blockSize, y-blockSize), color);*/
                //qDebug() << "x: " + QString::number(x) + " y: " + QString::number(y);
            }
        }
        //data.close();
        emit heatmapReadySignal(qHeatMap);
    }
    else {
        //Net not loaded
    }
}

QString MinutiaeChecker::getImgInputPath() const
{
    return imgInputPath;
}

void MinutiaeChecker::setImgInputPath(const QString &value)
{
    imgInputPath = value;
}

QString MinutiaeChecker::getModelInputFile() const
{
    return modelInputFile;
}

void MinutiaeChecker::setModelInputFile(const QString &value)
{
    modelInputFile = value;
}
