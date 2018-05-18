#include "minutiaemarker.h"

MinutiaeMarker::MinutiaeMarker()
{
    this->setObjectName("marker");
    this->outputPath = "./output";
}

void MinutiaeMarker::run()
{
    exec();
}

QString MinutiaeMarker::getInputPath() const
{
    return inputPath;
}

void MinutiaeMarker::setInputPath(const QString &value)
{
    inputPath = value;
}

QVector<std::tuple<QPoint, QString> > MinutiaeMarker::getMinutiae() const
{
    return minutiae;
}

void MinutiaeMarker::removeMinutia(int lineNum)
{
    if (lineNum < this->minutiae.size()) this->minutiae.removeAt(lineNum);
}

void MinutiaeMarker::removeAllBlocks()
{
    this->images.clear();
    this->minutiae.clear();
}

void MinutiaeMarker::setMinutiae(const QVector<std::tuple<QPoint, QString> > &value)
{
    minutiae = value;
}

void MinutiaeMarker::pushMinutia(QPoint xy, QString type)
{
    this->minutiae.push_back(std::make_tuple(xy, type));

    emit updateMinutiaeMarkerSceneSignal("add");
}

void MinutiaeMarker::insertImage(QString imgName, QVector<std::tuple<QPoint, QString>> minutiae)
{
    this->images.insert(imgName, minutiae);
}

QMap<QString, QVector<std::tuple<QPoint, QString> > > MinutiaeMarker::getImages() const
{
    return images;
}

QString MinutiaeMarker::getOutputPath() const
{
    return outputPath;
}

void MinutiaeMarker::setOutputPath(const QString &value)
{
    outputPath = value;
}

void MinutiaeMarker::updataMinutiae(QString prevImgName, QString imgName)
{
    if (this->minutiae.empty()) this->images.remove(prevImgName);
    else this->images[prevImgName] = this->minutiae;

    if (this->images.find(imgName) != this->images.end()) this->minutiae = this->images[imgName];
    else this->minutiae.clear();

    emit updateMinutiaeMarkerSceneSignal("remove");
}

QImage MinutiaeMarker::irisBlurBlock(QImage &qBlock, const double &blurValue, const double &irisBlurValue)
{
    cv::Mat block = h.QImage2Mat(qBlock, CV_8UC1);
    cv::Mat blockBlurred;
    cv::Mat irisBlurredBlock = cv::Mat::zeros(block.size(), block.type());

    cv::GaussianBlur(block, blockBlurred, cv::Size(0, 0), blurValue);;

    cv::Mat mask = cv::Mat(block.rows, block.cols, CV_8UC1, cv::Scalar(255));
    cv::circle(mask, cv::Point (block.cols / 2, block.rows / 2), block.rows / 2 * 0.85, cv::Scalar(0), -1);
    cv::GaussianBlur(mask, mask, cv::Size(0, 0), irisBlurValue);

    for (int y = 0; y < irisBlurredBlock.rows; ++y)
        for (int x = 0; x < irisBlurredBlock.cols; ++x)
        {
            uchar pixelOrig = block.at<uchar>(y, x);
            uchar pixelBlur = blockBlurred.at<uchar>(y, x);
            float blurVal = mask.at<unsigned char>(y, x)/255.0f;
            uchar pixelOut = blurVal * pixelBlur + (1.0f - blurVal)* pixelOrig;

            irisBlurredBlock.at<uchar>(y, x) = pixelOut;
        }

    return h.Mat2QImage(irisBlurredBlock, QImage::Format_Grayscale8);
}

QImage MinutiaeMarker::blurBlock(QImage &qBlock, const double &blurValue)
{
    cv::Mat blurredImg  = h.QImage2Mat(qBlock, CV_8UC1);

    cv::GaussianBlur(blurredImg, blurredImg, cv::Size(0, 0), blurValue);

    return this->h.Mat2QImage(blurredImg, QImage::Format_Grayscale8);
}

QImage MinutiaeMarker::sharpBlock(QImage &qBlock)
{
    cv::Mat sharpenedImg = h.QImage2Mat(qBlock, CV_8UC1);

    cv::GaussianBlur(sharpenedImg, sharpenedImg, cv::Size(0, 0), 3);
    cv::addWeighted(sharpenedImg, 1.5, sharpenedImg, -0.5, 0, sharpenedImg);

    return this->h.Mat2QImage(sharpenedImg, QImage::Format_Grayscale8);
}

QImage MinutiaeMarker::rotateBlock(QImage &qBlock, int angle)
{
    QTransform imgRotate;
    imgRotate.rotate(angle);

    return qBlock.transformed(imgRotate);
}


int MinutiaeMarker::countOutputFiles()
{
    int fileCnt = 0;

    for (auto img = this->images.begin(); img != this->images.end(); img++) fileCnt += img.value().size();

    return fileCnt;
}

