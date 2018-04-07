#include "extraction.h"

Extraction::Extraction()
{
    Caffe::set_mode(Caffe::GPU);

    this->imagesLoaded = false;
    this->maskLoaded = false;
    this->maskModelLoaded = false;
    this->extractionModelLoaded = false;

    this->maskClassifier = nullptr;
    this->extractionClassifier = nullptr;

    this->loadFolder = "./core/config/Caffe";
    this->saveFolder = "./output/";

    this->maskModelFile = this->loadFolder + "/mask_deploy.prototxt";
    this->maskTrainedFile = this->loadFolder + "/mask.caffemodel";
    this->maskMeanFile = this->loadFolder + "/mask_imagemean.binaryproto";
    this->maskLabelFile = this->loadFolder + "/mask_labels.txt";
    this->extractionModelFile = this->loadFolder + "/minutiae_deploy.prototxt";
    this->extractionTrainedFile = this->loadFolder + "/minutiae.caffemodel";
    this->extractionMeanFile = this->loadFolder + "/minutiae_imagemean.binaryproto";
    this->extractionLabelFile = this->loadFolder + "/minutiae_labels.txt";

}

Extraction::~Extraction()
{
    if (this->maskClassifier) this->maskClassifier->exit();
    if (this->extractionClassifier) this->extractionClassifier->exit();
}

int Extraction::loadImages(cv::Mat fpImage, cv::Mat orientationMap, cv::Mat fpSkeleton, cv::Mat fpSkeletonInverted)
{
    this->imgOrig = fpImage.rowRange(0, orientationMap.rows).colRange(0, orientationMap.cols);
    this->orientationMap = orientationMap;
    this->imgSkeleton = fpSkeleton.rowRange(0, orientationMap.rows).colRange(0, orientationMap.cols);
    this->imgSkeletonInverted = fpSkeletonInverted.rowRange(0, orientationMap.rows).colRange(0, orientationMap.cols);

    this->imagesLoaded = true;
    this->maskLoaded = false;

    return 0;
}

int Extraction::loadMask(cv::Mat fpMask)
{
    this->imgMask = fpMask;
    this->maskLoaded = true;

    return 1;
}

int Extraction::makeMask(const cv::Mat &originalImage_, int maskBlockSize, int exBlockSize)
{
    this->imgMask = cv::Mat::zeros(originalImage_.rows, originalImage_.cols, CV_8UC1);
    cv::Mat whiteBlock = cv::Mat(maskBlockSize, maskBlockSize, CV_8UC1);
    cv::Mat borderedOriginal;
    cv::copyMakeBorder(originalImage_, borderedOriginal, exBlockSize, exBlockSize, exBlockSize, exBlockSize, cv::BORDER_CONSTANT, cv::Scalar(0,0,0));
    whiteBlock.setTo(255);

    cv::Mat block;
    for (int x = maskBlockSize/2; x < originalImage_.cols - maskBlockSize/2-1; x += maskBlockSize) {
        for (int y = maskBlockSize/2; y < originalImage_.rows - maskBlockSize/2-1; y += maskBlockSize) {
            //qDebug() << x << " " << y;
            block = borderedOriginal.rowRange(exBlockSize + y - exBlockSize/2, exBlockSize + y + exBlockSize/2).colRange(exBlockSize + x - exBlockSize/2, exBlockSize + x + exBlockSize/2);
            std::vector<Prediction> predictions = this->maskClassifier->classify(block);
            if (predictions[0].first == "fingerprint") {
                whiteBlock.copyTo(this->imgMask(cv::Rect(x-maskBlockSize/2, y-maskBlockSize/2, maskBlockSize, maskBlockSize)));
            }
        }
    }

    /*QImage smoothedMask(this->imgMask.cols, this->imgMask.rows, QImage::Format_Grayscale8);
    this->smoothMask(smoothedMask, maskBlockSize);

    this->imgMask = Helper::QImage2Mat(smoothedMask, CV_8UC1);
    cv::erode(this->imgMask, this->imgMask, cv::getStructuringElement(cv::MORPH_RECT, cv::Size(13,13)), cv::Point(-1,-1), 1);
*/
    return 1;
}

