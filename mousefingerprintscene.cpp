#include "mousefingerprintscene.h"

MouseFingerprintScene::MouseFingerprintScene()
{
    //this->mode = "marker";
    this->intPoint.setX(0);
    this->intPoint.setY(0);
}

void MouseFingerprintScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    QPointF point = event->scenePos();
    this->intPoint = {(int)point.x(), (int)point.y()};

    if (point.x() >= 0 && point.y() >= 0 && point.x() < this->imgWidth && point.y() < imgHeight) {
        if (this->mode == "marker") {
            emit pushMinutiaSignal(this->intPoint, this->type);
        }
        else if (this->mode == "checker") {
            emit predictMinutiaSignal(this->intPoint);
        }
    }
}

void MouseFingerprintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QPointF point = event->scenePos();
    intPoint = {(int)point.x(), (int)point.y()};
    //qDebug() << intPoint.x() << " " << intPoint.y();

    if (point.x() >= 0 && point.y() >= 0 && point.x() < this->imgWidth && point.y() < this->imgHeight) {
        if (this->mode == "marker") {
            emit setActualPositionSignal(this->intPoint);
        }
    }
}

void MouseFingerprintScene::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Space) {
        emit pushMinutiaSignal(this->intPoint, this->type);
    }
}

void MouseFingerprintScene::setImgHeight(int value)
{
    this->imgHeight = value;
}

void MouseFingerprintScene::setImgWidth(int value)
{
    this->imgWidth = value;
}

void MouseFingerprintScene::setType(const QString &value)
{
    this->type = value;
}

void MouseFingerprintScene::setMode(const QString &value)
{
    this->mode = value;
}
