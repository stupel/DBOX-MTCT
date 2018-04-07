#ifndef MOUSEFINGERPRINTSCENE_H
#define MOUSEFINGERPRINTSCENE_H

#include <QObject>
#include <QGraphicsScene>
#include <QPointF>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QString>
#include <QKeyEvent>
#include <QGraphicsItem>

class MouseFingerprintScene : public QGraphicsScene
{
    Q_OBJECT
public:
    MouseFingerprintScene();

    void setType(const QString &value);
    void setMode(const QString &value);
    void setImgWidth(int value);
    void setImgHeight(int value);

signals:
    void pushMinutiaSignal(QPoint intPoint, QString type);
    void predictMinutiaSignal(QPoint intPoint);
    void setActualPositionSignal(QPoint intPoint);

protected:  
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);

private:
    QString type;
    QString mode;
    QPoint intPoint;
    int imgWidth;
    int imgHeight;
};



#endif // MOUSEFINGERPRINTSCENE_H