void Extraction::smoothMask(QImage &smoothedMask, int maskBlockSize)
{
    cv::Mat polygon;
    std::vector<std::vector<cv::Point>> contours;

    polygon = this->imgMask.clone();
    cv::findContours(polygon, contours, CV_RETR_LIST, CV_CHAIN_APPROX_NONE);

    // deleting black holes
    for(int main_i=0;main_i<contours.size();main_i++){
        cv::drawContours(polygon,contours,main_i,255,cv::FILLED);
    }

    // deleting white remnants
    cv::morphologyEx(polygon,polygon, cv::MORPH_OPEN,cv::getStructuringElement(cv::MORPH_RECT,cv::Size(19,19)),cv::Point(-1,-1),2);

    cv::findContours(polygon, contours, CV_RETR_LIST, CV_CHAIN_APPROX_NONE);

    // drawing the fingerprint mask polygon
    QVector<QPoint> singlePolygon;

    smoothedMask.fill(Qt::black);
    QPainter painter2(&smoothedMask);

    painter2.setPen(QPen(QBrush(QColor(255,255,255)),1));
    painter2.setBrush(QBrush(QColor(255,255,255)));

    for(int main_i=0;main_i<contours.size();main_i++){
        cv::drawContours(polygon,contours,main_i,255,cv::FILLED);
        for(int idx=maskBlockSize/2; idx < contours.at(main_i).size(); idx += maskBlockSize*3)
        {
            singlePolygon.append(QPoint(contours.at(main_i).at(idx).x, contours.at(main_i).at(idx).y));
        }
        painter2.drawPolygon(QPolygon(singlePolygon));
        singlePolygon.clear();
    }
}

cv::Mat Extraction::getMask(const cv::Mat &originalImage_)
{
    if (makeMask(originalImage_, 8, 19)) return this->imgMask;
}


void Extraction::loadMaskModel()
{
    if (!this->maskModelLoaded) {
        this->maskClassifier = new CaffeNetwork;
        this->maskClassifier->moveToThread(this->maskClassifier);
        this->maskClassifier->start();

        this->maskClassifier->loadModel(this->maskModelFile, this->maskTrainedFile, this->maskMeanFile, this->maskLabelFile);
        this->maskModelLoaded = true;
    }
}


void Extraction::loadExtractionModel()
{
    if (!this->extractionModelLoaded) {
        this->extractionClassifier = new CaffeNetwork;
        this->extractionClassifier->moveToThread(this->extractionClassifier);
        this->extractionClassifier->start();

        this->extractionClassifier->loadModel(this->extractionModelFile, this->extractionTrainedFile, this->extractionMeanFile, this->extractionLabelFile);
        this->extractionModelLoaded = true;
    }
}

