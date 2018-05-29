#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "graphics_view_zoom.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));

    /*winTaskBarButton = new QWinTaskbarButton(this);
    winTaskBarButton->setWindow(this->windowHandle());
    winTaskBarProgress = winTaskBarButton->progress();*/

    this->minMarkerTh = nullptr;
    this->netTrainerTh = nullptr;
    this->minCheckerTh = nullptr;
    this->exTesterTh = nullptr;
    this->dbTesterTh = nullptr;

    this->trainerDirModel = nullptr;

    this->viewTestOriginal = new Graphics_view_zoom(this->ui->graphicsView_exTester_original);
    this->viewTestOriginal->set_modifiers(Qt::NoModifier);
    this->viewTestMask = new Graphics_view_zoom(this->ui->graphicsView_exTester_mask);
    this->viewTestMask->set_modifiers(Qt::NoModifier);
    this->viewTestMap = new Graphics_view_zoom(this->ui->graphicsView_exTester_map);
    this->viewTestMap->set_modifiers(Qt::NoModifier);
    this->viewTestEnhanced = new Graphics_view_zoom(this->ui->graphicsView_exTester_enhanced);
    this->viewTestEnhanced->set_modifiers(Qt::NoModifier);
    this->viewTestBinarized = new Graphics_view_zoom(this->ui->graphicsView_exTester_binarized);
    this->viewTestBinarized->set_modifiers(Qt::NoModifier);
    this->viewTestSkeleton = new Graphics_view_zoom(this->ui->graphicsView_exTester_skeleton);
    this->viewTestSkeleton->set_modifiers(Qt::NoModifier);
    this->viewTestExtraction = new Graphics_view_zoom(this->ui->graphicsView_exTester_extraction);
    this->viewTestExtraction->set_modifiers(Qt::NoModifier);

    this->sceneTestOriginal = new QGraphicsScene();
    this->sceneTestMask = new QGraphicsScene();
    this->sceneTestMap = new QGraphicsScene();
    this->sceneTestEnhanced = new QGraphicsScene();
    this->sceneTestBinarized = new QGraphicsScene();
    this->sceneTestSkeleton = new QGraphicsScene();
    this->sceneTestExtraction = new QGraphicsScene();

    this->fpViewMarker = new Graphics_view_zoom(ui->graphicsView_fingerprintMarker);
    this->fpViewMarker->set_modifiers(Qt::NoModifier);
    this->fpViewChecker = new Graphics_view_zoom(ui->graphicsView_fingerprintChecker);
    this->fpViewChecker->set_modifiers(Qt::NoModifier);
    this->sceneBlockOrig = new QGraphicsScene();
    this->sceneBlockBlur = new QGraphicsScene();
    this->sceneBlockIrisBlur = new QGraphicsScene();

    this->fpScene = new MouseFingerprintScene();
    this->fpScene->setType("ENDING");
    this->fpScene->setMode("marker");

    this->previousImgName = "";
    this->actualImgName = "";

    this->ui->tableWidget_minutiae->setColumnCount(4);
    this->ui->tableWidget_minutiae->setHorizontalHeaderLabels(QStringList() << "X" << "Y" << "Type" << "Delete");
    this->ui->tableWidget_minutiae->setColumnWidth(0,40);
    this->ui->tableWidget_minutiae->setColumnWidth(1,40);
    this->ui->tableWidget_minutiae->setColumnWidth(2,104);
    this->ui->tableWidget_minutiae->setEditTriggers(QAbstractItemView::NoEditTriggers);
    this->ui->tableWidget_minutiae->horizontalHeader()->setSectionResizeMode (QHeaderView::Fixed);
    this->ui->tableWidget_minutiae->verticalHeader()->setVisible(false);
    this->ui->tableWidget_minutiae->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
    this->ui->tableWidget_minutiae->horizontalHeader()->setStyleSheet("QHeaderView::section {border: 1px solid #d8d8d8; padding: 5px; margin:1px;}");

    this->ui->tableWidget_foundedMinutia->setColumnCount(2);
    this->ui->tableWidget_foundedMinutia->setHorizontalHeaderLabels(QStringList() << "Type" << "Probability");
    this->ui->tableWidget_foundedMinutia->setColumnWidth(0,130);
    this->ui->tableWidget_foundedMinutia->setEditTriggers(QAbstractItemView::NoEditTriggers);
    this->ui->tableWidget_foundedMinutia->horizontalHeader()->setSectionResizeMode (QHeaderView::Fixed);
    this->ui->tableWidget_foundedMinutia->verticalHeader()->setVisible(false);
    this->ui->tableWidget_foundedMinutia->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    this->ui->tableWidget_foundedMinutia->horizontalHeader()->setStyleSheet("QHeaderView::section {border: 1px solid #d8d8d8; padding: 5px; margin:1px;}");

    this->ui->groupBox_heatmapCreationProgress->setVisible(false);

    this->ui->checkBox_netTrainer_original->setAttribute(Qt::WA_TransparentForMouseEvents);
    this->ui->checkBox_netTrainer_original->setFocusPolicy(Qt::NoFocus);

    this->plotParams = {0, 500};

    this->eerLabel = new QCPItemText(this->ui->widget_testFmrFnmr);
    this->eerLabel->setVisible(false);

    QPen fmrPen;
    fmrPen.setWidth(4);
    fmrPen.setColor(QColor(255,0,0));

    QPen fnmrPen;
    fnmrPen.setWidth(4);
    fnmrPen.setColor(QColor(0,0,255));

    this->ui->widget_testFmrFnmr->addGraph();
    this->ui->widget_testFmrFnmr->addGraph();
    this->ui->widget_testFmrFnmr->xAxis->setLabel("Similarity threshold");
    this->ui->widget_testFmrFnmr->yAxis->setLabel("FMR/FNMR value");
    this->ui->widget_testFmrFnmr->xAxis->setRange(0, 500);
    this->ui->widget_testFmrFnmr->yAxis->setRange(0, 100);
    this->ui->widget_testFmrFnmr->setInteraction(QCP::iRangeDrag, true);
    this->ui->widget_testFmrFnmr->setInteraction(QCP::iRangeZoom, true);
    this->ui->widget_testFmrFnmr->setInteraction(QCP::iSelectPlottables, true);
    this->ui->widget_testFmrFnmr->graph(0)->setPen(QPen(Qt::blue));
    this->ui->widget_testFmrFnmr->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 30)));
    this->ui->widget_testFmrFnmr->graph(0)->setName("FNMR");
    this->ui->widget_testFmrFnmr->graph(0)->setPen(fnmrPen);
    this->ui->widget_testFmrFnmr->xAxis->setTickLabelFont(QFont(QFont().family(), 12));
    this->ui->widget_testFmrFnmr->yAxis->setTickLabelFont(QFont(QFont().family(), 12));
    this->ui->widget_testFmrFnmr->xAxis->setLabelFont(QFont(QFont().family(), 12, 70));
    this->ui->widget_testFmrFnmr->yAxis->setLabelFont(QFont(QFont().family(), 12, 70));
    this->ui->widget_testFmrFnmr->graph(1)->setPen(QPen(Qt::red));
    this->ui->widget_testFmrFnmr->graph(1)->setBrush(QBrush(QColor(255, 0, 0, 30)));
    this->ui->widget_testFmrFnmr->graph(1)->setName("FMR");
    this->ui->widget_testFmrFnmr->graph(1)->setPen(fmrPen);
    this->ui->widget_testFmrFnmr->legend->setVisible(true);
    this->ui->widget_testFmrFnmr->legend->setFont(QFont(QFont().family(), 12));

    if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_marker") this->startMinutiaeMarker();
    else if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_trainer") this->startNetworkTrainer();
    else if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_checker") this->startMinutiaeChecker();
    else if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_extractionTester") this->startExtractionTester();
    else if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_dbTester") this->startDbTester();

    QPen rocPen;
    rocPen.setWidth(4);
    rocPen.setColor(QColor(0,150,0));

    QPen rocReference;
    rocReference.setWidth(4);
    rocReference.setColor(QColor(80,80,80));
    rocReference.setStyle(Qt::DotLine);

    this->ui->widget_testROC->addGraph();
    this->ui->widget_testROC->addGraph();
    this->ui->widget_testROC->xAxis->setLabel("FMR");
    this->ui->widget_testROC->yAxis->setLabel("1 - FNMR (True Match Rate)");
    this->ui->widget_testROC->xAxis->setRange(0, 1);
    this->ui->widget_testROC->yAxis->setRange(0, 1);
    this->ui->widget_testROC->setInteraction(QCP::iRangeDrag, true);
    this->ui->widget_testROC->setInteraction(QCP::iRangeZoom, true);
    this->ui->widget_testROC->setInteraction(QCP::iSelectPlottables, true);
    this->ui->widget_testROC->graph(0)->setPen(QPen(Qt::red));
    this->ui->widget_testROC->graph(0)->setBrush(QBrush(QColor(0, 150, 0, 25)));
    this->ui->widget_testROC->graph(0)->setName("ROC");
    this->ui->widget_testROC->graph(0)->setPen(rocPen);
    this->ui->widget_testROC->xAxis->setTickLabelFont(QFont(QFont().family(), 12));
    this->ui->widget_testROC->yAxis->setTickLabelFont(QFont(QFont().family(), 12));
    this->ui->widget_testROC->xAxis->setLabelFont(QFont(QFont().family(), 12, 70));
    this->ui->widget_testROC->yAxis->setLabelFont(QFont(QFont().family(), 12, 70));
    this->ui->widget_testROC->legend->setVisible(true);
    this->ui->widget_testROC->legend->setFont(QFont(QFont().family(), 12));
    this->ui->widget_testROC->graph(1)->setPen(QPen(Qt::black));
    this->ui->widget_testROC->graph(1)->setBrush(QBrush(QColor(80, 80, 80, 0)));
    this->ui->widget_testROC->graph(1)->setLineStyle(QCPGraph::lsLine);
    this->ui->widget_testROC->graph(1)->setPen(rocReference);
    this->ui->widget_testROC->legend->removeAt(1);
    this->ui->widget_testROC->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignBottom|Qt::AlignRight);

    //Other Connecter
    connect(this->ui->tableWidget_minutiae, SIGNAL(cellClicked(int, int)), this, SLOT(tableWidgetCellSelected(int, int)));
}