void MinutiaeMarker::generateBlocks(int blockSize, int additionalBlocks, QString outputFormat, bool rotations, bool blur, double blurValue, bool irisBlur, double irisBlurValue)
{
    QString outputPath;
    QString leftOutputPath, rightOutputPath;
    QString leftImgName, rightImgName;
    QImage fpImg;
    QImage blockOrig, blockBlur, blockIrisBlur;
    QDir dir;

    int allFile = this->countOutputFiles();
    int currentFile = 0;
    int saveProgress = 0;

    if (this->outputPath == "") outputPath = "./";
    else outputPath = this->outputPath + "/";

    for (auto img = this->images.begin(); img != this->images.end(); img++) {
        for (int actBlockSize = blockSize - additionalBlocks*2; actBlockSize <= blockSize + additionalBlocks*2; actBlockSize += 2) {

            leftOutputPath = outputPath + QString::number(actBlockSize) + "x" +  QString::number(actBlockSize);
            rightOutputPath = img.key().left(img.key().lastIndexOf("."));
            dir.mkpath(leftOutputPath + "/orig/rot0/" + rightOutputPath);
            dir.setPath(leftOutputPath + "/orig/rot0/" + rightOutputPath);

            int exFileNum = dir.entryList(QStringList() << outputFormat.toLower()).size();
            for (auto block : img.value()) {

                leftImgName = leftOutputPath + "/orig/rot0/" + rightOutputPath + "/" + QString::number(actBlockSize);
                rightImgName = img.key().left(img.key().lastIndexOf(".")) + "_" + std::get<1>(block).left(3).toLower() +
                        "_" + QString::number(exFileNum) + outputFormat.mid(1).toLower();
                exFileNum++;

                fpImg.load(this->inputPath + "/" + img.key());
                fpImg.convertToFormat(QImage::Format_Grayscale8);

                blockOrig = fpImg.copy(QRect(std::get<0>(block).x() - actBlockSize/2, std::get<0>(block).y() - actBlockSize/2, actBlockSize, actBlockSize));
                blockOrig.save(leftImgName + "_orig_rot0_" + rightImgName);

                if (blur) {
                    dir.mkpath(leftOutputPath + "/blur/rot0/" + rightOutputPath);
                    leftImgName = leftOutputPath + "/blur/rot0/" + rightOutputPath + "/" + QString::number(actBlockSize);
                    blockBlur = this->blurBlock(blockOrig, blurValue);
                    blockBlur.save(leftImgName + "_blur_rot0_" + rightImgName);
                }
                if (irisBlur) {
                    dir.mkpath(leftOutputPath + "/irisblur/rot0/" + rightOutputPath);
                    leftImgName = leftOutputPath + "/irisblur/rot0/" + rightOutputPath + "/" + QString::number(actBlockSize);
                    blockIrisBlur = this->irisBlurBlock(blockOrig, blurValue, irisBlurValue);
                    blockIrisBlur.save(leftImgName + "_irisblur_rot0_" + rightImgName);
                }

                if (rotations) {
                    for (int rot = 90; rot < 360; rot += 90) {
                        leftImgName = leftOutputPath + "/orig/rot" + QString::number(rot) + "/" + rightOutputPath + "/" + QString::number(actBlockSize);
                        dir.mkpath(leftOutputPath + "/orig/rot" + QString::number(rot) + "/" + rightOutputPath);
                        rotateBlock(blockOrig, rot).save(leftImgName + "_orig_rot" + QString::number(rot) + "_" + rightImgName);

                        if (blur) {
                            leftImgName = leftOutputPath + "/blur/rot" + QString::number(rot) + "/" + rightOutputPath + "/" + QString::number(actBlockSize);
                            dir.mkpath(leftOutputPath + "/blur/rot" + QString::number(rot) + "/" + rightOutputPath);
                            rotateBlock(blockBlur, rot).save(leftImgName + "_blur_rot" + QString::number(rot) + "_" + rightImgName);
                        }

                        if (irisBlur) {
                            leftImgName = leftOutputPath + "/irisblur/rot" + QString::number(rot) + "/" + rightOutputPath + "/" + QString::number(actBlockSize);
                            dir.mkpath(leftOutputPath + "/irisblur/rot" + QString::number(rot) + "/" + rightOutputPath);
                            rotateBlock(blockIrisBlur, rot).save(leftImgName + "_irisblur_rot" + QString::number(rot) + "_" + rightImgName);
                        }
                    }
                }
            }

            //Progress bar update
            currentFile += img.value().size();
            if ((int)(((currentFile*1.0) / (allFile*additionalBlocks*2)) * 100) > saveProgress) {
                saveProgress = (int)(((currentFile*1.0) / (allFile*additionalBlocks*2)) * 100);
                emit updateProgressBarSignal(this->objectName(), saveProgress);
            }
        }
    }
    emit updateProgressBarSignal(this->objectName(), 0);
    emit blocksSaved();
}