int Extraction::crossingNumber(const bool &useMask, const int &borderSize, QVector<MINUTIA_EX> &minutiaeCN)
{
    //if (useMask && !this->maskLoaded) return -1;

    int x, y;
    int fpWidth, fpHeight, cn;
    bool useCN;

    //this->fpMinutiae = cv::Mat::zeros(this->fpSkeleton.size(), CV_8UC1);

    fpHeight = this->imgSkeleton.rows;
    fpWidth = this->imgSkeleton.cols;

    for (y = borderSize; y < fpHeight - borderSize*2; y++) {
        for (x = borderSize; x < fpWidth - borderSize*2; x++) {
            if (this->imgSkeleton.at<uchar>(y, x) == 0) {
                if (useMask && this->imgMask.at<uchar>(y, x) == 0) useCN = false;
                else useCN = true;
                if (useCN) {
                    cn = abs((this->imgSkeleton.at<uchar>(y - 1, x - 1)) - (this->imgSkeleton.at<uchar>(y, x - 1))) +
                            abs((this->imgSkeleton.at<uchar>(y, x - 1)) - (this->imgSkeleton.at<uchar>(y + 1, x - 1))) +
                            abs((this->imgSkeleton.at<uchar>(y + 1, x - 1)) - (this->imgSkeleton.at<uchar>(y + 1, x))) +
                            abs((this->imgSkeleton.at<uchar>(y + 1, x)) - (this->imgSkeleton.at<uchar>(y + 1, x + 1))) +
                            abs((this->imgSkeleton.at<uchar>(y + 1, x + 1)) - (this->imgSkeleton.at<uchar>(y, x + 1))) +
                            abs((this->imgSkeleton.at<uchar>(y, x + 1)) - (this->imgSkeleton.at<uchar>(y - 1, x + 1))) +
                            abs((this->imgSkeleton.at<uchar>(y - 1, x + 1)) - (this->imgSkeleton.at<uchar>(y - 1, x))) +
                            abs((this->imgSkeleton.at<uchar>(y - 1, x)) - (this->imgSkeleton.at<uchar>(y - 1, x - 1)));
                    if (cn / 255 / 2 == 1) {
                        minutiaeCN.push_back(MINUTIA_EX{QPoint{x,y}, 0, this->orientationMap.at<double>(y-borderSize,x-borderSize) + M_PI_2});
                        //this->fpMinutiae.at<uchar>(y, x) = 1;
                    }
                    else if (cn / 255 / 2 == 3) {
                        minutiaeCN.push_back(MINUTIA_EX{QPoint{x,y}, 1, this->orientationMap.at<double>(y-borderSize,x-borderSize) + M_PI_2});
                        //this->fpMinutiae.at<uchar>(y, x) = 2;
                    }
                }
            }
        }
    }
    return 1;
}

void Extraction::fixEndings(QVector<MINUTIA_EX> &minutiae)
{
    int centerPixel=-1;
    int incomingPixel=-1;

    for (MINUTIA_EX& m : minutiae) {
        // len ukoncenia
        if(m.type == 0){
            // ukoncenie prichadza z laveho horneho rohu
            // x 0 0
            // 0 x 0
            // 0 0 0
            centerPixel = this->imgSkeleton.at<uchar>(m.xy.y(),m.xy.x());
            incomingPixel = this->imgSkeleton.at<uchar>(m.xy.y()-1,m.xy.x()-1);
            if(centerPixel == 0 && incomingPixel == 0){
                m.angle+= M_PI;
            }

            // ukoncenie prichadza zhora
            // 0 x 0
            // 0 x 0
            // 0 0 0
            incomingPixel = this->imgSkeleton.at<uchar>(m.xy.y()-1,m.xy.x());
            if(centerPixel == 0 && incomingPixel == 0){
                m.angle+= M_PI;
            }

            // ukoncenie prichadza z praveho horneho rohu
            // 0 0 x
            // 0 x 0
            // 0 0 0
            incomingPixel = this->imgSkeleton.at<uchar>(m.xy.y()-1,m.xy.x()+1);
            if(centerPixel == 0 && incomingPixel == 0){
                m.angle+= M_PI;
            }

            // ukoncenie prichadza zlava
            // 0 0 0
            // x x 0
            // 0 0 0
            incomingPixel = this->imgSkeleton.at<uchar>(m.xy.y(),m.xy.x()-1);
            if((centerPixel == 0 && incomingPixel == 0)){
                if(m.angle<=M_PI_2){
                    m.angle+= M_PI;
                }
            }

            // ukoncenie prichadza zprava
            // 0 0 0
            // 0 x x
            // 0 0 0
            incomingPixel = this->imgSkeleton.at<uchar>(m.xy.y(),m.xy.x()+1);
            if((centerPixel == 0 && incomingPixel == 0)){
                if(m.angle>M_PI_2){
                    m.angle+= M_PI;
                }
            }
        }

    }
}