MainWindow::~MainWindow()
{
    if (this->minMarkerTh) this->minMarkerTh->exit();
    if (this->netTrainerTh) this->netTrainerTh->exit();
    if (this->minCheckerTh) this->minCheckerTh->exit();
    if (this->dbTesterTh) this->dbTesterTh->exit();

    if (this->trainerDirModel) delete this->trainerDirModel;

    delete fpViewMarker;
    delete fpViewChecker;
    delete fpScene;
    delete sceneBlockOrig;
    delete sceneBlockBlur;
    delete sceneBlockIrisBlur;

    delete ui;
}

//Minutiae Marker BEGIN

void MainWindow::on_pushButton_inputDirectory_clicked()
{
    this->minMarkerTh->removeAllBlocks();
    this->updateMinutiaeMarker("remove");

    this->ui->listWidget_inputImages->clear();
    this->minMarkerTh->setInputPath(QFileDialog::getExistingDirectory());

    QDir inputImages(this->minMarkerTh->getInputPath(), "*.png *.jpg *.bmp *.tif");
    for (auto i:inputImages.entryInfoList()) {
        this->ui->listWidget_inputImages->addItem(i.fileName());
    }
}

void MainWindow::on_pushButton_marker_outputDirectory_clicked()
{
    this->minMarkerTh->setOutputPath(QFileDialog::getExistingDirectory());
    this->ui->lineEdit_marker_outputDirectory->setText(this->minMarkerTh->getOutputPath());
}


void MainWindow::on_listWidget_inputImages_itemClicked(QListWidgetItem *item)
{
    this->actualImgName = item->text();
    this->fpImg.load(this->minMarkerTh->getInputPath() + "/" + this->actualImgName);
    this->fpImg = this->fpImg.convertToFormat(QImage::Format_Grayscale8);

    this->fpScene->setImgWidth(this->fpImg.width());
    this->fpScene->setImgHeight(this->fpImg.height());

    emit updateMinutiaeSignal(this->previousImgName, this->actualImgName);

    this->previousImgName = this->actualImgName;

    this->ui->graphicsView_fingerprintMarker->setFocus();

    this->updateMinutiaeMarker("remove");
}

void MainWindow::on_radioButton_ending_clicked()
{
    this->fpScene->setType("ENDING");
    this->ui->graphicsView_fingerprintMarker->setFocus();
}

void MainWindow::on_radioButton_bifurcation_clicked()
{
    this->fpScene->setType("BIFURCATION");
    this->ui->graphicsView_fingerprintMarker->setFocus();
}

void MainWindow::on_radioButton_nothing_clicked()
{
    this->fpScene->setType("NOTHING");
    this->ui->graphicsView_fingerprintMarker->setFocus();
}

void MainWindow::drawCurrentRectanglePosition(QPoint xy)
{
    this->currentBlock->setPos(xy.x(), xy.y());
}

