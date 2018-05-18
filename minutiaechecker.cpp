#include "minutiaechecker.h"

MinutiaeChecker::MinutiaeChecker()
{
    this->setObjectName("checker");

    this->fileDeploy = "./core/config/Caffe/extraction_deploy.prototxt";
    this->fileCaffeModel = "./core/config/Caffe/extraction.caffemodel";
    this->fileImageMean = "./core/config/Caffe/extraction_imagemean.binaryproto";
    this->fileLabelNames = "./core/config/Caffe/extraction_labels.txt";

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

            float bestBlock[3] = {0,0,0};
            for (std::vector<Prediction> prediction : predictions) {
                if (prediction[0].first[0] == 'E' || prediction[0].first[0] == 'e') {
                    bestBlock[0] += prediction[0].second;
                    if (prediction[1].first[0] == 'B' || prediction[1].first[0] == 'b') {
                        bestBlock[1] += prediction[1].second;
                        bestBlock[2] += prediction[2].second;
                    }
                    else {
                        bestBlock[2] += prediction[1].second;
                        bestBlock[1] += prediction[2].second;
                    }
                }
                else if (prediction[0].first[0] == 'B' || prediction[0].first[0] == 'b') {
                    bestBlock[1] += prediction[0].second;
                    if (prediction[1].first[0] == 'E' || prediction[1].first[0] == 'e') {
                        bestBlock[0] += prediction[1].second;
                        bestBlock[2] += prediction[2].second;
                    }
                    else {
                        bestBlock[2] += prediction[1].second;
                        bestBlock[0] += prediction[2].second;
                    }
                }
                else {
                    bestBlock[2] += prediction[0].second;
                    if (prediction[1].first[0] == 'E' || prediction[1].first[0] == 'e') {
                        bestBlock[0] += prediction[1].second;
                        bestBlock[1] += prediction[2].second;
                    }
                    else {
                        bestBlock[1] += prediction[1].second;
                        bestBlock[0] += prediction[2].second;
                    }
                }
            }

            if (bestBlock[0] > bestBlock[1] && bestBlock[0] > bestBlock[2]) {
                predictedData.push_back(qMakePair(QString("Ending"), bestBlock[0]/VARBLOCKITER));
                if (bestBlock[1] > bestBlock[2]) {
                    predictedData.push_back(qMakePair(QString("Bifurcation"), bestBlock[1]/VARBLOCKITER));
                    predictedData.push_back(qMakePair(QString("Nothing"), bestBlock[2]/VARBLOCKITER));
                }
                else {
                    predictedData.push_back(qMakePair(QString("Nothing"), bestBlock[2]/VARBLOCKITER));
                    predictedData.push_back(qMakePair(QString("Bifurcation"), bestBlock[1]/VARBLOCKITER));
                }
            }
            else if (bestBlock[1] > bestBlock[0] && bestBlock[1] > bestBlock[2]) {
                predictedData.push_back(qMakePair(QString("Bifurcation"), bestBlock[1]/VARBLOCKITER));
                if (bestBlock[0] > bestBlock[2]) {
                    predictedData.push_back(qMakePair(QString("Ending"), bestBlock[0]/VARBLOCKITER));
                    predictedData.push_back(qMakePair(QString("Nothing"), bestBlock[2]/VARBLOCKITER));
                }
                else {
                    predictedData.push_back(qMakePair(QString("Nothing"), bestBlock[2]/VARBLOCKITER));
                    predictedData.push_back(qMakePair(QString("Ending"), bestBlock[0]/VARBLOCKITER));
                }
            }
            else {
                predictedData.push_back(qMakePair(QString("Nothing"), bestBlock[2]/VARBLOCKITER));
                if (bestBlock[0] > bestBlock[1]) {
                    predictedData.push_back(qMakePair(QString("Ending"), bestBlock[0]/VARBLOCKITER));
                    predictedData.push_back(qMakePair(QString("Bifurcation"), bestBlock[1]/VARBLOCKITER));
                }
                else {
                    predictedData.push_back(qMakePair(QString("Bifurcation"), bestBlock[1]/VARBLOCKITER));
                    predictedData.push_back(qMakePair(QString("Ending"), bestBlock[0]/VARBLOCKITER));
                }
            }
        }
        else for (int i = 0; i < prediction.size(); i++) predictedData.push_back(qMakePair(QString::fromStdString(prediction[i].first), prediction[i].second));

        emit sendPredictedMinutiaSignal(xy, predictedData);
    }
}

void MinutiaeChecker::predictHeatmap(const QImage &fpQImage, int blockSize, bool variableBlockSize)
{
    /*if (*this->mask.cpuOnly) Caffe::set_mode(Caffe::CPU);
    else */Caffe::set_mode(Caffe::GPU);

    if (this->caffeNetworkTh->getNetworkLoaded()) {
        cv::Mat fpImage;
        cv::Mat heatMap(fpQImage.height(), fpQImage.width(), CV_32FC1);
        cv::Mat block;

        int borderSize = blockSize;
        if (variableBlockSize) borderSize += VARBLOCKITER * VARBLOCKSTEP;

        //make border to allow predict the endpoints
        cv::copyMakeBorder(QMatConverter::QImage2Mat(fpQImage, CV_8UC1), fpImage, borderSize, borderSize, borderSize, borderSize, cv::BORDER_CONSTANT, cv::Scalar(255,255,255));

        std::vector<cv::Mat> blocks;
        std::vector<std::vector<Prediction>> predictions;
        std::vector<Prediction> prediction;

        for (int x = 0 + borderSize; x < fpQImage.width() + borderSize; x++) {
            for (int y = 0 + borderSize; y < fpQImage.height() + borderSize; y++) {
                block = fpImage(cv::Rect(x - blockSize/2, y - blockSize/2, blockSize, blockSize));
                blocks.push_back(block);
            }

            //Use Batch
            predictions = this->caffeNetworkTh->classifyBatch(blocks, 3);
            blocks.clear();

            int cnt = 0;
            for (int y = 0 + borderSize; y < fpQImage.height() + borderSize; y++) {
                prediction = predictions[cnt++];
                if (prediction[0].first[0] == 'N' || prediction[0].first[0] == 'n') heatMap.at<float>(y-borderSize, x-borderSize) = prediction[0].second;
                else if (prediction[0].first[0] == 'E' || prediction[0].first[0] == 'e') heatMap.at<float>(y-borderSize, x-borderSize) = prediction[0].second + 1;
                else heatMap.at<float>(y-borderSize, x-borderSize) = prediction[0].second + 2;
            }

        }
        emit heatmapReadySignal(Helper::Mat2QImage(heatMap, QImage::Format_Grayscale8));
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