void Extraction::fixBifurcations(QVector<MINUTIA_EX> &minutiae, const int &borderSize)
{
    int centerPixel = -1;
    int incomingPixel = -1;

    QVector<MINUTIA_EX> invertedMinutiae;

    // vyhladanie vsetkych ukonceni v invertovanom skeletone
    int cn = 0;
    uchar farba =-1;
    for(int i=1;i<this->imgSkeletonInverted.cols-1;i++){
        for(int j=1;j<this->imgSkeletonInverted.rows-1;j++){
            farba = this->imgSkeletonInverted.at<uchar>(j,i);
            if(farba == 0){
                cn =    abs(this->imgSkeletonInverted.at<uchar>(j-1, i-1) - this->imgSkeletonInverted.at<uchar>(j, i-1)) +
                        abs(this->imgSkeletonInverted.at<uchar>(j, i-1) - this->imgSkeletonInverted.at<uchar>(j+1, i-1)) +
                        abs(this->imgSkeletonInverted.at<uchar>(j+1, i-1) - this->imgSkeletonInverted.at<uchar>(j+1, i)) +
                        abs(this->imgSkeletonInverted.at<uchar>(j+1, i) - this->imgSkeletonInverted.at<uchar>(j+1, i+1)) +
                        abs(this->imgSkeletonInverted.at<uchar>(j+1, i+1) - this->imgSkeletonInverted.at<uchar>(j, i+1)) +
                        abs(this->imgSkeletonInverted.at<uchar>(j, i+1) - this->imgSkeletonInverted.at<uchar>(j-1, i+1)) +
                        abs(this->imgSkeletonInverted.at<uchar>(j-1, i+1) - this->imgSkeletonInverted.at<uchar>(j-1, i)) +
                        abs(this->imgSkeletonInverted.at<uchar>(j-1, i) - this->imgSkeletonInverted.at<uchar>(j-1, i-1));
                cn/=2;
                cn/=255;
                // ukoncenie
                if(cn == 1){
                    invertedMinutiae.push_back(MINUTIA_EX{QPoint{i,j}, 0, this->orientationMap.at<double>(j-borderSize,i-borderSize) + M_PI_2});
                }
            }
        }
    }

    for (MINUTIA_EX& m : minutiae) {
        // len vidlice
        if(m.type == 1){
            MINUTIA_EX closestMinutia;
            qreal min_length = 999999;
            qreal curr_length=-1;

            for(MINUTIA_EX& inv_m : invertedMinutiae){
                QLineF lineF(QPointF(m.xy.x(),m.xy.y()), QPointF(inv_m.xy.x(),inv_m.xy.y()));
                curr_length = lineF.length();
                if(curr_length < min_length){
                    min_length = curr_length;
                    closestMinutia =inv_m;
                }
            }

            // 0 0 0
            // 0 x 0
            // x 0 0
            centerPixel = this->imgSkeletonInverted.at<uchar>(closestMinutia.xy.y(),closestMinutia.xy.x());
            incomingPixel = this->imgSkeletonInverted.at<uchar>(closestMinutia.xy.y()+1,closestMinutia.xy.x()-1);
            if(centerPixel == 0 && incomingPixel == 0){
                m.angle+= M_PI;
            }

            // 0 0 0
            // 0 x 0
            // 0 x 0
            incomingPixel = this->imgSkeletonInverted.at<uchar>(closestMinutia.xy.y()+1,closestMinutia.xy.x());
            if(centerPixel == 0 && incomingPixel == 0){
                m.angle+= M_PI;
            }


            // 0 0 0
            // 0 x 0
            // 0 0 x
            incomingPixel = this->imgSkeletonInverted.at<uchar>(closestMinutia.xy.y()+1,closestMinutia.xy.x()+1);
            if(centerPixel == 0 && incomingPixel == 0){
                m.angle+= M_PI;
            }

            // 0 0 0
            // x x 0
            // 0 0 0
            incomingPixel = this->imgSkeletonInverted.at<uchar>(closestMinutia.xy.y(),closestMinutia.xy.x()-1);
            if((centerPixel == 0 && incomingPixel == 0)){
                if(m.angle>M_PI_2){
                    m.angle+= M_PI;
                }
            }

            // 0 0 0
            // 0 x x
            // 0 0 0
            incomingPixel = this->imgSkeletonInverted.at<uchar>(closestMinutia.xy.y(),closestMinutia.xy.x()+1);
            if((centerPixel == 0 && incomingPixel == 0)){
                if(m.angle<=M_PI_2){
                    m.angle+= M_PI;
                }
            }
        }
    }
}