void MainWindow::updateBlockPreviews(QPoint xy)
{
    int blockSize = this->ui->spinBox_minutiaeBlockSize->value();
    QImage block = this->fpImg.copy(QRect(xy.x() - blockSize/2, xy.y() - blockSize/2, blockSize, blockSize));
    this->sceneBlockOrig->addPixmap(QPixmap::fromImage(block).scaled(this->ui->graphicsView_blockOrig->size()));
    this->ui->graphicsView_blockOrig->setScene(this->sceneBlockOrig);
    this->sceneBlockBlur->addPixmap(QPixmap::fromImage(this->minMarkerTh->blurBlock(block, this->ui->doubleSpinBox_marker_blur->value())).scaled(this->ui->graphicsView_blockBlur->size()));
    this->ui->graphicsView_blockBlur->setScene(this->sceneBlockBlur);
    this->sceneBlockIrisBlur->addPixmap(QPixmap::fromImage(this->minMarkerTh->irisBlurBlock(block, this->ui->doubleSpinBox_marker_irisBlur_blur->value(), this->ui->doubleSpinBox_marker_irisBlur_radius->value())).scaled(this->ui->graphicsView_blockIrisBlur->size()));
    this->ui->graphicsView_blockIrisBlur->setScene(this->sceneBlockIrisBlur);
}

void MainWindow::updateMinutiaeMarker(QString action)
{
    int i = 0;

    if (action.toLower() == "remove") {
        this->fpScene->clear();

        this->fpScene->addPixmap(QPixmap::fromImage(this->fpImg));
        this->ui->graphicsView_fingerprintMarker->setAlignment(Qt::AlignCenter | Qt::AlignHCenter);

        this->currentBlock = this->fpScene->addRect(0 - this->ui->spinBox_minutiaeBlockSize->value()/2, 0-this->ui->spinBox_minutiaeBlockSize->value()/2, this->ui->spinBox_minutiaeBlockSize->value(), this->ui->spinBox_minutiaeBlockSize->value(), QPen(QColor(255, 127, 0)));
        this->currentBlock->setZValue(1);
    }

    QVector<std::tuple<QPoint, QString> > minutiae = this->minMarkerTh->getMinutiae();

    if (!minutiae.empty() && this->ui->listWidget_inputImages->count()) this->ui->listWidget_inputImages->item(this->ui->listWidget_inputImages->currentRow())->setBackground(QColor(132,221,114));
    else if (this->ui->listWidget_inputImages->count()) this->ui->listWidget_inputImages->item(this->ui->listWidget_inputImages->currentRow())->setBackground(QColor("white"));

    this->ui->tableWidget_minutiae->setRowCount(minutiae.size());
    for (auto minutia : minutiae) {
        QTableWidgetItem *x = new QTableWidgetItem (QString::number(std::get<0>(minutia).x()));
        x->setTextAlignment(Qt::AlignCenter);
        QTableWidgetItem *y = new QTableWidgetItem (QString::number(std::get<0>(minutia).y()));
        y->setTextAlignment(Qt::AlignCenter);
        QTableWidgetItem *remove = new QTableWidgetItem ("x");
        remove->setTextAlignment(Qt::AlignCenter);

        //MinutiaeList
        this->ui->tableWidget_minutiae->setItem(i, 0, x);
        this->ui->tableWidget_minutiae->setItem(i, 1, y);
        this->ui->tableWidget_minutiae->setItem(i, 2, new QTableWidgetItem(std::get<1>(minutia)));
        this->ui->tableWidget_minutiae->setItem(i, 3, remove);

        if (action.toLower() == "remove" || i+1 == minutiae.size()) {
            //MinutiaeRectangles
            QColor color;
            if (std::get<1>(minutia) == "ENDING") color = QColor(0,0,255);
            else if (std::get<1>(minutia) == "BIFURCATION") color = QColor(0,255,0);
            else if (std::get<1>(minutia) == "NOTHING") color = QColor(255,0,0);
            int blockSize = this->ui->spinBox_minutiaeBlockSize->value();
            QRect qr(std::get<0>(minutia).x() - blockSize/2, std::get<0>(minutia).y() - blockSize/2, blockSize, blockSize);

            this->fpScene->addRect(qr, QPen(color));
        }
        if (action.toLower() == "add" && i+1 == minutiae.size()) this->updateBlockPreviews(std::get<0>(minutia));
        i++;
    }
    this->ui->graphicsView_fingerprintMarker->setScene(this->fpScene);
}

void MainWindow::tableWidgetCellSelected(int row, int col)
{
    if (col == 3) {
        this->minMarkerTh->removeMinutia(row);
        this->updateMinutiaeMarker("remove");
    }
    else {
        for(int i=0; i< ui->graphicsView_fingerprintMarker->scene()->items().count()-1; i++){
            QGraphicsRectItem * rectClear = (QGraphicsRectItem*)ui->graphicsView_fingerprintMarker->scene()->items().at(i);
            rectClear->setBrush(QBrush(QColor(0, 0, 0, 0)));
        }

        QGraphicsRectItem *rect= (QGraphicsRectItem*)ui->graphicsView_fingerprintMarker->scene()->items().at((ui->graphicsView_fingerprintMarker->scene()->items().count() - 1) - row-1);
        rect->setBrush(QBrush(QColor(0, 0, 0, 150)));

        qApp->processEvents();
    }
}

void MainWindow::on_pushButton_marker_saveBlocks_clicked()
{
    this->ui->groupBox_marker_inputImages->setEnabled(false);
    this->ui->groupBox_marker_minutiaeList->setEnabled(false);
    this->ui->groupBox_marker_settings->setEnabled(false);
    this->ui->pushButton_marker_saveBlocks->setEnabled(false);
    this->ui->pushButton_marker_outputDirectory->setEnabled(false);

    this->minMarkerTh->setOutputPath(this->ui->lineEdit_marker_outputDirectory->text());

    emit updateMinutiaeSignal(this->actualImgName, this->actualImgName);
    emit generateBlocksSignal(this->ui->spinBox_minutiaeBlockSize->value(), this->ui->spinBox_additionalBlocks->value(),
                              this->ui->comboBox_outputFormat->currentText(), this->ui->checkBox_marker_rotations->isChecked(),
                              this->ui->checkBox_marker_blur->isChecked(), this->ui->doubleSpinBox_marker_blur->value(), this->ui->groupBox_marker_irisBlur->isChecked(), this->ui->doubleSpinBox_marker_irisBlur_blur->value(), this->ui->doubleSpinBox_marker_irisBlur_radius->value());
}

void MainWindow::markerBlocksSaved()
{
    this->ui->groupBox_marker_inputImages->setEnabled(true);
    this->ui->groupBox_marker_minutiaeList->setEnabled(true);
    this->ui->groupBox_marker_settings->setEnabled(true);
    this->ui->pushButton_marker_saveBlocks->setEnabled(true);
    this->ui->pushButton_marker_outputDirectory->setEnabled(true);

    QDir inputImages(this->minMarkerTh->getInputPath(), "*.png *.jpg *.bmp *.tif");
    for (int i = 0; i < this->ui->listWidget_inputImages->count(); i++) {
        if (this->ui->listWidget_inputImages->item(i)->backgroundColor() == QColor(132,221,114))
            this->ui->listWidget_inputImages->item(i)->setBackground(QColor(130,200,255));
    }
}

