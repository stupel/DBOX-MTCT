#ifndef QMATCONVERTER_H
#define QMATCONVERTER_H

// OpenCV
#include "opencv/cv.hpp"

// Qt
#include <QImage>

class QMatConverter{

public:

    static inline QImage Mat2QImage(cv::Mat const &mat,
                             QImage::Format format)
    {
        return QImage(mat.data, mat.cols, mat.rows,
                      mat.step, format).copy();
    }

   static inline  cv::Mat QImage2Mat(QImage const &img, int format)
    {
        return cv::Mat(img.height(), img.width(), format,
                       const_cast<uchar*>(img.bits()),
                       img.bytesPerLine()).clone();
    }
};

#endif // QMATCONVERTER_H