MINUTIAE_VECTOR Extraction::checkMinutiae(const QVector<MINUTIA_EX> &minutiae, const QString &matcher, const int &borderSize, const int &blockSize, const bool &useVariableBlockSize, const QString &fileName)
{
    MINUTIAE_VECTOR minData;
    std::vector<Prediction> prediction;

    //MCC
    QVector <MINUTIA_EX> mccready;

    int i = 0, x, y, fpWidth, fpHeight;
    cv::Mat block;

    fpHeight = this->imgOrig.rows;
    fpWidth = this->imgOrig.cols;

    /*QFile data;
    QTextStream ts(&data);
    if (fileName != "") {
        data.setFileName(this->saveFolder + "/xyt/" + fileName + ".xyt");
        data.open(QIODevice::WriteOnly);
        ts.setRealNumberNotation(QTextStream::FixedNotation);
        ts << this->imgOrig.cols - 2*borderSize << "\n";
        ts << this->imgOrig.rows - 2*borderSize << "\n";
        ts << "500\n";
    }*/

    for (MINUTIA_EX minutia : minutiae) {
        block = this->imgOrig(cv::Rect(minutia.xy.x() - blockSize/2, minutia.xy.y() - blockSize/2, blockSize, blockSize));
        i++;
        prediction = this->extractionClassifier->classify(block);

        if (useVariableBlockSize) {
            QVector<std::vector<Prediction>> predictions;
            for (int i = 0; i < VARBLOCKITER; i++) {
                block = this->imgOrig(cv::Rect(minutia.xy.x() - (blockSize + (i+1)*VARBLOCKSTEP)/2, minutia.xy.y() - (blockSize + (i+1)*VARBLOCKSTEP)/2, (blockSize + (i+1)*VARBLOCKSTEP), (blockSize + (i+1)*VARBLOCKSTEP)));
                predictions.push_back(this->extractionClassifier->classify(block));
            }
            for (auto p : predictions) {
                if (p[0].second == 1 && p[0].first != "Nothing") break;
                if (p[0].second >= prediction[0].second) prediction = p;
            }
        }

        if (QString::fromStdString(prediction[0].first).toLower() == "ending"/* && prediction[0].second > 0.9999*/) {
            int angle = ((int)(minutia.angle * 180 / M_PI)+180) %360;
            if (angle <= 180) angle = 180-angle;
            else angle = 540-angle;

            //if (fileName != "") mccready.push_back({QPoint(minutia.xy.x()-borderSize, minutia.xy.y()-borderSize), 0, (angle / 180.0) * M_PI, 100});

            if (matcher == "suprema") minData.push_back(std::make_tuple(QPoint(minutia.xy.x()-borderSize,minutia.xy.y()-borderSize), 0, (int)(minutia.angle * 180 / M_PI / 1.4), 100));
            else if (matcher == "bozorth") {
                angle = (180+angle) % 360;

                minData.push_back(std::make_tuple(QPoint(minutia.xy.x()-borderSize, this->imgSkeleton.rows-minutia.xy.y()-borderSize), 0, angle, 100));
            }
        }
        else if (QString::fromStdString(prediction[0].first).toLower() == "bifurcation"/* && prediction[0].second > 0.9999*/) {
            int angle = (int)(minutia.angle * 180 / M_PI);
            if (angle <= 180) angle = 180-angle;
            else angle = 540-angle;

            //if (fileName != "") mccready.push_back({QPoint(minutia.xy.x()-borderSize, minutia.xy.y()-borderSize), 1, (angle / 180.0) * M_PI, 100});

            if (matcher == "suprema") minData.push_back(std::make_tuple(QPoint(minutia.xy.x()-borderSize,minutia.xy.y()-borderSize), 1, (int)(minutia.angle * 180 / M_PI / 1.4), 100));
            else if (matcher == "bozorth") {

                angle = (180+angle) % 360;

                minData.push_back(std::make_tuple(QPoint(minutia.xy.x()-borderSize, this->imgSkeleton.rows-minutia.xy.y()-borderSize), 1, angle, 100));
            }
        }
    }

    /*ts << mccready.size() << "\n";
    for (auto minutia : mccready) {
        ts << minutia.xy.x() << " " << minutia.xy.y() << " " << minutia.angle << "\n";
    }

    if (fileName != "") data.close();*/

    /*this->qualityMap.computeQualityMapMinutia(minData);

    if (fileName == "65_5") {
        unsigned char * qmap;
        //this->qualityMap.getQuality_map();
        //this->qualityMap.printImage(qmap, this->qualityMap.getMap_w(), this->qualityMap.getMap_h());
        QImage qmapimg(qmap, this->qualityMap.getMap_w(), this->qualityMap.getMap_h(), QImage::Format_Grayscale8);
        if (fileName == "65_5") qmapimg.save("qal.bmp");
    }*/

    return minData;
}