void MainWindow::on_doubleSpinBox_marker_blur_valueChanged(double arg1)
{
    if (!this->minMarkerTh->getMinutiae().empty()) this->updateBlockPreviews(std::get<0>(this->minMarkerTh->getMinutiae()[this->minMarkerTh->getMinutiae().size()-1]));
}

void MainWindow::on_doubleSpinBox_marker_irisBlur_blur_valueChanged(double arg1)
{
    if (!this->minMarkerTh->getMinutiae().empty()) this->updateBlockPreviews(std::get<0>(this->minMarkerTh->getMinutiae()[this->minMarkerTh->getMinutiae().size()-1]));
}

void MainWindow::on_doubleSpinBox_marker_irisBlur_radius_valueChanged(double arg1)
{
    if (!this->minMarkerTh->getMinutiae().empty()) this->updateBlockPreviews(std::get<0>(this->minMarkerTh->getMinutiae()[this->minMarkerTh->getMinutiae().size()-1]));
}


//Minutiae Marker END

//Network Trainer BEGIN

void MainWindow::on_pushButton_netTrainer_input_clicked()
{
    QString blocksInputDir = QFileDialog::getExistingDirectory();
    qDebug() << blocksInputDir;
    if (blocksInputDir != "") {
        this->netTrainerTh->setImgInputPath(blocksInputDir);
        this->ui->label_trainerInputDirectory->setText(blocksInputDir);

        if (!this->trainerDirModel) {
            this->trainerDirModel = new QDirModel();
            this->trainerDirModel->setFilter(QDir::NoDotAndDotDot | QDir::Dirs);
        }
        QModelIndex index = this->trainerDirModel->index(blocksInputDir);

        this->ui->treeView_netTrainer_input->setModel(this->trainerDirModel);
        this->ui->treeView_netTrainer_input->header()->close();
        this->ui->treeView_netTrainer_input->hideColumn(1);
        this->ui->treeView_netTrainer_input->hideColumn(2);
        this->ui->treeView_netTrainer_input->hideColumn(3);
        this->ui->treeView_netTrainer_input->setRootIndex(index);
        this->ui->treeView_netTrainer_input->expandToDepth(0);
    }
    else QMessageBox::warning(this, "Warning", "No folder selected");

}

void MainWindow::on_pushButton_netTrainer_outputFolder_clicked()
{
    QString outputPath = QFileDialog::getExistingDirectory();
    if (outputPath != "") {
        this->netTrainerTh->setOutputPath(outputPath);
        this->ui->lineEdit_netTrainer_outputFolder->setText(outputPath);
    }
    else QMessageBox::warning(this, "Warning", "No folder selected");
}

void MainWindow::on_pushButton_netTrainer_startTraining_clicked()
{
    this->netTrainerTh->setFileFormat("bmp");
    emit startTrainSignal(this->ui->checkBox_netTrainer_rotation->isChecked(), this->ui->checkBox_netTrainer_blurred->isChecked(), this->ui->checkBox_netTrainer_irisBlurred->isChecked(), this->ui->spinBox_netTrainer_trainSet->value(), this->ui->spinBox_netTrainer_testSet->value());
}

//Network Trainer END

//Minutiae Checker BEGIN

void MainWindow::on_pushButton_inputDirectory_2_clicked()
{    
    this->ui->listWidget_inputImages_2->clear();
    this->minCheckerTh->setImgInputPath(QFileDialog::getExistingDirectory());

    QDir inputImages(this->minCheckerTh->getImgInputPath(), "*.png *.jpg *.bmp *.tif");
    for (auto i : inputImages.entryInfoList()) {
        this->ui->listWidget_inputImages_2->addItem(i.fileName());
    }
}

void MainWindow::on_listWidget_inputImages_2_itemClicked(QListWidgetItem *item)
{
    this->actualImgName = item->text();
    this->fpImg.load(this->minCheckerTh->getImgInputPath() + "/" + this->actualImgName);
    this->fpImg = this->fpImg.convertToFormat(QImage::Format_Grayscale8);

    this->fpScene->clear();
    this->fpScene->addPixmap(QPixmap::fromImage(this->fpImg));
    this->fpScene->setImgWidth(this->fpImg.width());
    this->fpScene->setImgHeight(this->fpImg.height());

    this->currentBlock = this->fpScene->addRect(0 - this->ui->spinBox_minutiaeBlockSize->value()/2, 0-this->ui->spinBox_minutiaeBlockSize->value()/2, this->ui->spinBox_minutiaeBlockSize->value(), this->ui->spinBox_minutiaeBlockSize->value(), QPen(QColor(255, 127, 0)));
    this->currentBlock->setVisible(false);
    this->currentBlock->setZValue(1);

    this->ui->graphicsView_fingerprintChecker->setAlignment(Qt::AlignCenter | Qt::AlignHCenter);
    this->ui->graphicsView_fingerprintChecker->setScene(this->fpScene);
}

void MainWindow::showPredictedMinutia(QPoint xy, const QVector<QPair<QString, float> > predictedData)
{
    //MinutiaeRectangles
    QColor color;
    if (this->ui->spinBox_threshold->value() > predictedData[0].second*100) color = QColor(255,255,0);
    else if (predictedData[0].first[0].toLower() == 'e') color = QColor(0,0,255);
    else if (predictedData[0].first[0].toLower() == 'b') color = QColor(0,255,0);
    else if (predictedData[0].first[0].toLower() == 'n') color = QColor(255,0,0);

    this->currentBlock->setVisible(true);
    this->currentBlock->setPos(xy);
    this->currentBlock->setPen(QPen(color));

    this->ui->tableWidget_foundedMinutia->setRowCount(predictedData.size());
    for (int i = 0; i < predictedData.size(); i++) {
        QTableWidgetItem *type = new QTableWidgetItem (predictedData[i].first);
        type->setTextAlignment(Qt::AlignCenter);
        QTableWidgetItem *probab = new QTableWidgetItem (QString::number(predictedData[i].second, 'f', 3));
        probab->setTextAlignment(Qt::AlignCenter);

        this->ui->tableWidget_foundedMinutia->setItem(i, 0, type);
        this->ui->tableWidget_foundedMinutia->setItem(i, 1, probab);
        if (this->ui->spinBox_threshold->value() < predictedData[i].second*100) {
            this->ui->tableWidget_foundedMinutia->item(i, 0)->setBackgroundColor(QColor(99,224,66));
            this->ui->tableWidget_foundedMinutia->item(i, 1)->setBackgroundColor(QColor(99,224,66));
        }
    }
}

void MainWindow::predictMinutia(QPoint xy)
{
    emit this->predictMinutiaSignal(this->fpImg, xy, this->ui->spinBox_checkBlockSize->value(), this->ui->checkBox_variableBlockSize->isChecked());
}

