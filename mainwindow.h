#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDir>
#include <QStringList>
#include <QListWidgetItem>
#include <QMouseEvent>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QGraphicsPathItem>
#include <QPainterPath>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QRectF>
#include <QImage>
#include <QPainter>
#include <QStringList>
#include <QVector>
#include <QObject>
#include <QListWidget>
#include <QDrag>
#include <QPoint>
#include <QTransform>
#include <QThread>
#include <QMessageBox>
//#include <QWinTaskbarButton>
//#include <QWinTaskbarProgress>
#include <QShowEvent>
#include <QDirModel>
#include <QCustomPlot/qcustomplot.h>
#undef ERROR

#include "graphics_view_zoom.h"
#include "minutiaemarker.h"
#include "networktrainer.h"
#include "minutiaechecker.h"
#include "extractiontester.h"
#include "databasetester.h"
#include "mousefingerprintscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_inputDirectory_clicked();
    void on_listWidget_inputImages_itemClicked(QListWidgetItem *item);
    void on_radioButton_ending_clicked();
    void on_radioButton_bifurcation_clicked();
    void on_radioButton_nothing_clicked();
    void updateMinutiaeMarker(QString action);
    void generateMinutiaeHeatmap();
    void tableWidgetCellSelected(int row, int col);
    void on_pushButton_outputDirectory_clicked();
    void on_pushButton_saveBlocks_clicked();
    void on_pushButton_trainerInputDirectory_clicked();
    void on_pushButton_startTraining_clicked();
    void on_pushButton_outputFolder_clicked();
    void on_pushButton_inputDirectory_2_clicked();
    void on_listWidget_inputImages_2_itemClicked(QListWidgetItem *item);
    void on_tabWidget_main_currentChanged(int index);
    void on_radioButton_standard_clicked();
    void on_radioButton_heatmap_clicked();
    void on_pushButton_inputModel_clicked();

    void showPredictedMinutia(QPoint xy, const QVector<QPair<QString, float> > predictedData);
    void predictMinutia(QPoint xy);
    void updateProgressBar(QString barName, int value, QString text = "");
    void showHeatmap(QImage &heatMap);
    void drawCurrentRectanglePosition(QPoint xy);
    void addLog(QString logFieldName, QString text);
    void clearLog(QString logFieldName);
    void drawGraph(QString graphType, QVector<double> x, QVector<double> y, double err = 0);

    void questionMessageBox(QString question, QString subject);
    void warningMessageBox(QString boxType, QString text, QString subject);

    void on_pushButton_inputDatabase_clicked();
    void on_pushButton_startTesting_clicked();

    void on_tabWidget_testerSettings_currentChanged(int index);
    void on_doubleSpinBox_blur_valueChanged(double arg1);
    void on_doubleSpinBox_irisBlur_valueChanged(double arg1);

    void on_pushButton_exTester_inputDir_clicked();
    void on_listWidget_exTester_inputImages_itemClicked(QListWidgetItem *item);

    void showExtractionTestResults(cv::Mat imgOrig, cv::Mat imgOMap, cv::Mat imgEnhanced, cv::Mat imgBinarized, cv::Mat imgSkeleton, cv::Mat imgSkeletonInv, cv::Mat imgMask, cv::Mat imgQMap, cv::Mat imgFMap);

    void on_checkBox_exTester_invertedSkeleton_clicked(bool checked);

    void on_comboBox_exTester_map_currentTextChanged(const QString &arg1);

    void on_checkBox_exTester_contrast_clicked();

    void on_spinBox_exTester_holeSize_valueChanged(int arg1);

    void on_checkBox_exTester_removeHoles_clicked();

    void on_checkBox_exTester_mask_clicked();

    void on_checkBox_exTester_qualityMap_clicked();

    void on_spinBox_exTester_threadNum_valueChanged(int arg1);

    void on_checkBox_exTester_frequencyMap_clicked();

    void on_checkBox_exTester_fixOrientations_clicked();

    void on_checkBox_exTester_gaborFilterGPU_clicked();

private:
    Ui::MainWindow *ui;

    //QWinTaskbarButton *winTaskBarButton;
    //QWinTaskbarProgress *winTaskBarProgress;

    QGraphicsScene *sceneTestOriginal;
    QGraphicsScene *sceneTestMask;
    QGraphicsScene *sceneTestMap;
    QGraphicsScene *sceneTestEnhanced;
    QGraphicsScene *sceneTestBinarized;
    QGraphicsScene *sceneTestSkeleton;
    QGraphicsScene *sceneTestExtraction;
    QGraphicsScene *sceneTestBig;

    Graphics_view_zoom *viewTestOriginal;
    Graphics_view_zoom *viewTestMask;
    Graphics_view_zoom *viewTestMap;
    Graphics_view_zoom *viewTestEnhanced;
    Graphics_view_zoom *viewTestBinarized;
    Graphics_view_zoom *viewTestSkeleton;
    Graphics_view_zoom *viewTestExtraction;
    Graphics_view_zoom *viewTestBig;

    Graphics_view_zoom *fpViewMarker;
    Graphics_view_zoom *fpViewChecker;
    MouseFingerprintScene *fpScene;
    QCPItemText *eerLabel;

    QGraphicsScene *sceneBlockOrig;
    QGraphicsScene *sceneBlockBlur;
    QGraphicsScene *sceneBlockIrisBlur;

    MinutiaeMarker *minMarkerTh;
    NetworkTrainer *netTrainerTh;
    MinutiaeChecker *minCheckerTh;
    ExtractionTester *exTesterTh;
    DatabaseTester *dbTesterTh;

    QString previousImgName;
    QString actualImgName;
    QImage fpImg;
    QGraphicsRectItem *currentBlock;
    QDirModel *trainerDirModel;

    PLOT_PARAMS plotParams;

    //void showEvent(QShowEvent *e);

    void startMinutiaeMarker();
    void startNetworkTrainer();
    void startMinutiaeChecker();
    void startExtractionTester();
    void startDbTester();

    void runExtractionTester();
    void updateBlockPreviews(QPoint xy);

signals:
    void predictHeatmapSignal(QImage, int, bool);
    void generateBlocksSignal(int, int, QString, bool, bool, double, bool, double);
    void predictMinutiaSignal(QImage, QPoint, int, bool);
    void updateMinutiaeSignal(QString, QString);
    void questionBoxAnswerSignal(bool answer);
    void startTrainSignal(bool rotations, bool blur, bool irisblur, int, int);
    void startDBTestingSignal(QString matcher, int numOfSubject, int imgPerSubject);
    void startExTestingSignal();
};

#endif // MAINWINDOW_H