MINUTIAE_VECTOR Extraction::extract(const EXTRACTION_SETTINGS &exSettings, const QString &matcher, const int &extractionBlockSize, const QString &fileName)
{
    //this->qualityMap.loadImage(Helper::Mat2QImage(this->imgOrig, QImage::Format_Grayscale8), 500);

    int borderSize = extractionBlockSize;
    if (exSettings.useVarBlockSize) borderSize += VARBLOCKITER * VARBLOCKSTEP;
    cv::copyMakeBorder(this->imgOrig, this->imgOrig, borderSize, borderSize, borderSize, borderSize, cv::BORDER_CONSTANT, cv::Scalar(255,255,255));
    if (exSettings.useMask) cv::copyMakeBorder(this->imgMask, this->imgMask, borderSize, borderSize, borderSize, borderSize, cv::BORDER_CONSTANT, cv::Scalar(255,255,255));
    cv::copyMakeBorder(this->imgSkeleton, this->imgSkeleton, borderSize, borderSize, borderSize, borderSize, cv::BORDER_CONSTANT, cv::Scalar(255,255,255));
    cv::copyMakeBorder(this->imgSkeletonInverted, this->imgSkeletonInverted, borderSize, borderSize, borderSize, borderSize, cv::BORDER_CONSTANT, cv::Scalar(255,255,255));


    QVector<MINUTIA_EX> minutiaeCN;

    this->crossingNumber(exSettings.useMask, borderSize, minutiaeCN);
    if (exSettings.useFixOrientations) {
        this->fixEndings(minutiaeCN);
        this->fixBifurcations(minutiaeCN, borderSize);
    }

    return checkMinutiae(minutiaeCN, matcher, borderSize, extractionBlockSize, exSettings.useVarBlockSize, fileName);
}

void Extraction::setSaveFolder(const QString &value)
{
    this->saveFolder = value;
}

void Extraction::setLoadFolder(const QString &value)
{
    this->loadFolder = value;
}