void MainWindow::showHeatmap(QImage &heatMap)
{
    this->fpScene->clear();
    this->fpScene->addPixmap(QPixmap::fromImage(heatMap));
    this->ui->graphicsView_fingerprintChecker->setAlignment(Qt::AlignCenter | Qt::AlignHCenter);
    this->ui->graphicsView_fingerprintChecker->setScene(this->fpScene);
}

void MainWindow::generateMinutiaeHeatmap()
{
    emit this->predictHeatmapSignal(this->fpImg, this->ui->spinBox_checkBlockSize->value(), this->ui->checkBox_variableBlockSize->isChecked());
}


void MainWindow::on_radioButton_standard_clicked()
{
    this->fpScene->setMode("checker");
    this->ui->groupBox_foundedMinutia->setVisible(true);
    this->ui->groupBox_heatmapCreationProgress->setVisible(false);
}

void MainWindow::on_radioButton_heatmap_clicked()
{
    this->fpScene->setMode("checker_heatmap");
    this->generateMinutiaeHeatmap();
    this->ui->groupBox_foundedMinutia->setVisible(false);
    this->ui->groupBox_heatmapCreationProgress->setVisible(true);
}

void MainWindow::on_pushButton_inputModel_clicked()
{

}

//Minutiae Checker END


//Database Tester BEGIN

void MainWindow::on_pushButton_inputDatabase_clicked()
{
    QString path = QFileDialog::getExistingDirectory();
    this->dbTesterTh->setDbInputPath(path);
    this->ui->label_selectedDbName->setText(path.right(path.length() - this->dbTesterTh->getDbInputPath().lastIndexOf("/") - 1));
}


void MainWindow::on_pushButton_startTesting_clicked()
{
    if(QDir(this->dbTesterTh->getDbInputPath(), "*.png *.jpg *.bmp *.tif").entryInfoList().size() == this->ui->spinBox_numberOfSubject->value() * this->ui->spinBox_imagesPerSubject->value()) {

        MATCHER matcher = suprema;
        if (this->ui->radioButton_matcherBozorth->isChecked()) matcher = bozorth3;

        this->dbTesterTh->setExtractionFeatures(matcher, this->ui->checkBox_dbTester_variableBlockSize->isChecked(), this->ui->checkBox_dbTester_fixOrientations->isChecked());

        this->dbTesterTh->setPreprocessingParams(this->ui->spinBox_dbTester_BlockSize->value(),
                                                 this->ui->spinBox_dbTester_BasicOMapBlockSize->value(), this->ui->spinBox_dbTester_AdvancedOMapBlockSize->value(),
                                                 this->ui->doubleSpinBox_dbTester_BasicOMapSigma->value(), this->ui->doubleSpinBox_dbTester_AdvancedOMapSigma->value(),
                                                 this->ui->doubleSpinBox_dbTester_GaborSigma->value(), this->ui->doubleSpinBox_dbTester_GaborLambda->value());

        emit this->startDBTestingSignal(matcher, this->ui->spinBox_numberOfSubject->value(), this->ui->spinBox_imagesPerSubject->value());
        this->ui->pushButton_startTesting->setEnabled(false);
    }
    else {
        QMessageBox::warning(this, "Warning", "File number does not match with subject and item per subject number");
    }
}

void MainWindow::on_tabWidget_testerSettings_currentChanged(int index)
{
    this->ui->tabWidget_testerSettings->widget(index)->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    this->ui->tabWidget_testerSettings->widget(index)->resize(this->ui->tabWidget_testerSettings->widget(index)->minimumSizeHint());
    this->ui->tabWidget_testerSettings->setFixedHeight(this->ui->tabWidget_testerSettings->widget(index)->height()+35);
}

//Database Tester END

void MainWindow::startMinutiaeMarker()
{
    this->fpScene->setMode("marker");

    this->minMarkerTh = new MinutiaeMarker();
    this->minMarkerTh->moveToThread(this->minMarkerTh);
    this->minMarkerTh->start();

    //Minutiae Marker Connecter
    connect(this->minMarkerTh, SIGNAL(updateProgressBarSignal(QString, int, QString)), this, SLOT(updateProgressBar(QString, int, QString)));
    connect(this->fpScene, SIGNAL(pushMinutiaSignal(QPoint, QString)), this->minMarkerTh, SLOT(pushMinutia(QPoint, QString)));
    connect(this->fpScene, SIGNAL(setActualPositionSignal(QPoint)), this, SLOT(drawCurrentRectanglePosition(QPoint)));
    connect(this, SIGNAL(generateBlocksSignal(int, int, QString, bool, bool, double, bool, double, double)), this->minMarkerTh, SLOT(generateBlocks(int, int, QString, bool, bool, double, bool, double, double)));
    connect(this->minMarkerTh, SIGNAL(updateMinutiaeMarkerSceneSignal(QString)), this, SLOT(updateMinutiaeMarker(QString)));
    connect(this, SIGNAL(updateMinutiaeSignal(QString, QString)), this->minMarkerTh, SLOT(updataMinutiae(QString, QString)));
    connect(this->minMarkerTh, SIGNAL(blocksSaved()), this, SLOT(markerBlocksSaved()));
}

void MainWindow::startNetworkTrainer()
{
    this->netTrainerTh = new NetworkTrainer();
    this->netTrainerTh->moveToThread(this->netTrainerTh);
    this->netTrainerTh->start();

    this->fpScene->setMode("trainer");

    //Network Trainer Connecter
    connect(this, SIGNAL(startTrainSignal(bool, bool, bool, int, int)), this->netTrainerTh, SLOT(startTrain(bool, bool, bool, int, int)));
    connect(this->netTrainerTh, SIGNAL(logSignal(QString, QString)), this, SLOT(addLog(QString,QString)));
    connect(this->netTrainerTh, SIGNAL(updateProgressBarSignal(QString, int, QString)), this, SLOT(updateProgressBar(QString, int, QString)));
    connect(this->netTrainerTh, SIGNAL(clearLog(QString)), this, SLOT(clearLog(QString)));
}

void MainWindow::startMinutiaeChecker()
{
    this->minCheckerTh = new MinutiaeChecker();
    this->minCheckerTh->moveToThread(this->minCheckerTh);
    this->minCheckerTh->start();

    this->fpScene->setMode("checker");

    qRegisterMetaType<QVector<QPair<QString, float> >>("QVector<QPair<QString, float> >");

    //Minutiae Checker Connecter
    connect(this, SIGNAL(predictHeatmapSignal(QImage, int, bool)), this->minCheckerTh, SLOT(predictHeatmap(QImage, int, bool)));
    connect(this->minCheckerTh, SIGNAL(heatmapReadySignal(QImage)), this, SLOT(showHeatmap(QImage)));
    connect(this->minCheckerTh, SIGNAL(updateProgressBarSignal(QString, int, QString)), this, SLOT(updateProgressBar(QString, int, QString)));
    connect(this->fpScene, SIGNAL(predictMinutiaSignal(QPoint)), this, SLOT(predictMinutia(QPoint)));
    connect(this, SIGNAL(predictMinutiaSignal(QImage, QPoint, int, bool)), this->minCheckerTh, SLOT(predictOne(QImage, QPoint, int, bool)));
    connect(this->minCheckerTh, SIGNAL(sendPredictedMinutiaSignal(QPoint, QVector<QPair<QString, float> >)), this, SLOT(showPredictedMinutia(QPoint, QVector<QPair<QString, float> >)));
}

void MainWindow::startExtractionTester()
{
    this->exTesterTh = new ExtractionTester();
    this->exTesterTh->moveToThread(this->exTesterTh);
    this->exTesterTh->start();

    qRegisterMetaType<cv::Mat>("cv::Mat");
    qRegisterMetaType<QVector<MINUTIA>>("QVector<MINUTIA>");

    //Extraction Tester Connecter
    connect(this, SIGNAL(startExTestingSignal()), this->exTesterTh, SLOT(startTesting()));
    connect(this->exTesterTh, SIGNAL(preprocessingResultsSignal(cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat)), this, SLOT(showPreprocessingTestResults(cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat,cv::Mat)));
    connect(this->exTesterTh, SIGNAL(extractionResultsSignal(cv::Mat,QVector<MINUTIA>,QVector<MINUTIA>,QVector<MINUTIA>)), this, SLOT(showExtractionTestResults(cv::Mat,QVector<MINUTIA>,QVector<MINUTIA>,QVector<MINUTIA>)));
    connect(this->exTesterTh, SIGNAL(sendLogSignal(QString,QString)), this, SLOT(addLog(QString,QString)));
}

void MainWindow::startDbTester()
{
    this->dbTesterTh = new DatabaseTester();
    this->dbTesterTh->moveToThread(this->dbTesterTh);
    this->dbTesterTh->start();

    qRegisterMetaType<QVector<double>>("QVector<double>");
    qRegisterMetaType<MATCHER>("MATCHER");
    qRegisterMetaType<DBTEST_RESULT>("DBTEST_RESULT");

    //Database Tester Connecter
    connect(this, SIGNAL(startDBTestingSignal(MATCHER, int, int)), this->dbTesterTh, SLOT(startTesting(MATCHER, int, int)));
    connect(this->dbTesterTh, SIGNAL(logSignal(QString,QString)), this, SLOT(addLog(QString,QString)));
    connect(this->dbTesterTh, SIGNAL(updateProgressBarSignal(QString, int, QString)), this, SLOT(updateProgressBar(QString, int, QString)));
    connect(this->dbTesterTh, SIGNAL(warningSignal(QString, QString, QString)), this, SLOT(warningMessageBox(QString, QString, QString)));
    connect(this->dbTesterTh, SIGNAL(drawGraphSignal(DBTEST_RESULT)), this, SLOT(drawGraph(DBTEST_RESULT)));
    connect(this->dbTesterTh, SIGNAL(clearLog(QString)), this, SLOT(clearLog(QString)));
}

//Other
void MainWindow::on_tabWidget_main_currentChanged(int index)
{
    if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_marker") {
        if (!this->minMarkerTh) this->startMinutiaeMarker();
    }
    else if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_trainer") {
        if (!this->netTrainerTh) this->startNetworkTrainer();
    }
    else if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_checker") {
        if (!this->minCheckerTh) this->startMinutiaeChecker();
    }
    else if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_extractionTester") {
        if (!this->exTesterTh) this->startExtractionTester();
    }
    else if (this->ui->tabWidget_main->currentWidget()->objectName() == "tab_dbTester") {
        if (!this->dbTesterTh) this->startDbTester();
    }
}

void MainWindow::updateProgressBar(QString barName, int value, QString text)
{
    //qApp->processEvents();
    if (barName.toLower() == "marker") {
        if (text != "") {
            this->ui->progressBar_savingBlocks->setFormat(text + ": %p%");
        }
        else this->ui->progressBar_savingBlocks->setFormat("%p%");
        this->ui->progressBar_savingBlocks->setValue(value);
    }
    else if (barName.toLower() == "trainer") {
        if (text != "") {
            this->ui->progressBar_netTrainer_progress->setFormat(text + ": %p%");
        }
        else this->ui->progressBar_netTrainer_progress->setFormat("%p%");
        this->ui->progressBar_netTrainer_progress->setValue(value);
    }
    else if (barName.toLower() == "checker") {
        if (text != "") {
            this->ui->progressBar_heatmap->setFormat(text + ": %p%");
        }
        else this->ui->progressBar_heatmap->setFormat("%p%");
        this->ui->progressBar_heatmap->setValue(value);
    }
    else if (barName.toLower() == "dbtester") {
        if (text != "") {
            this->ui->progressBar_dbTester->setFormat(text + ": %p%");
        }
        else this->ui->progressBar_dbTester->setFormat("%p%");
        this->ui->progressBar_dbTester->setValue(value);
    }

    /*this->winTaskBarProgress->setValue(value);
    if (value == 100) this->winTaskBarProgress->setVisible(false);
    else this->winTaskBarProgress->setVisible(true);*/
}

void MainWindow::clearLog(QString logFieldName)
{
    if (logFieldName.toLower() == "networktrainer") {
        this->ui->textBrowser_netTrainer_log->clear();
    }
    else if (logFieldName.toLower() == "dbtester") {
        this->ui->textBrowser_dbTesterLog->clear();
    }
}

void MainWindow::addLog(QString logFieldName, QString text)
{
    if (logFieldName == "networkTrainer") {
        this->ui->textBrowser_netTrainer_log->append(text);
    }
    else if (logFieldName == "dbTester") {
        this->ui->textBrowser_dbTesterLog->append(text);
    }
    else if (logFieldName == "exTester") {
        this->ui->textBrowser_exTester_log->append(text);
    }
}

void MainWindow::drawGraph(DBTEST_RESULT results)
{
    this->ui->pushButton_startTesting->setEnabled(true);

    this->ui->widget_testFmrFnmr->xAxis->setRange(results.plotParams.min, results.plotParams.max);

    this->ui->widget_testFmrFnmr->graph(0)->data().data()->clear();
    this->ui->widget_testFmrFnmr->graph(1)->data().data()->clear();

    this->ui->widget_testFmrFnmr->graph(0)->setData(results.fmrX, results.fmrY);
    this->ui->widget_testFmrFnmr->graph(1)->setData(results.fnmrX, results.fnmrY);

    QVector<double> rocReference{0,0.1,0.2,0.5,0.8,0.9,1};

    this->ui->widget_testROC->graph(0)->setData(results.rocX, results.rocY);
    this->ui->widget_testROC->graph(1)->setData(rocReference, rocReference);
    this->ui->widget_testROC->replot();

    this->eerLabel->position->setType(QCPItemPosition::ptAxisRectRatio);
    this->eerLabel->position->setCoords(0.9, 0.5); // place position at center/top of axis rect
    this->eerLabel->setText("EER: " + QString::number(results.eer));
    this->eerLabel->setFont(QFont(font().family(), 12)); // make font a bit larger
    this->eerLabel->setVisible(true);

    this->ui->widget_testFmrFnmr->replot();
    this->ui->widget_testFmrFnmr->legend->setVisible(true);
}

void MainWindow::questionMessageBox(QString question, QString subject = "")
{
    if (subject == "") subject = "Warning";
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, subject, question, QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) emit questionBoxAnswerSignal(true);
    else if (reply == QMessageBox::No) emit questionBoxAnswerSignal(false);
}

void MainWindow::warningMessageBox(QString boxType, QString text, QString subject = "")
{
    if (boxType.toLower() == "warning") {
        if (subject == "") subject = "Warning";
        QMessageBox::warning(this, subject, text);
    }
    else if (boxType.toLower() == "error") {
        if (subject == "") subject = "Error";
        QMessageBox::critical(this, subject, text);
    }
}

/*void MainWindow::showEvent(QShowEvent *e)
{
#ifdef Q_OS_WIN32
    this->winTaskBarButton->setWindow(this->windowHandle());
#endif
    e->accept();
}*/




//Extraction Tester BEGIN

void MainWindow::runExtractionTester()
{
    if (this->exTesterTh->getIsImgLoaded()) {
        this->ui->tabWidget_exTester_settings->setEnabled(false);

        this->exTesterTh->setPreprocessingParams(this->ui->spinBox_exTester_BlockSize->value(), this->ui->spinBox_exTester_BasicOMapBlockSize->value(),
                                                 this->ui->spinBox_exTester_AdvancedOMapBlockSize->value(), this->ui->doubleSpinBox_exTester_BasicOMapSigma->value(),
                                                 this->ui->doubleSpinBox_exTester_AdvancedOMapSigma->value(), this->ui->doubleSpinBox_exTester_GaborSigma->value(),
                                                 this->ui->doubleSpinBox_exTester_GaborLambda->value(), this->ui->spinBox_exTester_holeSize->value());
        this->exTesterTh->setFeatures(this->ui->checkBox_exTester_contrast->isChecked(), this->ui->checkBox_exTester_advancedOMap->isChecked(), this->ui->checkBox_exTester_holeRemover->isChecked(),
                                      this->ui->checkBox_exTester_orientationFixer->isChecked(), this->ui->checkBox_exTester_mask->isChecked(),
                                      this->ui->checkBox_exTester_qualityMap->isChecked(), this->ui->groupBox_exTester_frequencyMap->isChecked());

        this->exTesterTh->setExtractionFeatures(this->ui->checkBox_exTester_orientationFixer->isChecked(), this->ui->checkBox_exTester_varBlockSize->isChecked());
        emit startExTestingSignal();
    }
}

void MainWindow::on_pushButton_exTester_inputDir_clicked()
{
    this->ui->listWidget_exTester_inputImages->clear();
    this->exTesterTh->setInputPath(QFileDialog::getExistingDirectory());

    QDir inputImages(this->exTesterTh->getInputPath(), "*.png *.jpg *.bmp *.tif");
    for (auto i:inputImages.entryInfoList()) {
        this->ui->listWidget_exTester_inputImages->addItem(i.fileName());
    }
}

void MainWindow::on_listWidget_exTester_inputImages_itemClicked(QListWidgetItem *item)
{
    cv::Mat img;
    img = cv::imread((this->exTesterTh->getInputPath() + "/" + item->text()).toStdString(), CV_8UC1);
    this->exTesterTh->setImgOrig(img);

    this->ui->groupBox_exTester_inputImages->setEnabled(false);

    this->runExtractionTester();
}

void MainWindow::showPreprocessingTestResults(cv::Mat imgOriginal, cv::Mat imgOMap, cv::Mat imgEnhanced, cv::Mat imgBinarized, cv::Mat imgSkeleton, cv::Mat imgSkeletonInv, cv::Mat imgMask, cv::Mat imgQMap, cv::Mat imgFMap)
{
    this->sceneTestOriginal->clear();
    this->sceneTestMask->clear();
    this->sceneTestMap->clear();
    this->sceneTestEnhanced->clear();
    this->sceneTestBinarized->clear();
    this->sceneTestSkeleton->clear();

    this->sceneTestOriginal->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgOriginal, QImage::Format_Grayscale8)));
    this->ui->graphicsView_exTester_original->setScene(this->sceneTestOriginal);

    this->sceneTestMask->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgMask, QImage::Format_Grayscale8)));
    this->ui->graphicsView_exTester_mask->setScene(this->sceneTestMask);

    if (this->ui->comboBox_exTester_map->currentText() == "Orientation")
        this->sceneTestMap->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgOMap, QImage::Format_RGB888)));
    else if (this->ui->comboBox_exTester_map->currentText() == "Quality")
        this->sceneTestMap->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgQMap, QImage::Format_Grayscale8)));
    else if (this->ui->comboBox_exTester_map->currentText() == "Frequency")
        this->sceneTestMap->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgFMap, QImage::Format_Grayscale8)));
    this->ui->graphicsView_exTester_map->setScene(this->sceneTestMap);

    this->sceneTestEnhanced->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgEnhanced, QImage::Format_Grayscale8)));
    this->ui->graphicsView_exTester_enhanced->setScene(this->sceneTestEnhanced);

    this->sceneTestBinarized->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgBinarized, QImage::Format_Grayscale8)));
    this->ui->graphicsView_exTester_binarized->setScene(this->sceneTestBinarized);

    if (this->ui->checkBox_exTester_invertedSkeleton->isChecked())
        this->sceneTestSkeleton->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgSkeletonInv, QImage::Format_Grayscale8)));
    else
        this->sceneTestSkeleton->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgSkeleton, QImage::Format_Grayscale8)));
    this->ui->graphicsView_exTester_skeleton->setScene(this->sceneTestSkeleton);

    this->ui->tabWidget_exTester_settings->setEnabled(true);
    this->ui->groupBox_exTester_inputImages->setEnabled(true);
}

void MainWindow::drawCircles(const MINUTIA &minutia, bool difference)
{
    QColor color;

    if (minutia.type == 0 && !difference) color = QColor(0,0,255);
    else if (minutia.type == 1 && !difference) color = QColor(0,255,0);
    else color = QColor(255,0,0);

    int arrow = 7;
    int radius = 4;
    //qDebug() << minutia.xy.x() << minutia.xy.y() << minutia.angle;

//    float angle = minutia.angle;
//    if (angle <= M_PI) angle = M_PI - angle;
//    else angle = 3 * M_PI - angle;

    QGraphicsItem *line = this->sceneTestExtraction->addLine(QLineF(QPointF(minutia.xy.x(), minutia.xy.y()), QPointF(minutia.xy.x() + qCos(minutia.angle) * arrow, minutia.xy.y() - qSin(minutia.angle) * arrow)), QPen(color));
    line->setOpacity(minutia.quality*1.0/100.0);
    QGraphicsItem *ellipse = this->sceneTestExtraction->addEllipse((qreal)minutia.xy.x() - radius, (qreal)minutia.xy.y() - radius, 2*radius, 2*radius, QPen(color));
    ellipse->setOpacity(minutia.quality*1.0/100.0);
    QGraphicsTextItem *textItem = this->sceneTestExtraction->addText(QString::number((int)(minutia.angle*180/M_PI)) + "º", QFont("Helvetica [Cronyx]", 2));
    textItem->setDefaultTextColor(QColor("white"));
    textItem->setPos(minutia.xy.x()+1, minutia.xy.y()-10);
    QGraphicsTextItem *textItemQuality = this->sceneTestExtraction->addText(QString::number(minutia.quality) + "%", QFont("Helvetica [Cronyx]", 2));
    textItemQuality->setDefaultTextColor(QColor("white"));
    textItemQuality->setPos(minutia.xy.x()+1, minutia.xy.y()-4);
}

void MainWindow::showExtractionTestResults(const cv::Mat &imgSkeleton, const QVector<MINUTIA> &crossingNumber, const QVector<MINUTIA> &fixedOrientations, const QVector<MINUTIA> &checkedOrientations)
{
    cv::Mat imgMarked;
    cv::cvtColor(this->exTesterTh->getImgOrig(), imgMarked, cv::COLOR_GRAY2RGB);

    this->sceneTestExtraction->clear();

    this->sceneTestExtraction->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgMarked, QImage::Format_RGB888)));
    //this->sceneTestExtraction->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(imgSkeleton, QImage::Format_Grayscale8)))->setOpacity(0.1);
    this->ui->graphicsView_exTester_extraction->setScene(this->sceneTestExtraction);

    int cnt = 0;
    bool difference = false;
    if (this->ui->radioButton_exTester_crossingNumber->isChecked()) {
        for (MINUTIA minutia : crossingNumber) {            
            this->drawCircles(minutia, difference);
        }
    }
    else if (this->ui->radioButton_exTester_fixedPredictedMinutiae->isChecked()) {
        for (MINUTIA minutia : fixedOrientations) {
            this->drawCircles(minutia, difference);
            cnt++;
        }
    }
    else if (this->ui->radioButton_exTester_predictedMinutiae->isChecked()) {
        for (MINUTIA minutia : checkedOrientations) {
            this->drawCircles(minutia, difference);
            cnt++;
        }
    }

    this->ui->tabWidget_exTester_settings->setEnabled(true);
    this->ui->groupBox_exTester_inputImages->setEnabled(true);
}


void MainWindow::on_checkBox_exTester_invertedSkeleton_clicked(bool checked)
{
    this->sceneTestSkeleton->clear();

    if (checked)
        this->sceneTestSkeleton->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(this->exTesterTh->getImgSkeletonInv(), QImage::Format_Grayscale8)));
    else
        this->sceneTestSkeleton->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(this->exTesterTh->getImgSkeleton(), QImage::Format_Grayscale8)));
    this->ui->graphicsView_exTester_skeleton->setScene(this->sceneTestSkeleton);
}

void MainWindow::on_comboBox_exTester_map_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Orientation")
        this->sceneTestMap->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(this->exTesterTh->getImgOMap(), QImage::Format_RGB888)));
    else if (arg1 == "Quality")
        this->sceneTestMap->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(this->exTesterTh->getImgQMap(), QImage::Format_Grayscale8)));
    else if (arg1 == "Frequency")
        this->sceneTestMap->addPixmap(QPixmap::fromImage(Helper::Mat2QImage(this->exTesterTh->getImgFMap(), QImage::Format_Grayscale8)));
    this->ui->graphicsView_exTester_map->setScene(this->sceneTestMap);
}

void MainWindow::on_checkBox_exTester_contrast_clicked()
{
    this->runExtractionTester();
}

void MainWindow::on_spinBox_exTester_holeSize_valueChanged(int arg1)
{
    this->runExtractionTester();
}

void MainWindow::on_checkBox_exTester_holeRemover_clicked()
{
    this->runExtractionTester();
}

void MainWindow::on_checkBox_exTester_mask_clicked()
{
    this->runExtractionTester();
}

void MainWindow::on_checkBox_exTester_qualityMap_clicked()
{
    this->runExtractionTester();
}

void MainWindow::on_spinBox_exTester_threadNum_valueChanged(int arg1)
{
    this->runExtractionTester();
}

void MainWindow::on_checkBox_exTester_orientationFixer_clicked()
{
    this->runExtractionTester();
}

void MainWindow::on_checkBox_exTester_advancedOMap_clicked()
{
    this->runExtractionTester();
}

void MainWindow::on_radioButton_exTester_crossingNumber_clicked(bool checked)
{
    if (checked) {
        this->showExtractionTestResults(this->exTesterTh->getImgSkeleton(), this->exTesterTh->getCrossingNumber(), this->exTesterTh->getFixedOrientations(), this->exTesterTh->getCheckedMnutiae());
    }
}

void MainWindow::on_radioButton_exTester_fixedPredictedMinutiae_clicked(bool checked)
{
    if (checked) {
        this->showExtractionTestResults(this->exTesterTh->getImgSkeleton(), this->exTesterTh->getCrossingNumber(), this->exTesterTh->getFixedOrientations(), this->exTesterTh->getCheckedMnutiae());
    }
}

void MainWindow::on_radioButton_exTester_predictedMinutiae_clicked(bool checked)
{
    if (checked) {
        this->showExtractionTestResults(this->exTesterTh->getImgSkeleton(), this->exTesterTh->getCrossingNumber(), this->exTesterTh->getFixedOrientations(), this->exTesterTh->getCheckedMnutiae());
    }
}

void MainWindow::on_checkBox_exTester_varBlockSize_clicked(bool checked)
{
    this->runExtractionTester();
}

void MainWindow::on_tabWidget_exTester_settings_currentChanged(int index)
{
    this->ui->tabWidget_exTester_settings->widget(index)->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    this->ui->tabWidget_exTester_settings->widget(index)->resize(this->ui->tabWidget_exTester_settings->widget(index)->minimumSizeHint());
    this->ui->tabWidget_exTester_settings->setFixedHeight(this->ui->tabWidget_exTester_settings->widget(index)->height()+35);
}
