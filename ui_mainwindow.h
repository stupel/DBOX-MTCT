/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QCustomPlot/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_41;
    QTabWidget *tabWidget_main;
    QWidget *tab_marker;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_marker_inputImages;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_inputDirectory;
    QListWidget *listWidget_inputImages;
    QGroupBox *groupBox_marker_settings;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_minutiaeBlockSize;
    QSpinBox *spinBox_minutiaeBlockSize;
    QLabel *label_additionalBlocks;
    QSpinBox *spinBox_additionalBlocks;
    QGroupBox *groupBox_minutiaeType;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_ending;
    QRadioButton *radioButton_bifurcation;
    QRadioButton *radioButton_nothing;
    QGroupBox *groupBox_transformations;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_marker_rotations;
    QHBoxLayout *horizontalLayout_17;
    QCheckBox *checkBox_marker_blur;
    QSpacerItem *horizontalSpacer_9;
    QDoubleSpinBox *doubleSpinBox_marker_blur;
    QGroupBox *groupBox_marker_irisBlur;
    QGridLayout *gridLayout_7;
    QLabel *label_irisBlur_blur;
    QLabel *label_irisBlur_radius;
    QDoubleSpinBox *doubleSpinBox_marker_irisBlur_blur;
    QDoubleSpinBox *doubleSpinBox_marker_irisBlur_radius;
    QGroupBox *groupBox_fingerprintImage;
    QVBoxLayout *verticalLayout_6;
    QGraphicsView *graphicsView_fingerprintMarker;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox_blockPreview;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_33;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_13;
    QGraphicsView *graphicsView_blockOrig;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_blockOrig;
    QSpacerItem *horizontalSpacer_15;
    QVBoxLayout *verticalLayout_34;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_16;
    QGraphicsView *graphicsView_blockBlur;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_blockBlur;
    QSpacerItem *horizontalSpacer_19;
    QVBoxLayout *verticalLayout_35;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_20;
    QGraphicsView *graphicsView_blockIrisBlur;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_blockIrisBlur;
    QSpacerItem *horizontalSpacer_23;
    QGroupBox *groupBox_marker_minutiaeList;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget_minutiae;
    QGroupBox *groupBox_output;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_outputPath;
    QLineEdit *lineEdit_marker_outputDirectory;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_marker_outputDirectory;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_outputFormat;
    QComboBox *comboBox_outputFormat;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_marker_saveBlocks;
    QProgressBar *progressBar_savingBlocks;
    QWidget *tab_trainer;
    QHBoxLayout *horizontalLayout_51;
    QGroupBox *groupBox_netTrainer_input;
    QVBoxLayout *verticalLayout_19;
    QPushButton *pushButton_netTrainer_input;
    QLabel *label_trainerInputDirectory;
    QTreeView *treeView_netTrainer_input;
    QVBoxLayout *verticalLayout_24;
    QGroupBox *groupBox_netTrainer_settings;
    QHBoxLayout *horizontalLayout_50;
    QVBoxLayout *verticalLayout_64;
    QHBoxLayout *horizontalLayout_48;
    QGroupBox *groupBox_netTrainer_inputBlocks;
    QVBoxLayout *verticalLayout_20;
    QCheckBox *checkBox_netTrainer_original;
    QCheckBox *checkBox_netTrainer_rotation;
    QCheckBox *checkBox_netTrainer_blurred;
    QCheckBox *checkBox_netTrainer_irisBlurred;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBox_netTrainer_trainingSettings;
    QVBoxLayout *verticalLayout_21;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBox_netTrainer_testSet;
    QSpinBox *spinBox_netTrainer_trainSet;
    QLabel *label_netTrainer_testSet;
    QLabel *label_netTrainer_trainSet;
    QGroupBox *groupBox_netTrainer_mode;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButton_netTrainer_cpu;
    QRadioButton *radioButton_netTrainer_gpu;
    QGroupBox *groupBox_netTrainer_output;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_netTrainer_outputFolder;
    QLineEdit *lineEdit_netTrainer_outputFolder;
    QPushButton *pushButton_netTrainer_outputFolder;
    QGroupBox *groupBox_netTrainer_solverParams;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_netTrainer_model;
    QLineEdit *lineEdit_netTrainer_model;
    QPushButton *pushButton_netTrainer_model;
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *gridLayout_3;
    QLabel *label_netTrainer_testIterations;
    QSpinBox *spinBox_netTrainer_testIterations;
    QLabel *label_netTrainer_testInterval;
    QSpinBox *spinBox_netTrainer_testInterval;
    QLabel *label_netTrainer_maxIterations;
    QSpinBox *spinBox_netTrainer_maxIterations;
    QLabel *label_netTrainer_snapshotInterval;
    QSpinBox *spinBox_netTrainer_snapshotInterval;
    QLabel *label_netTrainer_snapshotPrefix;
    QLineEdit *lineEdit_netTrainer_snapshotPrefix;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_5;
    QLabel *label_netTrainer_baseLearningRate;
    QDoubleSpinBox *doubleSpinBox_netTrainer_baseLearningRate;
    QLabel *label_netTrainer_momentum;
    QDoubleSpinBox *doubleSpinBox_netTrainer_momentum;
    QLabel *label_netTrainer_weightDecay;
    QDoubleSpinBox *doubleSpinBox_netTrainer_weightDecay;
    QLabel *label_netTrainer_gamma;
    QDoubleSpinBox *doubleSpinBox_netTrainer_gamma;
    QLabel *label_netTrainer_power;
    QDoubleSpinBox *doubleSpinBox_netTrainer_power;
    QGroupBox *groupBox_netTrainer_training;
    QVBoxLayout *verticalLayout_25;
    QTextBrowser *textBrowser_netTrainer_log;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_netTrainer_progress;
    QProgressBar *progressBar_netTrainer_progress;
    QPushButton *pushButton_netTrainer_startTraining;
    QWidget *tab_checker;
    QHBoxLayout *horizontalLayout_53;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_inputModel;
    QVBoxLayout *verticalLayout_14;
    QPushButton *pushButton_inputModel;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_selectedModel;
    QLabel *label_selectedModelName;
    QGroupBox *groupBox_inputImages_2;
    QVBoxLayout *verticalLayout_12;
    QPushButton *pushButton_inputDirectory_2;
    QListWidget *listWidget_inputImages_2;
    QGroupBox *groupBox_fingerprintImage_2;
    QVBoxLayout *verticalLayout_11;
    QGraphicsView *graphicsView_fingerprintChecker;
    QVBoxLayout *verticalLayout_66;
    QGroupBox *groupBox_minChecker_checkSettings;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox_minChecker_mode;
    QVBoxLayout *verticalLayout_16;
    QRadioButton *radioButton_minChecker_cpuMode;
    QRadioButton *radioButton_minChecker_gpuMode;
    QGroupBox *groupBox_minChecker_extactionSettings;
    QVBoxLayout *verticalLayout_26;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_checkBlockSize;
    QSpinBox *spinBox_checkBlockSize;
    QCheckBox *checkBox_variableBlockSize;
    QGroupBox *groupBox__minChecker_checkMode;
    QVBoxLayout *verticalLayout_65;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_standard;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_threshold;
    QSpinBox *spinBox_threshold;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_heatmap;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_overlay;
    QSlider *horizontalSlider_overlay;
    QGroupBox *groupBox_heatmapCreationProgress;
    QVBoxLayout *verticalLayout_17;
    QProgressBar *progressBar_heatmap;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_foundedMinutia;
    QVBoxLayout *verticalLayout_13;
    QTableWidget *tableWidget_foundedMinutia;
    QSpacerItem *verticalSpacer;
    QWidget *tab_extractionTester;
    QHBoxLayout *horizontalLayout_42;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_exTester_inputImages;
    QVBoxLayout *verticalLayout_52;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *pushButton_exTester_inputDir;
    QLabel *label_exTester_inputImages;
    QHBoxLayout *horizontalLayout_38;
    QListWidget *listWidget_exTester_inputImages;
    QVBoxLayout *verticalLayout_41;
    QLabel *label_exTester_overlay;
    QHBoxLayout *horizontalLayout_37;
    QSpacerItem *horizontalSpacer_33;
    QSlider *verticalSlider_exTester_overlay;
    QSpacerItem *horizontalSpacer_34;
    QTabWidget *tabWidget_exTester_settings;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_44;
    QGroupBox *groupBox_exTester_ParameterGeneral;
    QVBoxLayout *verticalLayout_55;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_exTester_BlockSize;
    QSpacerItem *horizontalSpacer_32;
    QSpinBox *spinBox_exTester_BlockSize;
    QGroupBox *groupBox_exTester_ParameterOMap;
    QVBoxLayout *verticalLayout_42;
    QLabel *label_exTesterGaussianBlurBasic;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_exTester_BasicOMapBlockSize;
    QSpinBox *spinBox_exTester_BasicOMapBlockSize;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_exTester_BasicOMapSigma;
    QDoubleSpinBox *doubleSpinBox_exTester_BasicOMapSigma;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_exTester_GaussianBlurAdvanced;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_exTester_AdvancedOMapBlockSize;
    QSpinBox *spinBox_exTester_AdvancedOMapBlockSize;
    QSpacerItem *horizontalSpacer_30;
    QLabel *label_exTester_AdvancedOMapSigma;
    QDoubleSpinBox *doubleSpinBox_exTester_AdvancedOMapSigma;
    QGroupBox *groupBox_exTester_frequencyMap;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_exTester_freqBlockSize;
    QSpinBox *spinBox_exTester_freqBlockSize;
    QSpacerItem *horizontalSpacer_36;
    QLabel *label_exTester_freqExBlockSize;
    QSpinBox *spinBox_exTester_freqExBlockSize;
    QGroupBox *groupBox_exTester_ParameterGabor;
    QVBoxLayout *verticalLayout_43;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_exTester_GaborSigma;
    QDoubleSpinBox *doubleSpinBox_exTester_GaborSigma;
    QSpacerItem *horizontalSpacer_31;
    QLabel *label_exTester_GaborLambda;
    QDoubleSpinBox *doubleSpinBox_exTester_GaborLambda;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_59;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_exTester_exBlockSize;
    QSpacerItem *horizontalSpacer_39;
    QSpinBox *spinBox_exTester_exBlockSize;
    QGroupBox *groupBox_exTester_exResults;
    QVBoxLayout *verticalLayout_60;
    QRadioButton *radioButton_exTester_crossingNumber;
    QRadioButton *radioButton_exTester_predictedMinutiae;
    QRadioButton *radioButton_exTester_fixedPredictedMinutiae;
    QWidget *tab_features;
    QVBoxLayout *verticalLayout_57;
    QGroupBox *groupBox_exTester_mode;
    QVBoxLayout *verticalLayout_40;
    QHBoxLayout *horizontalLayout_44;
    QRadioButton *radioButton_exTester_cpuMode;
    QSpacerItem *horizontalSpacer_38;
    QLabel *label_exTester_threadNum;
    QSpinBox *spinBox_exTester_threadNum;
    QRadioButton *radioButton_exTester_gpuMode;
    QGroupBox *groupBox_exTester_preprocessing;
    QVBoxLayout *verticalLayout_56;
    QCheckBox *checkBox_exTester_contrast;
    QHBoxLayout *horizontalLayout_43;
    QCheckBox *checkBox_exTester_holeRemover;
    QSpacerItem *horizontalSpacer_37;
    QLabel *label_exTester_removeHoles;
    QSpinBox *spinBox_exTester_holeSize;
    QCheckBox *checkBox_exTester_advancedOMap;
    QCheckBox *checkBox_exTester_mask;
    QCheckBox *checkBox_exTester_qualityMap;
    QGroupBox *groupBox_exTester_exFeatures_2;
    QVBoxLayout *verticalLayout_61;
    QCheckBox *checkBox_exTester_orientationFixer;
    QCheckBox *checkBox_exTester_varBlockSize;
    QTabWidget *tabWidget_exTester_results;
    QWidget *tab_8;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_45;
    QLabel *label_exExter_original;
    QGraphicsView *graphicsView_exTester_original;
    QVBoxLayout *verticalLayout_46;
    QLabel *label_exExter_mask;
    QGraphicsView *graphicsView_exTester_mask;
    QVBoxLayout *verticalLayout_47;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_exExter_omap;
    QComboBox *comboBox_exTester_map;
    QGraphicsView *graphicsView_exTester_map;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_48;
    QLabel *label_exExter_enhanced;
    QGraphicsView *graphicsView_exTester_enhanced;
    QVBoxLayout *verticalLayout_49;
    QLabel *label_exExter_binarized;
    QGraphicsView *graphicsView_exTester_binarized;
    QVBoxLayout *verticalLayout_50;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_exExter_skeleton;
    QCheckBox *checkBox_exTester_invertedSkeleton;
    QGraphicsView *graphicsView_exTester_skeleton;
    QWidget *tab_extraction;
    QVBoxLayout *verticalLayout_58;
    QGraphicsView *graphicsView_exTester_extraction;
    QWidget *tab_large;
    QVBoxLayout *verticalLayout_63;
    QHBoxLayout *horizontalLayout_52;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox;
    QGraphicsView *graphicsView;
    QWidget *tab_log;
    QVBoxLayout *verticalLayout_51;
    QTextBrowser *textBrowser_exTester_log;
    QWidget *tab_dbTester;
    QHBoxLayout *horizontalLayout_28;
    QVBoxLayout *verticalLayout_37;
    QTabWidget *tabWidget_testerSettings;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_62;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_inputDatabase;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_selectedDbName;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout_4;
    QLabel *label_numberOfSubject;
    QSpinBox *spinBox_numberOfSubject;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_imagesPerSubject;
    QSpinBox *spinBox_imagesPerSubject;
    QGroupBox *groupBox_dbTester_mode;
    QVBoxLayout *verticalLayout_29;
    QHBoxLayout *horizontalLayout_49;
    QRadioButton *radioButton_dbTester_cpuMode;
    QSpacerItem *horizontalSpacer_42;
    QLabel *label_dbTester_threadNum;
    QSpinBox *spinBox_dbTester_threadNum;
    QRadioButton *radioButton_dbTester_gpuMode;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_54;
    QGroupBox *groupBox_matcher;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *radioButton_matcherSuprema;
    QRadioButton *radioButton_matcherBozorth;
    QGroupBox *groupBox_dbTester_preprocessing;
    QVBoxLayout *verticalLayout_53;
    QCheckBox *checkBox_dbTester_contrastEnhancement;
    QCheckBox *checkBox_dbTester_advancedOrientationMap;
    QCheckBox *checkBox_dbTester_qualityMap;
    QCheckBox *checkBox_dbTester_mask;
    QCheckBox *checkBox_dbTester_invertedSkeleton;
    QHBoxLayout *horizontalLayout_47;
    QCheckBox *checkBox_dbTester_removeHoles;
    QSpacerItem *horizontalSpacer_35;
    QLabel *label_dbTester_holeSize;
    QSpinBox *spinBox_dbTester_holeSize;
    QGroupBox *groupBox_dbTester_Extraction;
    QVBoxLayout *verticalLayout_36;
    QCheckBox *checkBox_dbTester_fixOrientations;
    QCheckBox *checkBox_dbTester_variableBlockSize;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_38;
    QGroupBox *groupBox_dbTester_ParameterGeneral;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_dbTester_BlockSize;
    QSpacerItem *horizontalSpacer_25;
    QSpinBox *spinBox_dbTester_BlockSize;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_dbTester_freqBlockSize;
    QSpinBox *spinBox_dbTester_freqBlockSize;
    QSpacerItem *horizontalSpacer_40;
    QLabel *label_dbTester_freqExBlockSize;
    QSpinBox *spinBox_dbTester_freqExBlockSize;
    QGroupBox *groupBox_dbTester_ParameterOMap;
    QVBoxLayout *verticalLayout_27;
    QLabel *label_dbTesterGaussianBlurBasic;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_dbTester_BasicOMapBlockSize;
    QSpinBox *spinBox_dbTester_BasicOMapBlockSize;
    QSpacerItem *horizontalSpacer_26;
    QLabel *label_ddbTester_BasicOMapSigma;
    QDoubleSpinBox *doubleSpinBox_dbTester_BasicOMapSigma;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_dbTesterGaussianBlurAdvanced;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_dbTester_AdvancedOMapBlockSize;
    QSpinBox *spinBox_dbTester_AdvancedOMapBlockSize;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label_dbTester_AdvancedOMapSigma;
    QDoubleSpinBox *doubleSpinBox_dbTester_AdvancedOMapSigma;
    QGroupBox *groupBox_dbTester_ParameterGabor;
    QVBoxLayout *verticalLayout_39;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_dbTester_GaborSigma;
    QDoubleSpinBox *doubleSpinBox_dbTester_GaborSigma;
    QSpacerItem *horizontalSpacer_29;
    QLabel *label_dbTester_GaborLambda;
    QDoubleSpinBox *doubleSpinBox_dbTester_GaborLambda;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_startTesting;
    QGroupBox *groupBox_dbTester_Log;
    QVBoxLayout *verticalLayout_28;
    QTextBrowser *textBrowser_dbTesterLog;
    QProgressBar *progressBar_dbTester;
    QGroupBox *groupBox_dbTester_Results;
    QVBoxLayout *verticalLayout_32;
    QTabWidget *tabWidget_testResults;
    QWidget *tab_farfrr;
    QVBoxLayout *verticalLayout_30;
    QCustomPlot *widget_testFmrFnmr;
    QWidget *tab_roc;
    QVBoxLayout *verticalLayout_31;
    QCustomPlot *widget_testROC;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1168, 725);
        MainWindow->setMaximumSize(QSize(16777215, 725));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_41 = new QHBoxLayout(centralWidget);
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        tabWidget_main = new QTabWidget(centralWidget);
        tabWidget_main->setObjectName(QStringLiteral("tabWidget_main"));
        tab_marker = new QWidget();
        tab_marker->setObjectName(QStringLiteral("tab_marker"));
        horizontalLayout_6 = new QHBoxLayout(tab_marker);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_marker_inputImages = new QGroupBox(tab_marker);
        groupBox_marker_inputImages->setObjectName(QStringLiteral("groupBox_marker_inputImages"));
        groupBox_marker_inputImages->setMinimumSize(QSize(200, 0));
        groupBox_marker_inputImages->setMaximumSize(QSize(200, 16777215));
        verticalLayout_9 = new QVBoxLayout(groupBox_marker_inputImages);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pushButton_inputDirectory = new QPushButton(groupBox_marker_inputImages);
        pushButton_inputDirectory->setObjectName(QStringLiteral("pushButton_inputDirectory"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_inputDirectory->sizePolicy().hasHeightForWidth());
        pushButton_inputDirectory->setSizePolicy(sizePolicy);
        pushButton_inputDirectory->setMaximumSize(QSize(100, 16777215));

        verticalLayout_8->addWidget(pushButton_inputDirectory);

        listWidget_inputImages = new QListWidget(groupBox_marker_inputImages);
        listWidget_inputImages->setObjectName(QStringLiteral("listWidget_inputImages"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget_inputImages->sizePolicy().hasHeightForWidth());
        listWidget_inputImages->setSizePolicy(sizePolicy1);
        listWidget_inputImages->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_8->addWidget(listWidget_inputImages);


        verticalLayout_9->addLayout(verticalLayout_8);


        verticalLayout_5->addWidget(groupBox_marker_inputImages);

        groupBox_marker_settings = new QGroupBox(tab_marker);
        groupBox_marker_settings->setObjectName(QStringLiteral("groupBox_marker_settings"));
        groupBox_marker_settings->setMaximumSize(QSize(200, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_marker_settings);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_minutiaeBlockSize = new QLabel(groupBox_marker_settings);
        label_minutiaeBlockSize->setObjectName(QStringLiteral("label_minutiaeBlockSize"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_minutiaeBlockSize->sizePolicy().hasHeightForWidth());
        label_minutiaeBlockSize->setSizePolicy(sizePolicy2);
        label_minutiaeBlockSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_minutiaeBlockSize, 0, 0, 1, 1);

        spinBox_minutiaeBlockSize = new QSpinBox(groupBox_marker_settings);
        spinBox_minutiaeBlockSize->setObjectName(QStringLiteral("spinBox_minutiaeBlockSize"));
        sizePolicy.setHeightForWidth(spinBox_minutiaeBlockSize->sizePolicy().hasHeightForWidth());
        spinBox_minutiaeBlockSize->setSizePolicy(sizePolicy);
        spinBox_minutiaeBlockSize->setValue(21);

        gridLayout->addWidget(spinBox_minutiaeBlockSize, 0, 1, 1, 1);

        label_additionalBlocks = new QLabel(groupBox_marker_settings);
        label_additionalBlocks->setObjectName(QStringLiteral("label_additionalBlocks"));
        sizePolicy2.setHeightForWidth(label_additionalBlocks->sizePolicy().hasHeightForWidth());
        label_additionalBlocks->setSizePolicy(sizePolicy2);
        label_additionalBlocks->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_additionalBlocks, 1, 0, 1, 1);

        spinBox_additionalBlocks = new QSpinBox(groupBox_marker_settings);
        spinBox_additionalBlocks->setObjectName(QStringLiteral("spinBox_additionalBlocks"));
        sizePolicy.setHeightForWidth(spinBox_additionalBlocks->sizePolicy().hasHeightForWidth());
        spinBox_additionalBlocks->setSizePolicy(sizePolicy);
        spinBox_additionalBlocks->setValue(2);

        gridLayout->addWidget(spinBox_additionalBlocks, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        groupBox_minutiaeType = new QGroupBox(groupBox_marker_settings);
        groupBox_minutiaeType->setObjectName(QStringLiteral("groupBox_minutiaeType"));
        verticalLayout_2 = new QVBoxLayout(groupBox_minutiaeType);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_ending = new QRadioButton(groupBox_minutiaeType);
        radioButton_ending->setObjectName(QStringLiteral("radioButton_ending"));
        radioButton_ending->setChecked(true);

        verticalLayout_2->addWidget(radioButton_ending);

        radioButton_bifurcation = new QRadioButton(groupBox_minutiaeType);
        radioButton_bifurcation->setObjectName(QStringLiteral("radioButton_bifurcation"));
        radioButton_bifurcation->setChecked(false);

        verticalLayout_2->addWidget(radioButton_bifurcation);

        radioButton_nothing = new QRadioButton(groupBox_minutiaeType);
        radioButton_nothing->setObjectName(QStringLiteral("radioButton_nothing"));

        verticalLayout_2->addWidget(radioButton_nothing);


        verticalLayout_3->addWidget(groupBox_minutiaeType);

        groupBox_transformations = new QGroupBox(groupBox_marker_settings);
        groupBox_transformations->setObjectName(QStringLiteral("groupBox_transformations"));
        verticalLayout = new QVBoxLayout(groupBox_transformations);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_marker_rotations = new QCheckBox(groupBox_transformations);
        checkBox_marker_rotations->setObjectName(QStringLiteral("checkBox_marker_rotations"));
        checkBox_marker_rotations->setChecked(true);

        verticalLayout->addWidget(checkBox_marker_rotations);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        checkBox_marker_blur = new QCheckBox(groupBox_transformations);
        checkBox_marker_blur->setObjectName(QStringLiteral("checkBox_marker_blur"));
        checkBox_marker_blur->setChecked(false);

        horizontalLayout_17->addWidget(checkBox_marker_blur);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_9);

        doubleSpinBox_marker_blur = new QDoubleSpinBox(groupBox_transformations);
        doubleSpinBox_marker_blur->setObjectName(QStringLiteral("doubleSpinBox_marker_blur"));
        doubleSpinBox_marker_blur->setMinimumSize(QSize(50, 0));
        doubleSpinBox_marker_blur->setMaximumSize(QSize(50, 16777215));
        doubleSpinBox_marker_blur->setDecimals(1);
        doubleSpinBox_marker_blur->setMinimum(0.1);
        doubleSpinBox_marker_blur->setMaximum(10);
        doubleSpinBox_marker_blur->setSingleStep(0.1);
        doubleSpinBox_marker_blur->setValue(0.6);

        horizontalLayout_17->addWidget(doubleSpinBox_marker_blur);


        verticalLayout->addLayout(horizontalLayout_17);

        groupBox_marker_irisBlur = new QGroupBox(groupBox_transformations);
        groupBox_marker_irisBlur->setObjectName(QStringLiteral("groupBox_marker_irisBlur"));
        groupBox_marker_irisBlur->setCheckable(true);
        gridLayout_7 = new QGridLayout(groupBox_marker_irisBlur);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_irisBlur_blur = new QLabel(groupBox_marker_irisBlur);
        label_irisBlur_blur->setObjectName(QStringLiteral("label_irisBlur_blur"));

        gridLayout_7->addWidget(label_irisBlur_blur, 0, 0, 1, 1);

        label_irisBlur_radius = new QLabel(groupBox_marker_irisBlur);
        label_irisBlur_radius->setObjectName(QStringLiteral("label_irisBlur_radius"));

        gridLayout_7->addWidget(label_irisBlur_radius, 0, 1, 1, 1);

        doubleSpinBox_marker_irisBlur_blur = new QDoubleSpinBox(groupBox_marker_irisBlur);
        doubleSpinBox_marker_irisBlur_blur->setObjectName(QStringLiteral("doubleSpinBox_marker_irisBlur_blur"));
        doubleSpinBox_marker_irisBlur_blur->setMinimumSize(QSize(50, 0));
        doubleSpinBox_marker_irisBlur_blur->setMaximumSize(QSize(50, 16777215));
        doubleSpinBox_marker_irisBlur_blur->setDecimals(1);
        doubleSpinBox_marker_irisBlur_blur->setMinimum(0.1);
        doubleSpinBox_marker_irisBlur_blur->setMaximum(10);
        doubleSpinBox_marker_irisBlur_blur->setSingleStep(0.1);
        doubleSpinBox_marker_irisBlur_blur->setValue(1.1);

        gridLayout_7->addWidget(doubleSpinBox_marker_irisBlur_blur, 1, 0, 1, 1);

        doubleSpinBox_marker_irisBlur_radius = new QDoubleSpinBox(groupBox_marker_irisBlur);
        doubleSpinBox_marker_irisBlur_radius->setObjectName(QStringLiteral("doubleSpinBox_marker_irisBlur_radius"));
        doubleSpinBox_marker_irisBlur_radius->setMinimumSize(QSize(50, 0));
        doubleSpinBox_marker_irisBlur_radius->setMaximumSize(QSize(50, 16777215));
        doubleSpinBox_marker_irisBlur_radius->setDecimals(1);
        doubleSpinBox_marker_irisBlur_radius->setMinimum(0.1);
        doubleSpinBox_marker_irisBlur_radius->setMaximum(10);
        doubleSpinBox_marker_irisBlur_radius->setSingleStep(0.1);
        doubleSpinBox_marker_irisBlur_radius->setValue(3);

        gridLayout_7->addWidget(doubleSpinBox_marker_irisBlur_radius, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_marker_irisBlur);


        verticalLayout_3->addWidget(groupBox_transformations);


        verticalLayout_5->addWidget(groupBox_marker_settings);


        horizontalLayout_6->addLayout(verticalLayout_5);

        groupBox_fingerprintImage = new QGroupBox(tab_marker);
        groupBox_fingerprintImage->setObjectName(QStringLiteral("groupBox_fingerprintImage"));
        groupBox_fingerprintImage->setMinimumSize(QSize(500, 0));
        verticalLayout_6 = new QVBoxLayout(groupBox_fingerprintImage);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        graphicsView_fingerprintMarker = new QGraphicsView(groupBox_fingerprintImage);
        graphicsView_fingerprintMarker->setObjectName(QStringLiteral("graphicsView_fingerprintMarker"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(graphicsView_fingerprintMarker->sizePolicy().hasHeightForWidth());
        graphicsView_fingerprintMarker->setSizePolicy(sizePolicy3);
        graphicsView_fingerprintMarker->setMouseTracking(true);
        graphicsView_fingerprintMarker->setAutoFillBackground(false);
        graphicsView_fingerprintMarker->setStyleSheet(QStringLiteral("background: rgb(159, 159, 159)"));
        graphicsView_fingerprintMarker->setFrameShape(QFrame::Box);
        graphicsView_fingerprintMarker->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_fingerprintMarker->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_fingerprintMarker->setDragMode(QGraphicsView::ScrollHandDrag);
        graphicsView_fingerprintMarker->setRubberBandSelectionMode(Qt::IntersectsItemShape);

        verticalLayout_6->addWidget(graphicsView_fingerprintMarker);


        horizontalLayout_6->addWidget(groupBox_fingerprintImage);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        groupBox_blockPreview = new QGroupBox(tab_marker);
        groupBox_blockPreview->setObjectName(QStringLiteral("groupBox_blockPreview"));
        groupBox_blockPreview->setMinimumSize(QSize(0, 115));
        groupBox_blockPreview->setMaximumSize(QSize(270, 115));
        horizontalLayout_24 = new QHBoxLayout(groupBox_blockPreview);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalSpacer_13 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_13);

        graphicsView_blockOrig = new QGraphicsView(groupBox_blockPreview);
        graphicsView_blockOrig->setObjectName(QStringLiteral("graphicsView_blockOrig"));
        graphicsView_blockOrig->setMinimumSize(QSize(50, 50));
        graphicsView_blockOrig->setMaximumSize(QSize(50, 50));
        graphicsView_blockOrig->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_blockOrig->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_18->addWidget(graphicsView_blockOrig);

        horizontalSpacer_10 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_10);


        verticalLayout_33->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalSpacer_14 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_14);

        label_blockOrig = new QLabel(groupBox_blockPreview);
        label_blockOrig->setObjectName(QStringLiteral("label_blockOrig"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_blockOrig->sizePolicy().hasHeightForWidth());
        label_blockOrig->setSizePolicy(sizePolicy4);
        label_blockOrig->setMinimumSize(QSize(60, 0));
        label_blockOrig->setMaximumSize(QSize(60, 16777215));
        label_blockOrig->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(label_blockOrig);

        horizontalSpacer_15 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_15);


        verticalLayout_33->addLayout(horizontalLayout_19);


        horizontalLayout_24->addLayout(verticalLayout_33);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalSpacer_16 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_16);

        graphicsView_blockBlur = new QGraphicsView(groupBox_blockPreview);
        graphicsView_blockBlur->setObjectName(QStringLiteral("graphicsView_blockBlur"));
        graphicsView_blockBlur->setMinimumSize(QSize(50, 50));
        graphicsView_blockBlur->setMaximumSize(QSize(50, 50));
        graphicsView_blockBlur->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_blockBlur->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_20->addWidget(graphicsView_blockBlur);

        horizontalSpacer_17 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_17);


        verticalLayout_34->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalSpacer_18 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_18);

        label_blockBlur = new QLabel(groupBox_blockPreview);
        label_blockBlur->setObjectName(QStringLiteral("label_blockBlur"));
        sizePolicy4.setHeightForWidth(label_blockBlur->sizePolicy().hasHeightForWidth());
        label_blockBlur->setSizePolicy(sizePolicy4);
        label_blockBlur->setMinimumSize(QSize(60, 0));
        label_blockBlur->setMaximumSize(QSize(60, 16777215));
        label_blockBlur->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(label_blockBlur);

        horizontalSpacer_19 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_19);


        verticalLayout_34->addLayout(horizontalLayout_21);


        horizontalLayout_24->addLayout(verticalLayout_34);

        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalSpacer_20 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_20);

        graphicsView_blockIrisBlur = new QGraphicsView(groupBox_blockPreview);
        graphicsView_blockIrisBlur->setObjectName(QStringLiteral("graphicsView_blockIrisBlur"));
        graphicsView_blockIrisBlur->setMinimumSize(QSize(50, 50));
        graphicsView_blockIrisBlur->setMaximumSize(QSize(50, 50));
        graphicsView_blockIrisBlur->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_blockIrisBlur->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_22->addWidget(graphicsView_blockIrisBlur);

        horizontalSpacer_21 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_21);


        verticalLayout_35->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalSpacer_22 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_22);

        label_blockIrisBlur = new QLabel(groupBox_blockPreview);
        label_blockIrisBlur->setObjectName(QStringLiteral("label_blockIrisBlur"));
        sizePolicy4.setHeightForWidth(label_blockIrisBlur->sizePolicy().hasHeightForWidth());
        label_blockIrisBlur->setSizePolicy(sizePolicy4);
        label_blockIrisBlur->setMinimumSize(QSize(65, 0));
        label_blockIrisBlur->setMaximumSize(QSize(65, 16777215));
        label_blockIrisBlur->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_blockIrisBlur);

        horizontalSpacer_23 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_23);


        verticalLayout_35->addLayout(horizontalLayout_23);


        horizontalLayout_24->addLayout(verticalLayout_35);


        verticalLayout_18->addWidget(groupBox_blockPreview);

        groupBox_marker_minutiaeList = new QGroupBox(tab_marker);
        groupBox_marker_minutiaeList->setObjectName(QStringLiteral("groupBox_marker_minutiaeList"));
        groupBox_marker_minutiaeList->setMinimumSize(QSize(270, 0));
        groupBox_marker_minutiaeList->setMaximumSize(QSize(270, 16777215));
        verticalLayout_4 = new QVBoxLayout(groupBox_marker_minutiaeList);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableWidget_minutiae = new QTableWidget(groupBox_marker_minutiaeList);
        tableWidget_minutiae->setObjectName(QStringLiteral("tableWidget_minutiae"));
        tableWidget_minutiae->setMaximumSize(QSize(256, 16777215));
        tableWidget_minutiae->setAutoFillBackground(false);
        tableWidget_minutiae->setFrameShape(QFrame::NoFrame);
        tableWidget_minutiae->setLineWidth(1);
        tableWidget_minutiae->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_minutiae->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_minutiae->setAlternatingRowColors(true);
        tableWidget_minutiae->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_minutiae->setShowGrid(true);
        tableWidget_minutiae->setGridStyle(Qt::SolidLine);
        tableWidget_minutiae->setCornerButtonEnabled(true);
        tableWidget_minutiae->verticalHeader()->setHighlightSections(false);

        verticalLayout_4->addWidget(tableWidget_minutiae);


        verticalLayout_18->addWidget(groupBox_marker_minutiaeList);

        groupBox_output = new QGroupBox(tab_marker);
        groupBox_output->setObjectName(QStringLiteral("groupBox_output"));
        groupBox_output->setMinimumSize(QSize(0, 160));
        groupBox_output->setMaximumSize(QSize(270, 180));
        verticalLayout_10 = new QVBoxLayout(groupBox_output);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_outputPath = new QLabel(groupBox_output);
        label_outputPath->setObjectName(QStringLiteral("label_outputPath"));
        label_outputPath->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(label_outputPath);

        lineEdit_marker_outputDirectory = new QLineEdit(groupBox_output);
        lineEdit_marker_outputDirectory->setObjectName(QStringLiteral("lineEdit_marker_outputDirectory"));
        lineEdit_marker_outputDirectory->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_marker_outputDirectory);


        verticalLayout_10->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_marker_outputDirectory = new QPushButton(groupBox_output);
        pushButton_marker_outputDirectory->setObjectName(QStringLiteral("pushButton_marker_outputDirectory"));
        sizePolicy.setHeightForWidth(pushButton_marker_outputDirectory->sizePolicy().hasHeightForWidth());
        pushButton_marker_outputDirectory->setSizePolicy(sizePolicy);
        pushButton_marker_outputDirectory->setMinimumSize(QSize(100, 0));
        pushButton_marker_outputDirectory->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(pushButton_marker_outputDirectory);


        verticalLayout_10->addLayout(horizontalLayout_4);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_6);

        verticalSpacer_4 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_outputFormat = new QLabel(groupBox_output);
        label_outputFormat->setObjectName(QStringLiteral("label_outputFormat"));
        label_outputFormat->setMinimumSize(QSize(0, 25));
        label_outputFormat->setWordWrap(true);

        horizontalLayout->addWidget(label_outputFormat);

        comboBox_outputFormat = new QComboBox(groupBox_output);
        comboBox_outputFormat->addItem(QString());
        comboBox_outputFormat->addItem(QString());
        comboBox_outputFormat->setObjectName(QStringLiteral("comboBox_outputFormat"));
        comboBox_outputFormat->setMinimumSize(QSize(70, 0));

        horizontalLayout->addWidget(comboBox_outputFormat);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_marker_saveBlocks = new QPushButton(groupBox_output);
        pushButton_marker_saveBlocks->setObjectName(QStringLiteral("pushButton_marker_saveBlocks"));
        pushButton_marker_saveBlocks->setMinimumSize(QSize(100, 0));
        pushButton_marker_saveBlocks->setMaximumSize(QSize(100, 16777215));
        pushButton_marker_saveBlocks->setAutoFillBackground(false);
        pushButton_marker_saveBlocks->setStyleSheet(QLatin1String("background: rgb(54, 156, 221);\n"
"color: white;"));
        pushButton_marker_saveBlocks->setCheckable(false);

        horizontalLayout->addWidget(pushButton_marker_saveBlocks);


        verticalLayout_10->addLayout(horizontalLayout);

        progressBar_savingBlocks = new QProgressBar(groupBox_output);
        progressBar_savingBlocks->setObjectName(QStringLiteral("progressBar_savingBlocks"));
        progressBar_savingBlocks->setValue(0);
        progressBar_savingBlocks->setAlignment(Qt::AlignCenter);
        progressBar_savingBlocks->setInvertedAppearance(false);

        verticalLayout_10->addWidget(progressBar_savingBlocks);


        verticalLayout_18->addWidget(groupBox_output);


        horizontalLayout_6->addLayout(verticalLayout_18);

        tabWidget_main->addTab(tab_marker, QString());
        tab_trainer = new QWidget();
        tab_trainer->setObjectName(QStringLiteral("tab_trainer"));
        horizontalLayout_51 = new QHBoxLayout(tab_trainer);
        horizontalLayout_51->setSpacing(6);
        horizontalLayout_51->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_51->setObjectName(QStringLiteral("horizontalLayout_51"));
        groupBox_netTrainer_input = new QGroupBox(tab_trainer);
        groupBox_netTrainer_input->setObjectName(QStringLiteral("groupBox_netTrainer_input"));
        groupBox_netTrainer_input->setMaximumSize(QSize(280, 16777215));
        verticalLayout_19 = new QVBoxLayout(groupBox_netTrainer_input);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        pushButton_netTrainer_input = new QPushButton(groupBox_netTrainer_input);
        pushButton_netTrainer_input->setObjectName(QStringLiteral("pushButton_netTrainer_input"));
        pushButton_netTrainer_input->setMaximumSize(QSize(100, 16777215));

        verticalLayout_19->addWidget(pushButton_netTrainer_input);

        label_trainerInputDirectory = new QLabel(groupBox_netTrainer_input);
        label_trainerInputDirectory->setObjectName(QStringLiteral("label_trainerInputDirectory"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_trainerInputDirectory->sizePolicy().hasHeightForWidth());
        label_trainerInputDirectory->setSizePolicy(sizePolicy5);
        label_trainerInputDirectory->setWordWrap(true);

        verticalLayout_19->addWidget(label_trainerInputDirectory);

        treeView_netTrainer_input = new QTreeView(groupBox_netTrainer_input);
        treeView_netTrainer_input->setObjectName(QStringLiteral("treeView_netTrainer_input"));
        treeView_netTrainer_input->setMaximumSize(QSize(260, 16777215));

        verticalLayout_19->addWidget(treeView_netTrainer_input);


        horizontalLayout_51->addWidget(groupBox_netTrainer_input);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        groupBox_netTrainer_settings = new QGroupBox(tab_trainer);
        groupBox_netTrainer_settings->setObjectName(QStringLiteral("groupBox_netTrainer_settings"));
        groupBox_netTrainer_settings->setMaximumSize(QSize(16777215, 300));
        horizontalLayout_50 = new QHBoxLayout(groupBox_netTrainer_settings);
        horizontalLayout_50->setSpacing(6);
        horizontalLayout_50->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_50->setObjectName(QStringLiteral("horizontalLayout_50"));
        verticalLayout_64 = new QVBoxLayout();
        verticalLayout_64->setSpacing(6);
        verticalLayout_64->setObjectName(QStringLiteral("verticalLayout_64"));
        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(6);
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        groupBox_netTrainer_inputBlocks = new QGroupBox(groupBox_netTrainer_settings);
        groupBox_netTrainer_inputBlocks->setObjectName(QStringLiteral("groupBox_netTrainer_inputBlocks"));
        groupBox_netTrainer_inputBlocks->setEnabled(true);
        groupBox_netTrainer_inputBlocks->setMinimumSize(QSize(0, 0));
        verticalLayout_20 = new QVBoxLayout(groupBox_netTrainer_inputBlocks);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        checkBox_netTrainer_original = new QCheckBox(groupBox_netTrainer_inputBlocks);
        checkBox_netTrainer_original->setObjectName(QStringLiteral("checkBox_netTrainer_original"));
        checkBox_netTrainer_original->setCheckable(true);
        checkBox_netTrainer_original->setChecked(true);

        verticalLayout_20->addWidget(checkBox_netTrainer_original);

        checkBox_netTrainer_rotation = new QCheckBox(groupBox_netTrainer_inputBlocks);
        checkBox_netTrainer_rotation->setObjectName(QStringLiteral("checkBox_netTrainer_rotation"));
        checkBox_netTrainer_rotation->setChecked(true);

        verticalLayout_20->addWidget(checkBox_netTrainer_rotation);

        checkBox_netTrainer_blurred = new QCheckBox(groupBox_netTrainer_inputBlocks);
        checkBox_netTrainer_blurred->setObjectName(QStringLiteral("checkBox_netTrainer_blurred"));
        checkBox_netTrainer_blurred->setChecked(true);

        verticalLayout_20->addWidget(checkBox_netTrainer_blurred);

        checkBox_netTrainer_irisBlurred = new QCheckBox(groupBox_netTrainer_inputBlocks);
        checkBox_netTrainer_irisBlurred->setObjectName(QStringLiteral("checkBox_netTrainer_irisBlurred"));
        checkBox_netTrainer_irisBlurred->setChecked(true);

        verticalLayout_20->addWidget(checkBox_netTrainer_irisBlurred);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_7);


        horizontalLayout_48->addWidget(groupBox_netTrainer_inputBlocks);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        groupBox_netTrainer_trainingSettings = new QGroupBox(groupBox_netTrainer_settings);
        groupBox_netTrainer_trainingSettings->setObjectName(QStringLiteral("groupBox_netTrainer_trainingSettings"));
        groupBox_netTrainer_trainingSettings->setEnabled(true);
        verticalLayout_21 = new QVBoxLayout(groupBox_netTrainer_trainingSettings);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        spinBox_netTrainer_testSet = new QSpinBox(groupBox_netTrainer_trainingSettings);
        spinBox_netTrainer_testSet->setObjectName(QStringLiteral("spinBox_netTrainer_testSet"));
        spinBox_netTrainer_testSet->setMinimumSize(QSize(50, 0));
        spinBox_netTrainer_testSet->setMaximumSize(QSize(50, 16777215));
        spinBox_netTrainer_testSet->setMinimum(1);
        spinBox_netTrainer_testSet->setMaximum(100);
        spinBox_netTrainer_testSet->setSingleStep(1);
        spinBox_netTrainer_testSet->setValue(20);

        gridLayout_2->addWidget(spinBox_netTrainer_testSet, 1, 1, 1, 1);

        spinBox_netTrainer_trainSet = new QSpinBox(groupBox_netTrainer_trainingSettings);
        spinBox_netTrainer_trainSet->setObjectName(QStringLiteral("spinBox_netTrainer_trainSet"));
        spinBox_netTrainer_trainSet->setMinimumSize(QSize(50, 0));
        spinBox_netTrainer_trainSet->setMaximumSize(QSize(50, 16777215));
        spinBox_netTrainer_trainSet->setMinimum(1);
        spinBox_netTrainer_trainSet->setMaximum(100);
        spinBox_netTrainer_trainSet->setSingleStep(1);
        spinBox_netTrainer_trainSet->setValue(100);

        gridLayout_2->addWidget(spinBox_netTrainer_trainSet, 0, 1, 1, 1);

        label_netTrainer_testSet = new QLabel(groupBox_netTrainer_trainingSettings);
        label_netTrainer_testSet->setObjectName(QStringLiteral("label_netTrainer_testSet"));

        gridLayout_2->addWidget(label_netTrainer_testSet, 1, 0, 1, 1);

        label_netTrainer_trainSet = new QLabel(groupBox_netTrainer_trainingSettings);
        label_netTrainer_trainSet->setObjectName(QStringLiteral("label_netTrainer_trainSet"));

        gridLayout_2->addWidget(label_netTrainer_trainSet, 0, 0, 1, 1);


        verticalLayout_21->addLayout(gridLayout_2);


        verticalLayout_23->addWidget(groupBox_netTrainer_trainingSettings);

        groupBox_netTrainer_mode = new QGroupBox(groupBox_netTrainer_settings);
        groupBox_netTrainer_mode->setObjectName(QStringLiteral("groupBox_netTrainer_mode"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_netTrainer_mode);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        radioButton_netTrainer_cpu = new QRadioButton(groupBox_netTrainer_mode);
        radioButton_netTrainer_cpu->setObjectName(QStringLiteral("radioButton_netTrainer_cpu"));

        horizontalLayout_8->addWidget(radioButton_netTrainer_cpu);

        radioButton_netTrainer_gpu = new QRadioButton(groupBox_netTrainer_mode);
        radioButton_netTrainer_gpu->setObjectName(QStringLiteral("radioButton_netTrainer_gpu"));
        radioButton_netTrainer_gpu->setChecked(true);

        horizontalLayout_8->addWidget(radioButton_netTrainer_gpu);


        verticalLayout_23->addWidget(groupBox_netTrainer_mode);


        horizontalLayout_48->addLayout(verticalLayout_23);


        verticalLayout_64->addLayout(horizontalLayout_48);

        groupBox_netTrainer_output = new QGroupBox(groupBox_netTrainer_settings);
        groupBox_netTrainer_output->setObjectName(QStringLiteral("groupBox_netTrainer_output"));
        horizontalLayout_13 = new QHBoxLayout(groupBox_netTrainer_output);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_netTrainer_outputFolder = new QLabel(groupBox_netTrainer_output);
        label_netTrainer_outputFolder->setObjectName(QStringLiteral("label_netTrainer_outputFolder"));

        horizontalLayout_13->addWidget(label_netTrainer_outputFolder);

        lineEdit_netTrainer_outputFolder = new QLineEdit(groupBox_netTrainer_output);
        lineEdit_netTrainer_outputFolder->setObjectName(QStringLiteral("lineEdit_netTrainer_outputFolder"));
        lineEdit_netTrainer_outputFolder->setReadOnly(true);

        horizontalLayout_13->addWidget(lineEdit_netTrainer_outputFolder);

        pushButton_netTrainer_outputFolder = new QPushButton(groupBox_netTrainer_output);
        pushButton_netTrainer_outputFolder->setObjectName(QStringLiteral("pushButton_netTrainer_outputFolder"));

        horizontalLayout_13->addWidget(pushButton_netTrainer_outputFolder);


        verticalLayout_64->addWidget(groupBox_netTrainer_output);


        horizontalLayout_50->addLayout(verticalLayout_64);

        groupBox_netTrainer_solverParams = new QGroupBox(groupBox_netTrainer_settings);
        groupBox_netTrainer_solverParams->setObjectName(QStringLiteral("groupBox_netTrainer_solverParams"));
        groupBox_netTrainer_solverParams->setEnabled(true);
        groupBox_netTrainer_solverParams->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_22 = new QVBoxLayout(groupBox_netTrainer_solverParams);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_netTrainer_model = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_model->setObjectName(QStringLiteral("label_netTrainer_model"));
        label_netTrainer_model->setEnabled(true);

        horizontalLayout_7->addWidget(label_netTrainer_model);

        lineEdit_netTrainer_model = new QLineEdit(groupBox_netTrainer_solverParams);
        lineEdit_netTrainer_model->setObjectName(QStringLiteral("lineEdit_netTrainer_model"));
        lineEdit_netTrainer_model->setEnabled(true);

        horizontalLayout_7->addWidget(lineEdit_netTrainer_model);

        pushButton_netTrainer_model = new QPushButton(groupBox_netTrainer_solverParams);
        pushButton_netTrainer_model->setObjectName(QStringLiteral("pushButton_netTrainer_model"));
        pushButton_netTrainer_model->setEnabled(true);
        pushButton_netTrainer_model->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(pushButton_netTrainer_model);


        verticalLayout_22->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_netTrainer_testIterations = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_testIterations->setObjectName(QStringLiteral("label_netTrainer_testIterations"));

        gridLayout_3->addWidget(label_netTrainer_testIterations, 0, 0, 1, 1);

        spinBox_netTrainer_testIterations = new QSpinBox(groupBox_netTrainer_solverParams);
        spinBox_netTrainer_testIterations->setObjectName(QStringLiteral("spinBox_netTrainer_testIterations"));
        spinBox_netTrainer_testIterations->setMaximumSize(QSize(80, 16777215));
        spinBox_netTrainer_testIterations->setMaximum(500);
        spinBox_netTrainer_testIterations->setValue(100);

        gridLayout_3->addWidget(spinBox_netTrainer_testIterations, 0, 1, 1, 1);

        label_netTrainer_testInterval = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_testInterval->setObjectName(QStringLiteral("label_netTrainer_testInterval"));

        gridLayout_3->addWidget(label_netTrainer_testInterval, 1, 0, 1, 1);

        spinBox_netTrainer_testInterval = new QSpinBox(groupBox_netTrainer_solverParams);
        spinBox_netTrainer_testInterval->setObjectName(QStringLiteral("spinBox_netTrainer_testInterval"));
        spinBox_netTrainer_testInterval->setMaximumSize(QSize(80, 16777215));
        spinBox_netTrainer_testInterval->setMaximum(2000);
        spinBox_netTrainer_testInterval->setValue(500);

        gridLayout_3->addWidget(spinBox_netTrainer_testInterval, 1, 1, 1, 1);

        label_netTrainer_maxIterations = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_maxIterations->setObjectName(QStringLiteral("label_netTrainer_maxIterations"));

        gridLayout_3->addWidget(label_netTrainer_maxIterations, 2, 0, 1, 1);

        spinBox_netTrainer_maxIterations = new QSpinBox(groupBox_netTrainer_solverParams);
        spinBox_netTrainer_maxIterations->setObjectName(QStringLiteral("spinBox_netTrainer_maxIterations"));
        spinBox_netTrainer_maxIterations->setMaximumSize(QSize(80, 16777215));
        spinBox_netTrainer_maxIterations->setMaximum(100000);
        spinBox_netTrainer_maxIterations->setSingleStep(1000);
        spinBox_netTrainer_maxIterations->setValue(25000);

        gridLayout_3->addWidget(spinBox_netTrainer_maxIterations, 2, 1, 1, 1);

        label_netTrainer_snapshotInterval = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_snapshotInterval->setObjectName(QStringLiteral("label_netTrainer_snapshotInterval"));
        label_netTrainer_snapshotInterval->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(label_netTrainer_snapshotInterval, 3, 0, 1, 1);

        spinBox_netTrainer_snapshotInterval = new QSpinBox(groupBox_netTrainer_solverParams);
        spinBox_netTrainer_snapshotInterval->setObjectName(QStringLiteral("spinBox_netTrainer_snapshotInterval"));
        spinBox_netTrainer_snapshotInterval->setMaximumSize(QSize(80, 16777215));
        spinBox_netTrainer_snapshotInterval->setMaximum(5000);
        spinBox_netTrainer_snapshotInterval->setSingleStep(100);
        spinBox_netTrainer_snapshotInterval->setValue(1000);

        gridLayout_3->addWidget(spinBox_netTrainer_snapshotInterval, 3, 1, 1, 1);

        label_netTrainer_snapshotPrefix = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_snapshotPrefix->setObjectName(QStringLiteral("label_netTrainer_snapshotPrefix"));

        gridLayout_3->addWidget(label_netTrainer_snapshotPrefix, 4, 0, 1, 1);

        lineEdit_netTrainer_snapshotPrefix = new QLineEdit(groupBox_netTrainer_solverParams);
        lineEdit_netTrainer_snapshotPrefix->setObjectName(QStringLiteral("lineEdit_netTrainer_snapshotPrefix"));
        lineEdit_netTrainer_snapshotPrefix->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(lineEdit_netTrainer_snapshotPrefix, 4, 1, 1, 1);


        horizontalLayout_9->addLayout(gridLayout_3);

        horizontalSpacer_4 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_netTrainer_baseLearningRate = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_baseLearningRate->setObjectName(QStringLiteral("label_netTrainer_baseLearningRate"));

        gridLayout_5->addWidget(label_netTrainer_baseLearningRate, 0, 0, 1, 1);

        doubleSpinBox_netTrainer_baseLearningRate = new QDoubleSpinBox(groupBox_netTrainer_solverParams);
        doubleSpinBox_netTrainer_baseLearningRate->setObjectName(QStringLiteral("doubleSpinBox_netTrainer_baseLearningRate"));
        doubleSpinBox_netTrainer_baseLearningRate->setMaximumSize(QSize(80, 16777215));
        doubleSpinBox_netTrainer_baseLearningRate->setMaximum(10);
        doubleSpinBox_netTrainer_baseLearningRate->setSingleStep(0.01);
        doubleSpinBox_netTrainer_baseLearningRate->setValue(0.01);

        gridLayout_5->addWidget(doubleSpinBox_netTrainer_baseLearningRate, 0, 1, 1, 1);

        label_netTrainer_momentum = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_momentum->setObjectName(QStringLiteral("label_netTrainer_momentum"));

        gridLayout_5->addWidget(label_netTrainer_momentum, 1, 0, 1, 1);

        doubleSpinBox_netTrainer_momentum = new QDoubleSpinBox(groupBox_netTrainer_solverParams);
        doubleSpinBox_netTrainer_momentum->setObjectName(QStringLiteral("doubleSpinBox_netTrainer_momentum"));
        doubleSpinBox_netTrainer_momentum->setMaximumSize(QSize(80, 16777215));
        doubleSpinBox_netTrainer_momentum->setMaximum(20);
        doubleSpinBox_netTrainer_momentum->setSingleStep(0.1);
        doubleSpinBox_netTrainer_momentum->setValue(0.9);

        gridLayout_5->addWidget(doubleSpinBox_netTrainer_momentum, 1, 1, 1, 1);

        label_netTrainer_weightDecay = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_weightDecay->setObjectName(QStringLiteral("label_netTrainer_weightDecay"));

        gridLayout_5->addWidget(label_netTrainer_weightDecay, 2, 0, 1, 1);

        doubleSpinBox_netTrainer_weightDecay = new QDoubleSpinBox(groupBox_netTrainer_solverParams);
        doubleSpinBox_netTrainer_weightDecay->setObjectName(QStringLiteral("doubleSpinBox_netTrainer_weightDecay"));
        doubleSpinBox_netTrainer_weightDecay->setMaximumSize(QSize(80, 16777215));
        doubleSpinBox_netTrainer_weightDecay->setDecimals(4);
        doubleSpinBox_netTrainer_weightDecay->setMaximum(1);
        doubleSpinBox_netTrainer_weightDecay->setSingleStep(0.0001);
        doubleSpinBox_netTrainer_weightDecay->setValue(0.0005);

        gridLayout_5->addWidget(doubleSpinBox_netTrainer_weightDecay, 2, 1, 1, 1);

        label_netTrainer_gamma = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_gamma->setObjectName(QStringLiteral("label_netTrainer_gamma"));

        gridLayout_5->addWidget(label_netTrainer_gamma, 3, 0, 1, 1);

        doubleSpinBox_netTrainer_gamma = new QDoubleSpinBox(groupBox_netTrainer_solverParams);
        doubleSpinBox_netTrainer_gamma->setObjectName(QStringLiteral("doubleSpinBox_netTrainer_gamma"));
        doubleSpinBox_netTrainer_gamma->setMaximumSize(QSize(80, 16777215));
        doubleSpinBox_netTrainer_gamma->setDecimals(4);
        doubleSpinBox_netTrainer_gamma->setMaximum(1);
        doubleSpinBox_netTrainer_gamma->setSingleStep(0.0001);
        doubleSpinBox_netTrainer_gamma->setValue(0.0001);

        gridLayout_5->addWidget(doubleSpinBox_netTrainer_gamma, 3, 1, 1, 1);

        label_netTrainer_power = new QLabel(groupBox_netTrainer_solverParams);
        label_netTrainer_power->setObjectName(QStringLiteral("label_netTrainer_power"));

        gridLayout_5->addWidget(label_netTrainer_power, 4, 0, 1, 1);

        doubleSpinBox_netTrainer_power = new QDoubleSpinBox(groupBox_netTrainer_solverParams);
        doubleSpinBox_netTrainer_power->setObjectName(QStringLiteral("doubleSpinBox_netTrainer_power"));
        doubleSpinBox_netTrainer_power->setMaximumSize(QSize(80, 16777215));
        doubleSpinBox_netTrainer_power->setMaximum(20);
        doubleSpinBox_netTrainer_power->setSingleStep(0.1);
        doubleSpinBox_netTrainer_power->setValue(0.75);

        gridLayout_5->addWidget(doubleSpinBox_netTrainer_power, 4, 1, 1, 1);


        horizontalLayout_9->addLayout(gridLayout_5);


        verticalLayout_22->addLayout(horizontalLayout_9);


        horizontalLayout_50->addWidget(groupBox_netTrainer_solverParams);


        verticalLayout_24->addWidget(groupBox_netTrainer_settings);

        groupBox_netTrainer_training = new QGroupBox(tab_trainer);
        groupBox_netTrainer_training->setObjectName(QStringLiteral("groupBox_netTrainer_training"));
        verticalLayout_25 = new QVBoxLayout(groupBox_netTrainer_training);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        textBrowser_netTrainer_log = new QTextBrowser(groupBox_netTrainer_training);
        textBrowser_netTrainer_log->setObjectName(QStringLiteral("textBrowser_netTrainer_log"));

        verticalLayout_25->addWidget(textBrowser_netTrainer_log);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_netTrainer_progress = new QLabel(groupBox_netTrainer_training);
        label_netTrainer_progress->setObjectName(QStringLiteral("label_netTrainer_progress"));

        horizontalLayout_12->addWidget(label_netTrainer_progress);

        progressBar_netTrainer_progress = new QProgressBar(groupBox_netTrainer_training);
        progressBar_netTrainer_progress->setObjectName(QStringLiteral("progressBar_netTrainer_progress"));
        progressBar_netTrainer_progress->setValue(0);
        progressBar_netTrainer_progress->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(progressBar_netTrainer_progress);

        pushButton_netTrainer_startTraining = new QPushButton(groupBox_netTrainer_training);
        pushButton_netTrainer_startTraining->setObjectName(QStringLiteral("pushButton_netTrainer_startTraining"));
        pushButton_netTrainer_startTraining->setMinimumSize(QSize(100, 0));
        pushButton_netTrainer_startTraining->setMaximumSize(QSize(100, 16777215));
        pushButton_netTrainer_startTraining->setAutoFillBackground(false);
        pushButton_netTrainer_startTraining->setStyleSheet(QLatin1String("background: rgb(54, 156, 221);\n"
"color: white;"));

        horizontalLayout_12->addWidget(pushButton_netTrainer_startTraining);


        verticalLayout_25->addLayout(horizontalLayout_12);


        verticalLayout_24->addWidget(groupBox_netTrainer_training);


        horizontalLayout_51->addLayout(verticalLayout_24);

        tabWidget_main->addTab(tab_trainer, QString());
        tab_checker = new QWidget();
        tab_checker->setObjectName(QStringLiteral("tab_checker"));
        horizontalLayout_53 = new QHBoxLayout(tab_checker);
        horizontalLayout_53->setSpacing(6);
        horizontalLayout_53->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_53->setObjectName(QStringLiteral("horizontalLayout_53"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        groupBox_inputModel = new QGroupBox(tab_checker);
        groupBox_inputModel->setObjectName(QStringLiteral("groupBox_inputModel"));
        groupBox_inputModel->setMaximumSize(QSize(16777215, 120));
        verticalLayout_14 = new QVBoxLayout(groupBox_inputModel);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        pushButton_inputModel = new QPushButton(groupBox_inputModel);
        pushButton_inputModel->setObjectName(QStringLiteral("pushButton_inputModel"));
        sizePolicy.setHeightForWidth(pushButton_inputModel->sizePolicy().hasHeightForWidth());
        pushButton_inputModel->setSizePolicy(sizePolicy);
        pushButton_inputModel->setMaximumSize(QSize(100, 16777215));

        verticalLayout_14->addWidget(pushButton_inputModel);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_2);

        label_selectedModel = new QLabel(groupBox_inputModel);
        label_selectedModel->setObjectName(QStringLiteral("label_selectedModel"));

        verticalLayout_14->addWidget(label_selectedModel);

        label_selectedModelName = new QLabel(groupBox_inputModel);
        label_selectedModelName->setObjectName(QStringLiteral("label_selectedModelName"));

        verticalLayout_14->addWidget(label_selectedModelName);


        verticalLayout_15->addWidget(groupBox_inputModel);

        groupBox_inputImages_2 = new QGroupBox(tab_checker);
        groupBox_inputImages_2->setObjectName(QStringLiteral("groupBox_inputImages_2"));
        groupBox_inputImages_2->setMaximumSize(QSize(220, 16777215));
        verticalLayout_12 = new QVBoxLayout(groupBox_inputImages_2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        pushButton_inputDirectory_2 = new QPushButton(groupBox_inputImages_2);
        pushButton_inputDirectory_2->setObjectName(QStringLiteral("pushButton_inputDirectory_2"));
        sizePolicy.setHeightForWidth(pushButton_inputDirectory_2->sizePolicy().hasHeightForWidth());
        pushButton_inputDirectory_2->setSizePolicy(sizePolicy);
        pushButton_inputDirectory_2->setMaximumSize(QSize(100, 16777215));

        verticalLayout_12->addWidget(pushButton_inputDirectory_2);

        listWidget_inputImages_2 = new QListWidget(groupBox_inputImages_2);
        listWidget_inputImages_2->setObjectName(QStringLiteral("listWidget_inputImages_2"));
        sizePolicy1.setHeightForWidth(listWidget_inputImages_2->sizePolicy().hasHeightForWidth());
        listWidget_inputImages_2->setSizePolicy(sizePolicy1);
        listWidget_inputImages_2->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_12->addWidget(listWidget_inputImages_2);


        verticalLayout_15->addWidget(groupBox_inputImages_2);


        horizontalLayout_53->addLayout(verticalLayout_15);

        groupBox_fingerprintImage_2 = new QGroupBox(tab_checker);
        groupBox_fingerprintImage_2->setObjectName(QStringLiteral("groupBox_fingerprintImage_2"));
        verticalLayout_11 = new QVBoxLayout(groupBox_fingerprintImage_2);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        graphicsView_fingerprintChecker = new QGraphicsView(groupBox_fingerprintImage_2);
        graphicsView_fingerprintChecker->setObjectName(QStringLiteral("graphicsView_fingerprintChecker"));
        graphicsView_fingerprintChecker->setMinimumSize(QSize(500, 500));
        graphicsView_fingerprintChecker->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_11->addWidget(graphicsView_fingerprintChecker);


        horizontalLayout_53->addWidget(groupBox_fingerprintImage_2);

        verticalLayout_66 = new QVBoxLayout();
        verticalLayout_66->setSpacing(6);
        verticalLayout_66->setObjectName(QStringLiteral("verticalLayout_66"));
        groupBox_minChecker_checkSettings = new QGroupBox(tab_checker);
        groupBox_minChecker_checkSettings->setObjectName(QStringLiteral("groupBox_minChecker_checkSettings"));
        groupBox_minChecker_checkSettings->setMinimumSize(QSize(300, 0));
        groupBox_minChecker_checkSettings->setMaximumSize(QSize(300, 16777215));
        horizontalLayout_11 = new QHBoxLayout(groupBox_minChecker_checkSettings);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        groupBox_minChecker_mode = new QGroupBox(groupBox_minChecker_checkSettings);
        groupBox_minChecker_mode->setObjectName(QStringLiteral("groupBox_minChecker_mode"));
        groupBox_minChecker_mode->setMaximumSize(QSize(90, 16777215));
        verticalLayout_16 = new QVBoxLayout(groupBox_minChecker_mode);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        radioButton_minChecker_cpuMode = new QRadioButton(groupBox_minChecker_mode);
        radioButton_minChecker_cpuMode->setObjectName(QStringLiteral("radioButton_minChecker_cpuMode"));

        verticalLayout_16->addWidget(radioButton_minChecker_cpuMode);

        radioButton_minChecker_gpuMode = new QRadioButton(groupBox_minChecker_mode);
        radioButton_minChecker_gpuMode->setObjectName(QStringLiteral("radioButton_minChecker_gpuMode"));
        radioButton_minChecker_gpuMode->setChecked(true);

        verticalLayout_16->addWidget(radioButton_minChecker_gpuMode);


        horizontalLayout_11->addWidget(groupBox_minChecker_mode);

        groupBox_minChecker_extactionSettings = new QGroupBox(groupBox_minChecker_checkSettings);
        groupBox_minChecker_extactionSettings->setObjectName(QStringLiteral("groupBox_minChecker_extactionSettings"));
        verticalLayout_26 = new QVBoxLayout(groupBox_minChecker_extactionSettings);
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_checkBlockSize = new QLabel(groupBox_minChecker_extactionSettings);
        label_checkBlockSize->setObjectName(QStringLiteral("label_checkBlockSize"));
        label_checkBlockSize->setMinimumSize(QSize(0, 0));
        label_checkBlockSize->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(label_checkBlockSize);

        spinBox_checkBlockSize = new QSpinBox(groupBox_minChecker_extactionSettings);
        spinBox_checkBlockSize->setObjectName(QStringLiteral("spinBox_checkBlockSize"));
        spinBox_checkBlockSize->setMaximumSize(QSize(45, 16777215));
        spinBox_checkBlockSize->setMinimum(5);
        spinBox_checkBlockSize->setMaximum(40);
        spinBox_checkBlockSize->setValue(19);

        horizontalLayout_3->addWidget(spinBox_checkBlockSize);


        verticalLayout_26->addLayout(horizontalLayout_3);

        checkBox_variableBlockSize = new QCheckBox(groupBox_minChecker_extactionSettings);
        checkBox_variableBlockSize->setObjectName(QStringLiteral("checkBox_variableBlockSize"));

        verticalLayout_26->addWidget(checkBox_variableBlockSize);


        horizontalLayout_11->addWidget(groupBox_minChecker_extactionSettings);


        verticalLayout_66->addWidget(groupBox_minChecker_checkSettings);

        groupBox__minChecker_checkMode = new QGroupBox(tab_checker);
        groupBox__minChecker_checkMode->setObjectName(QStringLiteral("groupBox__minChecker_checkMode"));
        groupBox__minChecker_checkMode->setMaximumSize(QSize(300, 16777215));
        verticalLayout_65 = new QVBoxLayout(groupBox__minChecker_checkMode);
        verticalLayout_65->setSpacing(6);
        verticalLayout_65->setContentsMargins(11, 11, 11, 11);
        verticalLayout_65->setObjectName(QStringLiteral("verticalLayout_65"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radioButton_standard = new QRadioButton(groupBox__minChecker_checkMode);
        radioButton_standard->setObjectName(QStringLiteral("radioButton_standard"));
        radioButton_standard->setChecked(true);

        horizontalLayout_10->addWidget(radioButton_standard);

        horizontalSpacer_6 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        label_threshold = new QLabel(groupBox__minChecker_checkMode);
        label_threshold->setObjectName(QStringLiteral("label_threshold"));

        horizontalLayout_10->addWidget(label_threshold);

        spinBox_threshold = new QSpinBox(groupBox__minChecker_checkMode);
        spinBox_threshold->setObjectName(QStringLiteral("spinBox_threshold"));
        spinBox_threshold->setMinimumSize(QSize(45, 0));
        spinBox_threshold->setMaximumSize(QSize(45, 16777215));
        spinBox_threshold->setMaximum(100);
        spinBox_threshold->setValue(90);

        horizontalLayout_10->addWidget(spinBox_threshold);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);


        verticalLayout_65->addLayout(horizontalLayout_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton_heatmap = new QRadioButton(groupBox__minChecker_checkMode);
        radioButton_heatmap->setObjectName(QStringLiteral("radioButton_heatmap"));

        horizontalLayout_2->addWidget(radioButton_heatmap);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_overlay = new QLabel(groupBox__minChecker_checkMode);
        label_overlay->setObjectName(QStringLiteral("label_overlay"));
        label_overlay->setEnabled(true);

        horizontalLayout_2->addWidget(label_overlay);

        horizontalSlider_overlay = new QSlider(groupBox__minChecker_checkMode);
        horizontalSlider_overlay->setObjectName(QStringLiteral("horizontalSlider_overlay"));
        horizontalSlider_overlay->setEnabled(true);
        horizontalSlider_overlay->setMaximum(100);
        horizontalSlider_overlay->setValue(100);
        horizontalSlider_overlay->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_overlay);


        verticalLayout_65->addLayout(horizontalLayout_2);


        verticalLayout_66->addWidget(groupBox__minChecker_checkMode);

        groupBox_heatmapCreationProgress = new QGroupBox(tab_checker);
        groupBox_heatmapCreationProgress->setObjectName(QStringLiteral("groupBox_heatmapCreationProgress"));
        groupBox_heatmapCreationProgress->setEnabled(true);
        groupBox_heatmapCreationProgress->setMaximumSize(QSize(300, 16777215));
        verticalLayout_17 = new QVBoxLayout(groupBox_heatmapCreationProgress);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        progressBar_heatmap = new QProgressBar(groupBox_heatmapCreationProgress);
        progressBar_heatmap->setObjectName(QStringLiteral("progressBar_heatmap"));
        progressBar_heatmap->setEnabled(true);
        progressBar_heatmap->setMaximumSize(QSize(300, 16777215));
        progressBar_heatmap->setValue(0);
        progressBar_heatmap->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(progressBar_heatmap);


        verticalLayout_66->addWidget(groupBox_heatmapCreationProgress);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_66->addItem(verticalSpacer_3);

        groupBox_foundedMinutia = new QGroupBox(tab_checker);
        groupBox_foundedMinutia->setObjectName(QStringLiteral("groupBox_foundedMinutia"));
        groupBox_foundedMinutia->setMinimumSize(QSize(300, 0));
        groupBox_foundedMinutia->setMaximumSize(QSize(300, 170));
        verticalLayout_13 = new QVBoxLayout(groupBox_foundedMinutia);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        tableWidget_foundedMinutia = new QTableWidget(groupBox_foundedMinutia);
        tableWidget_foundedMinutia->setObjectName(QStringLiteral("tableWidget_foundedMinutia"));
        tableWidget_foundedMinutia->setMaximumSize(QSize(280, 150));
        tableWidget_foundedMinutia->setFrameShape(QFrame::NoFrame);

        verticalLayout_13->addWidget(tableWidget_foundedMinutia);


        verticalLayout_66->addWidget(groupBox_foundedMinutia);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_66->addItem(verticalSpacer);


        horizontalLayout_53->addLayout(verticalLayout_66);

        tabWidget_main->addTab(tab_checker, QString());
        tab_extractionTester = new QWidget();
        tab_extractionTester->setObjectName(QStringLiteral("tab_extractionTester"));
        horizontalLayout_42 = new QHBoxLayout(tab_extractionTester);
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_exTester_inputImages = new QGroupBox(tab_extractionTester);
        groupBox_exTester_inputImages->setObjectName(QStringLiteral("groupBox_exTester_inputImages"));
        groupBox_exTester_inputImages->setMaximumSize(QSize(270, 16777215));
        verticalLayout_52 = new QVBoxLayout(groupBox_exTester_inputImages);
        verticalLayout_52->setSpacing(6);
        verticalLayout_52->setContentsMargins(11, 11, 11, 11);
        verticalLayout_52->setObjectName(QStringLiteral("verticalLayout_52"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        pushButton_exTester_inputDir = new QPushButton(groupBox_exTester_inputImages);
        pushButton_exTester_inputDir->setObjectName(QStringLiteral("pushButton_exTester_inputDir"));
        pushButton_exTester_inputDir->setMinimumSize(QSize(70, 0));
        pushButton_exTester_inputDir->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_29->addWidget(pushButton_exTester_inputDir);

        label_exTester_inputImages = new QLabel(groupBox_exTester_inputImages);
        label_exTester_inputImages->setObjectName(QStringLiteral("label_exTester_inputImages"));
        label_exTester_inputImages->setWordWrap(true);

        horizontalLayout_29->addWidget(label_exTester_inputImages);


        verticalLayout_52->addLayout(horizontalLayout_29);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        listWidget_exTester_inputImages = new QListWidget(groupBox_exTester_inputImages);
        listWidget_exTester_inputImages->setObjectName(QStringLiteral("listWidget_exTester_inputImages"));

        horizontalLayout_38->addWidget(listWidget_exTester_inputImages);

        verticalLayout_41 = new QVBoxLayout();
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        label_exTester_overlay = new QLabel(groupBox_exTester_inputImages);
        label_exTester_overlay->setObjectName(QStringLiteral("label_exTester_overlay"));
        label_exTester_overlay->setMinimumSize(QSize(45, 0));
        label_exTester_overlay->setMaximumSize(QSize(50, 16777215));
        label_exTester_overlay->setAlignment(Qt::AlignCenter);

        verticalLayout_41->addWidget(label_exTester_overlay);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        horizontalSpacer_33 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_33);

        verticalSlider_exTester_overlay = new QSlider(groupBox_exTester_inputImages);
        verticalSlider_exTester_overlay->setObjectName(QStringLiteral("verticalSlider_exTester_overlay"));
        verticalSlider_exTester_overlay->setMinimumSize(QSize(0, 0));
        verticalSlider_exTester_overlay->setMaximumSize(QSize(16777215, 16777215));
        verticalSlider_exTester_overlay->setMaximum(100);
        verticalSlider_exTester_overlay->setOrientation(Qt::Vertical);

        horizontalLayout_37->addWidget(verticalSlider_exTester_overlay);

        horizontalSpacer_34 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_34);


        verticalLayout_41->addLayout(horizontalLayout_37);


        horizontalLayout_38->addLayout(verticalLayout_41);


        verticalLayout_52->addLayout(horizontalLayout_38);


        verticalLayout_7->addWidget(groupBox_exTester_inputImages);

        tabWidget_exTester_settings = new QTabWidget(tab_extractionTester);
        tabWidget_exTester_settings->setObjectName(QStringLiteral("tabWidget_exTester_settings"));
        tabWidget_exTester_settings->setMaximumSize(QSize(270, 16777215));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_44 = new QVBoxLayout(tab_6);
        verticalLayout_44->setSpacing(6);
        verticalLayout_44->setContentsMargins(11, 11, 11, 11);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        groupBox_exTester_ParameterGeneral = new QGroupBox(tab_6);
        groupBox_exTester_ParameterGeneral->setObjectName(QStringLiteral("groupBox_exTester_ParameterGeneral"));
        groupBox_exTester_ParameterGeneral->setMinimumSize(QSize(0, 0));
        groupBox_exTester_ParameterGeneral->setMaximumSize(QSize(16777215, 80));
        verticalLayout_55 = new QVBoxLayout(groupBox_exTester_ParameterGeneral);
        verticalLayout_55->setSpacing(6);
        verticalLayout_55->setContentsMargins(11, 11, 11, 11);
        verticalLayout_55->setObjectName(QStringLiteral("verticalLayout_55"));
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        label_exTester_BlockSize = new QLabel(groupBox_exTester_ParameterGeneral);
        label_exTester_BlockSize->setObjectName(QStringLiteral("label_exTester_BlockSize"));
        label_exTester_BlockSize->setMinimumSize(QSize(145, 0));
        label_exTester_BlockSize->setMaximumSize(QSize(145, 16777215));
        label_exTester_BlockSize->setWordWrap(true);

        horizontalLayout_35->addWidget(label_exTester_BlockSize);

        horizontalSpacer_32 = new QSpacerItem(19, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_32);

        spinBox_exTester_BlockSize = new QSpinBox(groupBox_exTester_ParameterGeneral);
        spinBox_exTester_BlockSize->setObjectName(QStringLiteral("spinBox_exTester_BlockSize"));
        spinBox_exTester_BlockSize->setMinimumSize(QSize(45, 0));
        spinBox_exTester_BlockSize->setMaximumSize(QSize(45, 16777215));
        spinBox_exTester_BlockSize->setSingleStep(2);
        spinBox_exTester_BlockSize->setValue(13);

        horizontalLayout_35->addWidget(spinBox_exTester_BlockSize);


        verticalLayout_55->addLayout(horizontalLayout_35);


        verticalLayout_44->addWidget(groupBox_exTester_ParameterGeneral);

        groupBox_exTester_ParameterOMap = new QGroupBox(tab_6);
        groupBox_exTester_ParameterOMap->setObjectName(QStringLiteral("groupBox_exTester_ParameterOMap"));
        groupBox_exTester_ParameterOMap->setMinimumSize(QSize(0, 0));
        verticalLayout_42 = new QVBoxLayout(groupBox_exTester_ParameterOMap);
        verticalLayout_42->setSpacing(6);
        verticalLayout_42->setContentsMargins(11, 11, 11, 11);
        verticalLayout_42->setObjectName(QStringLiteral("verticalLayout_42"));
        label_exTesterGaussianBlurBasic = new QLabel(groupBox_exTester_ParameterOMap);
        label_exTesterGaussianBlurBasic->setObjectName(QStringLiteral("label_exTesterGaussianBlurBasic"));

        verticalLayout_42->addWidget(label_exTesterGaussianBlurBasic);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        label_exTester_BasicOMapBlockSize = new QLabel(groupBox_exTester_ParameterOMap);
        label_exTester_BasicOMapBlockSize->setObjectName(QStringLiteral("label_exTester_BasicOMapBlockSize"));
        label_exTester_BasicOMapBlockSize->setWordWrap(true);

        horizontalLayout_32->addWidget(label_exTester_BasicOMapBlockSize);

        spinBox_exTester_BasicOMapBlockSize = new QSpinBox(groupBox_exTester_ParameterOMap);
        spinBox_exTester_BasicOMapBlockSize->setObjectName(QStringLiteral("spinBox_exTester_BasicOMapBlockSize"));
        spinBox_exTester_BasicOMapBlockSize->setMinimumSize(QSize(45, 0));
        spinBox_exTester_BasicOMapBlockSize->setMaximumSize(QSize(45, 16777215));
        spinBox_exTester_BasicOMapBlockSize->setMaximum(200);
        spinBox_exTester_BasicOMapBlockSize->setValue(1);

        horizontalLayout_32->addWidget(spinBox_exTester_BasicOMapBlockSize);

        horizontalSpacer_27 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_27);

        label_exTester_BasicOMapSigma = new QLabel(groupBox_exTester_ParameterOMap);
        label_exTester_BasicOMapSigma->setObjectName(QStringLiteral("label_exTester_BasicOMapSigma"));
        label_exTester_BasicOMapSigma->setWordWrap(true);

        horizontalLayout_32->addWidget(label_exTester_BasicOMapSigma);

        doubleSpinBox_exTester_BasicOMapSigma = new QDoubleSpinBox(groupBox_exTester_ParameterOMap);
        doubleSpinBox_exTester_BasicOMapSigma->setObjectName(QStringLiteral("doubleSpinBox_exTester_BasicOMapSigma"));
        doubleSpinBox_exTester_BasicOMapSigma->setMinimumSize(QSize(55, 0));
        doubleSpinBox_exTester_BasicOMapSigma->setMaximumSize(QSize(55, 16777215));
        doubleSpinBox_exTester_BasicOMapSigma->setDecimals(1);
        doubleSpinBox_exTester_BasicOMapSigma->setValue(1);

        horizontalLayout_32->addWidget(doubleSpinBox_exTester_BasicOMapSigma);


        verticalLayout_42->addLayout(horizontalLayout_32);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_42->addItem(verticalSpacer_9);

        label_exTester_GaussianBlurAdvanced = new QLabel(groupBox_exTester_ParameterOMap);
        label_exTester_GaussianBlurAdvanced->setObjectName(QStringLiteral("label_exTester_GaussianBlurAdvanced"));

        verticalLayout_42->addWidget(label_exTester_GaussianBlurAdvanced);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        label_exTester_AdvancedOMapBlockSize = new QLabel(groupBox_exTester_ParameterOMap);
        label_exTester_AdvancedOMapBlockSize->setObjectName(QStringLiteral("label_exTester_AdvancedOMapBlockSize"));
        label_exTester_AdvancedOMapBlockSize->setWordWrap(true);

        horizontalLayout_33->addWidget(label_exTester_AdvancedOMapBlockSize);

        spinBox_exTester_AdvancedOMapBlockSize = new QSpinBox(groupBox_exTester_ParameterOMap);
        spinBox_exTester_AdvancedOMapBlockSize->setObjectName(QStringLiteral("spinBox_exTester_AdvancedOMapBlockSize"));
        spinBox_exTester_AdvancedOMapBlockSize->setMinimumSize(QSize(45, 0));
        spinBox_exTester_AdvancedOMapBlockSize->setMaximumSize(QSize(45, 16777215));
        spinBox_exTester_AdvancedOMapBlockSize->setMaximum(200);
        spinBox_exTester_AdvancedOMapBlockSize->setValue(121);

        horizontalLayout_33->addWidget(spinBox_exTester_AdvancedOMapBlockSize);

        horizontalSpacer_30 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_30);

        label_exTester_AdvancedOMapSigma = new QLabel(groupBox_exTester_ParameterOMap);
        label_exTester_AdvancedOMapSigma->setObjectName(QStringLiteral("label_exTester_AdvancedOMapSigma"));
        label_exTester_AdvancedOMapSigma->setWordWrap(true);

        horizontalLayout_33->addWidget(label_exTester_AdvancedOMapSigma);

        doubleSpinBox_exTester_AdvancedOMapSigma = new QDoubleSpinBox(groupBox_exTester_ParameterOMap);
        doubleSpinBox_exTester_AdvancedOMapSigma->setObjectName(QStringLiteral("doubleSpinBox_exTester_AdvancedOMapSigma"));
        doubleSpinBox_exTester_AdvancedOMapSigma->setMinimumSize(QSize(55, 0));
        doubleSpinBox_exTester_AdvancedOMapSigma->setMaximumSize(QSize(55, 16777215));
        doubleSpinBox_exTester_AdvancedOMapSigma->setDecimals(1);
        doubleSpinBox_exTester_AdvancedOMapSigma->setValue(10);

        horizontalLayout_33->addWidget(doubleSpinBox_exTester_AdvancedOMapSigma);


        verticalLayout_42->addLayout(horizontalLayout_33);


        verticalLayout_44->addWidget(groupBox_exTester_ParameterOMap);

        groupBox_exTester_frequencyMap = new QGroupBox(tab_6);
        groupBox_exTester_frequencyMap->setObjectName(QStringLiteral("groupBox_exTester_frequencyMap"));
        groupBox_exTester_frequencyMap->setCheckable(true);
        groupBox_exTester_frequencyMap->setChecked(false);
        horizontalLayout_39 = new QHBoxLayout(groupBox_exTester_frequencyMap);
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        label_exTester_freqBlockSize = new QLabel(groupBox_exTester_frequencyMap);
        label_exTester_freqBlockSize->setObjectName(QStringLiteral("label_exTester_freqBlockSize"));
        label_exTester_freqBlockSize->setWordWrap(true);

        horizontalLayout_39->addWidget(label_exTester_freqBlockSize);

        spinBox_exTester_freqBlockSize = new QSpinBox(groupBox_exTester_frequencyMap);
        spinBox_exTester_freqBlockSize->setObjectName(QStringLiteral("spinBox_exTester_freqBlockSize"));
        spinBox_exTester_freqBlockSize->setMinimumSize(QSize(45, 0));
        spinBox_exTester_freqBlockSize->setMaximumSize(QSize(50, 16777215));
        spinBox_exTester_freqBlockSize->setMinimum(1);
        spinBox_exTester_freqBlockSize->setMaximum(50);
        spinBox_exTester_freqBlockSize->setValue(8);

        horizontalLayout_39->addWidget(spinBox_exTester_freqBlockSize);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_36);

        label_exTester_freqExBlockSize = new QLabel(groupBox_exTester_frequencyMap);
        label_exTester_freqExBlockSize->setObjectName(QStringLiteral("label_exTester_freqExBlockSize"));
        label_exTester_freqExBlockSize->setMinimumSize(QSize(50, 0));
        label_exTester_freqExBlockSize->setMaximumSize(QSize(60, 16777215));
        label_exTester_freqExBlockSize->setWordWrap(true);

        horizontalLayout_39->addWidget(label_exTester_freqExBlockSize);

        spinBox_exTester_freqExBlockSize = new QSpinBox(groupBox_exTester_frequencyMap);
        spinBox_exTester_freqExBlockSize->setObjectName(QStringLiteral("spinBox_exTester_freqExBlockSize"));
        spinBox_exTester_freqExBlockSize->setMinimumSize(QSize(45, 0));
        spinBox_exTester_freqExBlockSize->setMaximumSize(QSize(50, 16777215));
        spinBox_exTester_freqExBlockSize->setMinimum(1);
        spinBox_exTester_freqExBlockSize->setSingleStep(2);
        spinBox_exTester_freqExBlockSize->setValue(30);

        horizontalLayout_39->addWidget(spinBox_exTester_freqExBlockSize);


        verticalLayout_44->addWidget(groupBox_exTester_frequencyMap);

        groupBox_exTester_ParameterGabor = new QGroupBox(tab_6);
        groupBox_exTester_ParameterGabor->setObjectName(QStringLiteral("groupBox_exTester_ParameterGabor"));
        verticalLayout_43 = new QVBoxLayout(groupBox_exTester_ParameterGabor);
        verticalLayout_43->setSpacing(6);
        verticalLayout_43->setContentsMargins(11, 11, 11, 11);
        verticalLayout_43->setObjectName(QStringLiteral("verticalLayout_43"));
        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        label_exTester_GaborSigma = new QLabel(groupBox_exTester_ParameterGabor);
        label_exTester_GaborSigma->setObjectName(QStringLiteral("label_exTester_GaborSigma"));
        label_exTester_GaborSigma->setMinimumSize(QSize(36, 0));
        label_exTester_GaborSigma->setMaximumSize(QSize(36, 16777215));
        label_exTester_GaborSigma->setWordWrap(true);

        horizontalLayout_34->addWidget(label_exTester_GaborSigma);

        doubleSpinBox_exTester_GaborSigma = new QDoubleSpinBox(groupBox_exTester_ParameterGabor);
        doubleSpinBox_exTester_GaborSigma->setObjectName(QStringLiteral("doubleSpinBox_exTester_GaborSigma"));
        doubleSpinBox_exTester_GaborSigma->setMinimumSize(QSize(55, 0));
        doubleSpinBox_exTester_GaborSigma->setMaximumSize(QSize(55, 16777215));
        doubleSpinBox_exTester_GaborSigma->setDecimals(1);
        doubleSpinBox_exTester_GaborSigma->setValue(3);

        horizontalLayout_34->addWidget(doubleSpinBox_exTester_GaborSigma);

        horizontalSpacer_31 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_31);

        label_exTester_GaborLambda = new QLabel(groupBox_exTester_ParameterGabor);
        label_exTester_GaborLambda->setObjectName(QStringLiteral("label_exTester_GaborLambda"));
        label_exTester_GaborLambda->setWordWrap(true);

        horizontalLayout_34->addWidget(label_exTester_GaborLambda);

        doubleSpinBox_exTester_GaborLambda = new QDoubleSpinBox(groupBox_exTester_ParameterGabor);
        doubleSpinBox_exTester_GaborLambda->setObjectName(QStringLiteral("doubleSpinBox_exTester_GaborLambda"));
        doubleSpinBox_exTester_GaborLambda->setMinimumSize(QSize(55, 0));
        doubleSpinBox_exTester_GaborLambda->setMaximumSize(QSize(55, 16777215));
        doubleSpinBox_exTester_GaborLambda->setDecimals(1);
        doubleSpinBox_exTester_GaborLambda->setValue(9);

        horizontalLayout_34->addWidget(doubleSpinBox_exTester_GaborLambda);


        verticalLayout_43->addLayout(horizontalLayout_34);


        verticalLayout_44->addWidget(groupBox_exTester_ParameterGabor);

        tabWidget_exTester_settings->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        verticalLayout_59 = new QVBoxLayout(tab_7);
        verticalLayout_59->setSpacing(6);
        verticalLayout_59->setContentsMargins(11, 11, 11, 11);
        verticalLayout_59->setObjectName(QStringLiteral("verticalLayout_59"));
        groupBox_2 = new QGroupBox(tab_7);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_45 = new QHBoxLayout(groupBox_2);
        horizontalLayout_45->setSpacing(6);
        horizontalLayout_45->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_45->setObjectName(QStringLiteral("horizontalLayout_45"));
        label_exTester_exBlockSize = new QLabel(groupBox_2);
        label_exTester_exBlockSize->setObjectName(QStringLiteral("label_exTester_exBlockSize"));

        horizontalLayout_45->addWidget(label_exTester_exBlockSize);

        horizontalSpacer_39 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_45->addItem(horizontalSpacer_39);

        spinBox_exTester_exBlockSize = new QSpinBox(groupBox_2);
        spinBox_exTester_exBlockSize->setObjectName(QStringLiteral("spinBox_exTester_exBlockSize"));
        spinBox_exTester_exBlockSize->setMinimumSize(QSize(55, 0));
        spinBox_exTester_exBlockSize->setValue(19);

        horizontalLayout_45->addWidget(spinBox_exTester_exBlockSize);


        verticalLayout_59->addWidget(groupBox_2);

        groupBox_exTester_exResults = new QGroupBox(tab_7);
        groupBox_exTester_exResults->setObjectName(QStringLiteral("groupBox_exTester_exResults"));
        verticalLayout_60 = new QVBoxLayout(groupBox_exTester_exResults);
        verticalLayout_60->setSpacing(6);
        verticalLayout_60->setContentsMargins(11, 11, 11, 11);
        verticalLayout_60->setObjectName(QStringLiteral("verticalLayout_60"));
        radioButton_exTester_crossingNumber = new QRadioButton(groupBox_exTester_exResults);
        radioButton_exTester_crossingNumber->setObjectName(QStringLiteral("radioButton_exTester_crossingNumber"));

        verticalLayout_60->addWidget(radioButton_exTester_crossingNumber);

        radioButton_exTester_predictedMinutiae = new QRadioButton(groupBox_exTester_exResults);
        radioButton_exTester_predictedMinutiae->setObjectName(QStringLiteral("radioButton_exTester_predictedMinutiae"));
        radioButton_exTester_predictedMinutiae->setChecked(false);

        verticalLayout_60->addWidget(radioButton_exTester_predictedMinutiae);

        radioButton_exTester_fixedPredictedMinutiae = new QRadioButton(groupBox_exTester_exResults);
        radioButton_exTester_fixedPredictedMinutiae->setObjectName(QStringLiteral("radioButton_exTester_fixedPredictedMinutiae"));
        radioButton_exTester_fixedPredictedMinutiae->setChecked(true);

        verticalLayout_60->addWidget(radioButton_exTester_fixedPredictedMinutiae);


        verticalLayout_59->addWidget(groupBox_exTester_exResults);

        tabWidget_exTester_settings->addTab(tab_7, QString());
        tab_features = new QWidget();
        tab_features->setObjectName(QStringLiteral("tab_features"));
        verticalLayout_57 = new QVBoxLayout(tab_features);
        verticalLayout_57->setSpacing(6);
        verticalLayout_57->setContentsMargins(11, 11, 11, 11);
        verticalLayout_57->setObjectName(QStringLiteral("verticalLayout_57"));
        groupBox_exTester_mode = new QGroupBox(tab_features);
        groupBox_exTester_mode->setObjectName(QStringLiteral("groupBox_exTester_mode"));
        verticalLayout_40 = new QVBoxLayout(groupBox_exTester_mode);
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setContentsMargins(11, 11, 11, 11);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        radioButton_exTester_cpuMode = new QRadioButton(groupBox_exTester_mode);
        radioButton_exTester_cpuMode->setObjectName(QStringLiteral("radioButton_exTester_cpuMode"));

        horizontalLayout_44->addWidget(radioButton_exTester_cpuMode);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_44->addItem(horizontalSpacer_38);

        label_exTester_threadNum = new QLabel(groupBox_exTester_mode);
        label_exTester_threadNum->setObjectName(QStringLiteral("label_exTester_threadNum"));
        label_exTester_threadNum->setEnabled(false);
        label_exTester_threadNum->setAlignment(Qt::AlignCenter);
        label_exTester_threadNum->setWordWrap(true);

        horizontalLayout_44->addWidget(label_exTester_threadNum);

        spinBox_exTester_threadNum = new QSpinBox(groupBox_exTester_mode);
        spinBox_exTester_threadNum->setObjectName(QStringLiteral("spinBox_exTester_threadNum"));
        spinBox_exTester_threadNum->setEnabled(false);

        horizontalLayout_44->addWidget(spinBox_exTester_threadNum);


        verticalLayout_40->addLayout(horizontalLayout_44);

        radioButton_exTester_gpuMode = new QRadioButton(groupBox_exTester_mode);
        radioButton_exTester_gpuMode->setObjectName(QStringLiteral("radioButton_exTester_gpuMode"));
        radioButton_exTester_gpuMode->setChecked(true);

        verticalLayout_40->addWidget(radioButton_exTester_gpuMode);


        verticalLayout_57->addWidget(groupBox_exTester_mode);

        groupBox_exTester_preprocessing = new QGroupBox(tab_features);
        groupBox_exTester_preprocessing->setObjectName(QStringLiteral("groupBox_exTester_preprocessing"));
        verticalLayout_56 = new QVBoxLayout(groupBox_exTester_preprocessing);
        verticalLayout_56->setSpacing(6);
        verticalLayout_56->setContentsMargins(11, 11, 11, 11);
        verticalLayout_56->setObjectName(QStringLiteral("verticalLayout_56"));
        checkBox_exTester_contrast = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_contrast->setObjectName(QStringLiteral("checkBox_exTester_contrast"));
        checkBox_exTester_contrast->setChecked(true);

        verticalLayout_56->addWidget(checkBox_exTester_contrast);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        checkBox_exTester_holeRemover = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_holeRemover->setObjectName(QStringLiteral("checkBox_exTester_holeRemover"));
        checkBox_exTester_holeRemover->setChecked(true);

        horizontalLayout_43->addWidget(checkBox_exTester_holeRemover);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_37);

        label_exTester_removeHoles = new QLabel(groupBox_exTester_preprocessing);
        label_exTester_removeHoles->setObjectName(QStringLiteral("label_exTester_removeHoles"));

        horizontalLayout_43->addWidget(label_exTester_removeHoles);

        spinBox_exTester_holeSize = new QSpinBox(groupBox_exTester_preprocessing);
        spinBox_exTester_holeSize->setObjectName(QStringLiteral("spinBox_exTester_holeSize"));
        spinBox_exTester_holeSize->setMaximumSize(QSize(45, 16777215));
        spinBox_exTester_holeSize->setMinimum(1);
        spinBox_exTester_holeSize->setMaximum(99);
        spinBox_exTester_holeSize->setValue(20);

        horizontalLayout_43->addWidget(spinBox_exTester_holeSize);


        verticalLayout_56->addLayout(horizontalLayout_43);

        checkBox_exTester_advancedOMap = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_advancedOMap->setObjectName(QStringLiteral("checkBox_exTester_advancedOMap"));
        checkBox_exTester_advancedOMap->setChecked(true);

        verticalLayout_56->addWidget(checkBox_exTester_advancedOMap);

        checkBox_exTester_mask = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_mask->setObjectName(QStringLiteral("checkBox_exTester_mask"));
        checkBox_exTester_mask->setChecked(false);

        verticalLayout_56->addWidget(checkBox_exTester_mask);

        checkBox_exTester_qualityMap = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_qualityMap->setObjectName(QStringLiteral("checkBox_exTester_qualityMap"));
        checkBox_exTester_qualityMap->setChecked(true);

        verticalLayout_56->addWidget(checkBox_exTester_qualityMap);


        verticalLayout_57->addWidget(groupBox_exTester_preprocessing);

        groupBox_exTester_exFeatures_2 = new QGroupBox(tab_features);
        groupBox_exTester_exFeatures_2->setObjectName(QStringLiteral("groupBox_exTester_exFeatures_2"));
        verticalLayout_61 = new QVBoxLayout(groupBox_exTester_exFeatures_2);
        verticalLayout_61->setSpacing(6);
        verticalLayout_61->setContentsMargins(11, 11, 11, 11);
        verticalLayout_61->setObjectName(QStringLiteral("verticalLayout_61"));
        checkBox_exTester_orientationFixer = new QCheckBox(groupBox_exTester_exFeatures_2);
        checkBox_exTester_orientationFixer->setObjectName(QStringLiteral("checkBox_exTester_orientationFixer"));
        checkBox_exTester_orientationFixer->setChecked(true);

        verticalLayout_61->addWidget(checkBox_exTester_orientationFixer);

        checkBox_exTester_varBlockSize = new QCheckBox(groupBox_exTester_exFeatures_2);
        checkBox_exTester_varBlockSize->setObjectName(QStringLiteral("checkBox_exTester_varBlockSize"));

        verticalLayout_61->addWidget(checkBox_exTester_varBlockSize);


        verticalLayout_57->addWidget(groupBox_exTester_exFeatures_2);

        tabWidget_exTester_settings->addTab(tab_features, QString());

        verticalLayout_7->addWidget(tabWidget_exTester_settings);


        horizontalLayout_42->addLayout(verticalLayout_7);

        tabWidget_exTester_results = new QTabWidget(tab_extractionTester);
        tabWidget_exTester_results->setObjectName(QStringLiteral("tabWidget_exTester_results"));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        gridLayout_6 = new QGridLayout(tab_8);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_45 = new QVBoxLayout();
        verticalLayout_45->setSpacing(6);
        verticalLayout_45->setObjectName(QStringLiteral("verticalLayout_45"));
        label_exExter_original = new QLabel(tab_8);
        label_exExter_original->setObjectName(QStringLiteral("label_exExter_original"));
        label_exExter_original->setMinimumSize(QSize(0, 25));

        verticalLayout_45->addWidget(label_exExter_original);

        graphicsView_exTester_original = new QGraphicsView(tab_8);
        graphicsView_exTester_original->setObjectName(QStringLiteral("graphicsView_exTester_original"));
        graphicsView_exTester_original->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_45->addWidget(graphicsView_exTester_original);


        gridLayout_6->addLayout(verticalLayout_45, 0, 0, 1, 1);

        verticalLayout_46 = new QVBoxLayout();
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        label_exExter_mask = new QLabel(tab_8);
        label_exExter_mask->setObjectName(QStringLiteral("label_exExter_mask"));
        label_exExter_mask->setMinimumSize(QSize(0, 25));

        verticalLayout_46->addWidget(label_exExter_mask);

        graphicsView_exTester_mask = new QGraphicsView(tab_8);
        graphicsView_exTester_mask->setObjectName(QStringLiteral("graphicsView_exTester_mask"));
        graphicsView_exTester_mask->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_46->addWidget(graphicsView_exTester_mask);


        gridLayout_6->addLayout(verticalLayout_46, 0, 1, 1, 1);

        verticalLayout_47 = new QVBoxLayout();
        verticalLayout_47->setSpacing(6);
        verticalLayout_47->setObjectName(QStringLiteral("verticalLayout_47"));
        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        label_exExter_omap = new QLabel(tab_8);
        label_exExter_omap->setObjectName(QStringLiteral("label_exExter_omap"));

        horizontalLayout_36->addWidget(label_exExter_omap);

        comboBox_exTester_map = new QComboBox(tab_8);
        comboBox_exTester_map->addItem(QString());
        comboBox_exTester_map->addItem(QString());
        comboBox_exTester_map->addItem(QString());
        comboBox_exTester_map->setObjectName(QStringLiteral("comboBox_exTester_map"));

        horizontalLayout_36->addWidget(comboBox_exTester_map);


        verticalLayout_47->addLayout(horizontalLayout_36);

        graphicsView_exTester_map = new QGraphicsView(tab_8);
        graphicsView_exTester_map->setObjectName(QStringLiteral("graphicsView_exTester_map"));
        graphicsView_exTester_map->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_47->addWidget(graphicsView_exTester_map);


        gridLayout_6->addLayout(verticalLayout_47, 0, 2, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer_10, 1, 0, 1, 1);

        verticalLayout_48 = new QVBoxLayout();
        verticalLayout_48->setSpacing(6);
        verticalLayout_48->setObjectName(QStringLiteral("verticalLayout_48"));
        label_exExter_enhanced = new QLabel(tab_8);
        label_exExter_enhanced->setObjectName(QStringLiteral("label_exExter_enhanced"));
        label_exExter_enhanced->setMinimumSize(QSize(0, 23));

        verticalLayout_48->addWidget(label_exExter_enhanced);

        graphicsView_exTester_enhanced = new QGraphicsView(tab_8);
        graphicsView_exTester_enhanced->setObjectName(QStringLiteral("graphicsView_exTester_enhanced"));
        graphicsView_exTester_enhanced->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_48->addWidget(graphicsView_exTester_enhanced);


        gridLayout_6->addLayout(verticalLayout_48, 2, 0, 1, 1);

        verticalLayout_49 = new QVBoxLayout();
        verticalLayout_49->setSpacing(6);
        verticalLayout_49->setObjectName(QStringLiteral("verticalLayout_49"));
        label_exExter_binarized = new QLabel(tab_8);
        label_exExter_binarized->setObjectName(QStringLiteral("label_exExter_binarized"));
        label_exExter_binarized->setMinimumSize(QSize(0, 23));

        verticalLayout_49->addWidget(label_exExter_binarized);

        graphicsView_exTester_binarized = new QGraphicsView(tab_8);
        graphicsView_exTester_binarized->setObjectName(QStringLiteral("graphicsView_exTester_binarized"));
        graphicsView_exTester_binarized->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_49->addWidget(graphicsView_exTester_binarized);


        gridLayout_6->addLayout(verticalLayout_49, 2, 1, 1, 1);

        verticalLayout_50 = new QVBoxLayout();
        verticalLayout_50->setSpacing(6);
        verticalLayout_50->setObjectName(QStringLiteral("verticalLayout_50"));
        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        label_exExter_skeleton = new QLabel(tab_8);
        label_exExter_skeleton->setObjectName(QStringLiteral("label_exExter_skeleton"));

        horizontalLayout_40->addWidget(label_exExter_skeleton);

        checkBox_exTester_invertedSkeleton = new QCheckBox(tab_8);
        checkBox_exTester_invertedSkeleton->setObjectName(QStringLiteral("checkBox_exTester_invertedSkeleton"));

        horizontalLayout_40->addWidget(checkBox_exTester_invertedSkeleton);


        verticalLayout_50->addLayout(horizontalLayout_40);

        graphicsView_exTester_skeleton = new QGraphicsView(tab_8);
        graphicsView_exTester_skeleton->setObjectName(QStringLiteral("graphicsView_exTester_skeleton"));
        graphicsView_exTester_skeleton->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_50->addWidget(graphicsView_exTester_skeleton);


        gridLayout_6->addLayout(verticalLayout_50, 2, 2, 1, 1);

        tabWidget_exTester_results->addTab(tab_8, QString());
        tab_extraction = new QWidget();
        tab_extraction->setObjectName(QStringLiteral("tab_extraction"));
        verticalLayout_58 = new QVBoxLayout(tab_extraction);
        verticalLayout_58->setSpacing(6);
        verticalLayout_58->setContentsMargins(11, 11, 11, 11);
        verticalLayout_58->setObjectName(QStringLiteral("verticalLayout_58"));
        graphicsView_exTester_extraction = new QGraphicsView(tab_extraction);
        graphicsView_exTester_extraction->setObjectName(QStringLiteral("graphicsView_exTester_extraction"));
        graphicsView_exTester_extraction->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_58->addWidget(graphicsView_exTester_extraction);

        tabWidget_exTester_results->addTab(tab_extraction, QString());
        tab_large = new QWidget();
        tab_large->setObjectName(QStringLiteral("tab_large"));
        verticalLayout_63 = new QVBoxLayout(tab_large);
        verticalLayout_63->setSpacing(6);
        verticalLayout_63->setContentsMargins(11, 11, 11, 11);
        verticalLayout_63->setObjectName(QStringLiteral("verticalLayout_63"));
        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setSpacing(6);
        horizontalLayout_52->setObjectName(QStringLiteral("horizontalLayout_52"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_52->addItem(horizontalSpacer_5);

        comboBox = new QComboBox(tab_large);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(170, 0));
        comboBox->setMaximumSize(QSize(170, 16777215));

        horizontalLayout_52->addWidget(comboBox);


        verticalLayout_63->addLayout(horizontalLayout_52);

        graphicsView = new QGraphicsView(tab_large);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout_63->addWidget(graphicsView);

        tabWidget_exTester_results->addTab(tab_large, QString());
        tab_log = new QWidget();
        tab_log->setObjectName(QStringLiteral("tab_log"));
        verticalLayout_51 = new QVBoxLayout(tab_log);
        verticalLayout_51->setSpacing(6);
        verticalLayout_51->setContentsMargins(11, 11, 11, 11);
        verticalLayout_51->setObjectName(QStringLiteral("verticalLayout_51"));
        textBrowser_exTester_log = new QTextBrowser(tab_log);
        textBrowser_exTester_log->setObjectName(QStringLiteral("textBrowser_exTester_log"));

        verticalLayout_51->addWidget(textBrowser_exTester_log);

        tabWidget_exTester_results->addTab(tab_log, QString());

        horizontalLayout_42->addWidget(tabWidget_exTester_results);

        tabWidget_main->addTab(tab_extractionTester, QString());
        tab_dbTester = new QWidget();
        tab_dbTester->setObjectName(QStringLiteral("tab_dbTester"));
        horizontalLayout_28 = new QHBoxLayout(tab_dbTester);
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        tabWidget_testerSettings = new QTabWidget(tab_dbTester);
        tabWidget_testerSettings->setObjectName(QStringLiteral("tabWidget_testerSettings"));
        sizePolicy4.setHeightForWidth(tabWidget_testerSettings->sizePolicy().hasHeightForWidth());
        tabWidget_testerSettings->setSizePolicy(sizePolicy4);
        tabWidget_testerSettings->setMinimumSize(QSize(0, 0));
        tabWidget_testerSettings->setMaximumSize(QSize(270, 260));
        tabWidget_testerSettings->setTabPosition(QTabWidget::North);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_62 = new QVBoxLayout(tab_3);
        verticalLayout_62->setSpacing(6);
        verticalLayout_62->setContentsMargins(11, 11, 11, 11);
        verticalLayout_62->setObjectName(QStringLiteral("verticalLayout_62"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pushButton_inputDatabase = new QPushButton(tab_3);
        pushButton_inputDatabase->setObjectName(QStringLiteral("pushButton_inputDatabase"));
        sizePolicy.setHeightForWidth(pushButton_inputDatabase->sizePolicy().hasHeightForWidth());
        pushButton_inputDatabase->setSizePolicy(sizePolicy);
        pushButton_inputDatabase->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_14->addWidget(pushButton_inputDatabase);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_8);

        label_selectedDbName = new QLabel(tab_3);
        label_selectedDbName->setObjectName(QStringLiteral("label_selectedDbName"));
        label_selectedDbName->setWordWrap(true);

        horizontalLayout_14->addWidget(label_selectedDbName);


        verticalLayout_62->addLayout(horizontalLayout_14);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_62->addItem(verticalSpacer_5);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_numberOfSubject = new QLabel(tab_3);
        label_numberOfSubject->setObjectName(QStringLiteral("label_numberOfSubject"));

        gridLayout_4->addWidget(label_numberOfSubject, 0, 0, 1, 1);

        spinBox_numberOfSubject = new QSpinBox(tab_3);
        spinBox_numberOfSubject->setObjectName(QStringLiteral("spinBox_numberOfSubject"));
        spinBox_numberOfSubject->setMinimumSize(QSize(55, 0));
        spinBox_numberOfSubject->setMaximumSize(QSize(55, 16777215));
        spinBox_numberOfSubject->setMaximum(1000);
        spinBox_numberOfSubject->setValue(100);

        gridLayout_4->addWidget(spinBox_numberOfSubject, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_12, 0, 2, 2, 1);

        label_imagesPerSubject = new QLabel(tab_3);
        label_imagesPerSubject->setObjectName(QStringLiteral("label_imagesPerSubject"));

        gridLayout_4->addWidget(label_imagesPerSubject, 1, 0, 1, 1);

        spinBox_imagesPerSubject = new QSpinBox(tab_3);
        spinBox_imagesPerSubject->setObjectName(QStringLiteral("spinBox_imagesPerSubject"));
        spinBox_imagesPerSubject->setMinimumSize(QSize(55, 0));
        spinBox_imagesPerSubject->setMaximumSize(QSize(55, 16777215));
        spinBox_imagesPerSubject->setMaximum(100);
        spinBox_imagesPerSubject->setValue(8);

        gridLayout_4->addWidget(spinBox_imagesPerSubject, 1, 1, 1, 1);


        verticalLayout_62->addLayout(gridLayout_4);

        groupBox_dbTester_mode = new QGroupBox(tab_3);
        groupBox_dbTester_mode->setObjectName(QStringLiteral("groupBox_dbTester_mode"));
        verticalLayout_29 = new QVBoxLayout(groupBox_dbTester_mode);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setSpacing(6);
        horizontalLayout_49->setObjectName(QStringLiteral("horizontalLayout_49"));
        radioButton_dbTester_cpuMode = new QRadioButton(groupBox_dbTester_mode);
        radioButton_dbTester_cpuMode->setObjectName(QStringLiteral("radioButton_dbTester_cpuMode"));

        horizontalLayout_49->addWidget(radioButton_dbTester_cpuMode);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_42);

        label_dbTester_threadNum = new QLabel(groupBox_dbTester_mode);
        label_dbTester_threadNum->setObjectName(QStringLiteral("label_dbTester_threadNum"));
        label_dbTester_threadNum->setEnabled(false);
        label_dbTester_threadNum->setAlignment(Qt::AlignCenter);
        label_dbTester_threadNum->setWordWrap(true);

        horizontalLayout_49->addWidget(label_dbTester_threadNum);

        spinBox_dbTester_threadNum = new QSpinBox(groupBox_dbTester_mode);
        spinBox_dbTester_threadNum->setObjectName(QStringLiteral("spinBox_dbTester_threadNum"));
        spinBox_dbTester_threadNum->setEnabled(false);

        horizontalLayout_49->addWidget(spinBox_dbTester_threadNum);


        verticalLayout_29->addLayout(horizontalLayout_49);

        radioButton_dbTester_gpuMode = new QRadioButton(groupBox_dbTester_mode);
        radioButton_dbTester_gpuMode->setObjectName(QStringLiteral("radioButton_dbTester_gpuMode"));
        radioButton_dbTester_gpuMode->setChecked(true);

        verticalLayout_29->addWidget(radioButton_dbTester_gpuMode);


        verticalLayout_62->addWidget(groupBox_dbTester_mode);

        tabWidget_testerSettings->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_54 = new QVBoxLayout(tab_4);
        verticalLayout_54->setSpacing(6);
        verticalLayout_54->setContentsMargins(11, 11, 11, 11);
        verticalLayout_54->setObjectName(QStringLiteral("verticalLayout_54"));
        groupBox_matcher = new QGroupBox(tab_4);
        groupBox_matcher->setObjectName(QStringLiteral("groupBox_matcher"));
        groupBox_matcher->setMaximumSize(QSize(16777215, 65));
        horizontalLayout_16 = new QHBoxLayout(groupBox_matcher);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        radioButton_matcherSuprema = new QRadioButton(groupBox_matcher);
        radioButton_matcherSuprema->setObjectName(QStringLiteral("radioButton_matcherSuprema"));
        radioButton_matcherSuprema->setChecked(true);

        horizontalLayout_16->addWidget(radioButton_matcherSuprema);

        radioButton_matcherBozorth = new QRadioButton(groupBox_matcher);
        radioButton_matcherBozorth->setObjectName(QStringLiteral("radioButton_matcherBozorth"));
        radioButton_matcherBozorth->setChecked(false);

        horizontalLayout_16->addWidget(radioButton_matcherBozorth);


        verticalLayout_54->addWidget(groupBox_matcher);

        groupBox_dbTester_preprocessing = new QGroupBox(tab_4);
        groupBox_dbTester_preprocessing->setObjectName(QStringLiteral("groupBox_dbTester_preprocessing"));
        verticalLayout_53 = new QVBoxLayout(groupBox_dbTester_preprocessing);
        verticalLayout_53->setSpacing(6);
        verticalLayout_53->setContentsMargins(11, 11, 11, 11);
        verticalLayout_53->setObjectName(QStringLiteral("verticalLayout_53"));
        checkBox_dbTester_contrastEnhancement = new QCheckBox(groupBox_dbTester_preprocessing);
        checkBox_dbTester_contrastEnhancement->setObjectName(QStringLiteral("checkBox_dbTester_contrastEnhancement"));
        checkBox_dbTester_contrastEnhancement->setChecked(true);

        verticalLayout_53->addWidget(checkBox_dbTester_contrastEnhancement);

        checkBox_dbTester_advancedOrientationMap = new QCheckBox(groupBox_dbTester_preprocessing);
        checkBox_dbTester_advancedOrientationMap->setObjectName(QStringLiteral("checkBox_dbTester_advancedOrientationMap"));
        checkBox_dbTester_advancedOrientationMap->setChecked(true);

        verticalLayout_53->addWidget(checkBox_dbTester_advancedOrientationMap);

        checkBox_dbTester_qualityMap = new QCheckBox(groupBox_dbTester_preprocessing);
        checkBox_dbTester_qualityMap->setObjectName(QStringLiteral("checkBox_dbTester_qualityMap"));
        checkBox_dbTester_qualityMap->setChecked(true);

        verticalLayout_53->addWidget(checkBox_dbTester_qualityMap);

        checkBox_dbTester_mask = new QCheckBox(groupBox_dbTester_preprocessing);
        checkBox_dbTester_mask->setObjectName(QStringLiteral("checkBox_dbTester_mask"));
        checkBox_dbTester_mask->setChecked(false);

        verticalLayout_53->addWidget(checkBox_dbTester_mask);

        checkBox_dbTester_invertedSkeleton = new QCheckBox(groupBox_dbTester_preprocessing);
        checkBox_dbTester_invertedSkeleton->setObjectName(QStringLiteral("checkBox_dbTester_invertedSkeleton"));
        checkBox_dbTester_invertedSkeleton->setChecked(true);

        verticalLayout_53->addWidget(checkBox_dbTester_invertedSkeleton);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setSpacing(6);
        horizontalLayout_47->setObjectName(QStringLiteral("horizontalLayout_47"));
        checkBox_dbTester_removeHoles = new QCheckBox(groupBox_dbTester_preprocessing);
        checkBox_dbTester_removeHoles->setObjectName(QStringLiteral("checkBox_dbTester_removeHoles"));
        checkBox_dbTester_removeHoles->setChecked(true);

        horizontalLayout_47->addWidget(checkBox_dbTester_removeHoles);

        horizontalSpacer_35 = new QSpacerItem(13, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_47->addItem(horizontalSpacer_35);

        label_dbTester_holeSize = new QLabel(groupBox_dbTester_preprocessing);
        label_dbTester_holeSize->setObjectName(QStringLiteral("label_dbTester_holeSize"));

        horizontalLayout_47->addWidget(label_dbTester_holeSize);

        spinBox_dbTester_holeSize = new QSpinBox(groupBox_dbTester_preprocessing);
        spinBox_dbTester_holeSize->setObjectName(QStringLiteral("spinBox_dbTester_holeSize"));
        spinBox_dbTester_holeSize->setMinimumSize(QSize(55, 0));
        spinBox_dbTester_holeSize->setMaximumSize(QSize(60, 16777215));
        spinBox_dbTester_holeSize->setMinimum(1);
        spinBox_dbTester_holeSize->setMaximum(50);
        spinBox_dbTester_holeSize->setValue(20);

        horizontalLayout_47->addWidget(spinBox_dbTester_holeSize);


        verticalLayout_53->addLayout(horizontalLayout_47);


        verticalLayout_54->addWidget(groupBox_dbTester_preprocessing);

        groupBox_dbTester_Extraction = new QGroupBox(tab_4);
        groupBox_dbTester_Extraction->setObjectName(QStringLiteral("groupBox_dbTester_Extraction"));
        verticalLayout_36 = new QVBoxLayout(groupBox_dbTester_Extraction);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        checkBox_dbTester_fixOrientations = new QCheckBox(groupBox_dbTester_Extraction);
        checkBox_dbTester_fixOrientations->setObjectName(QStringLiteral("checkBox_dbTester_fixOrientations"));
        checkBox_dbTester_fixOrientations->setChecked(true);

        verticalLayout_36->addWidget(checkBox_dbTester_fixOrientations);

        checkBox_dbTester_variableBlockSize = new QCheckBox(groupBox_dbTester_Extraction);
        checkBox_dbTester_variableBlockSize->setObjectName(QStringLiteral("checkBox_dbTester_variableBlockSize"));

        verticalLayout_36->addWidget(checkBox_dbTester_variableBlockSize);


        verticalLayout_54->addWidget(groupBox_dbTester_Extraction);

        tabWidget_testerSettings->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_38 = new QVBoxLayout(tab_5);
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setContentsMargins(11, 11, 11, 11);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        groupBox_dbTester_ParameterGeneral = new QGroupBox(tab_5);
        groupBox_dbTester_ParameterGeneral->setObjectName(QStringLiteral("groupBox_dbTester_ParameterGeneral"));
        groupBox_dbTester_ParameterGeneral->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_26 = new QHBoxLayout(groupBox_dbTester_ParameterGeneral);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_dbTester_BlockSize = new QLabel(groupBox_dbTester_ParameterGeneral);
        label_dbTester_BlockSize->setObjectName(QStringLiteral("label_dbTester_BlockSize"));
        label_dbTester_BlockSize->setMinimumSize(QSize(145, 0));
        label_dbTester_BlockSize->setMaximumSize(QSize(145, 16777215));
        label_dbTester_BlockSize->setWordWrap(true);

        horizontalLayout_26->addWidget(label_dbTester_BlockSize);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_25);

        spinBox_dbTester_BlockSize = new QSpinBox(groupBox_dbTester_ParameterGeneral);
        spinBox_dbTester_BlockSize->setObjectName(QStringLiteral("spinBox_dbTester_BlockSize"));
        spinBox_dbTester_BlockSize->setMinimumSize(QSize(45, 0));
        spinBox_dbTester_BlockSize->setMaximumSize(QSize(45, 16777215));
        spinBox_dbTester_BlockSize->setSingleStep(2);
        spinBox_dbTester_BlockSize->setValue(13);

        horizontalLayout_26->addWidget(spinBox_dbTester_BlockSize);


        verticalLayout_38->addWidget(groupBox_dbTester_ParameterGeneral);

        groupBox = new QGroupBox(tab_5);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setCheckable(true);
        groupBox->setChecked(false);
        horizontalLayout_46 = new QHBoxLayout(groupBox);
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        label_dbTester_freqBlockSize = new QLabel(groupBox);
        label_dbTester_freqBlockSize->setObjectName(QStringLiteral("label_dbTester_freqBlockSize"));
        label_dbTester_freqBlockSize->setWordWrap(true);

        horizontalLayout_46->addWidget(label_dbTester_freqBlockSize);

        spinBox_dbTester_freqBlockSize = new QSpinBox(groupBox);
        spinBox_dbTester_freqBlockSize->setObjectName(QStringLiteral("spinBox_dbTester_freqBlockSize"));
        spinBox_dbTester_freqBlockSize->setMinimumSize(QSize(45, 0));
        spinBox_dbTester_freqBlockSize->setMaximumSize(QSize(55, 16777215));
        spinBox_dbTester_freqBlockSize->setMinimum(1);
        spinBox_dbTester_freqBlockSize->setMaximum(100);
        spinBox_dbTester_freqBlockSize->setValue(8);

        horizontalLayout_46->addWidget(spinBox_dbTester_freqBlockSize);

        horizontalSpacer_40 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_46->addItem(horizontalSpacer_40);

        label_dbTester_freqExBlockSize = new QLabel(groupBox);
        label_dbTester_freqExBlockSize->setObjectName(QStringLiteral("label_dbTester_freqExBlockSize"));
        label_dbTester_freqExBlockSize->setWordWrap(true);

        horizontalLayout_46->addWidget(label_dbTester_freqExBlockSize);

        spinBox_dbTester_freqExBlockSize = new QSpinBox(groupBox);
        spinBox_dbTester_freqExBlockSize->setObjectName(QStringLiteral("spinBox_dbTester_freqExBlockSize"));
        spinBox_dbTester_freqExBlockSize->setMinimumSize(QSize(45, 0));
        spinBox_dbTester_freqExBlockSize->setMaximumSize(QSize(55, 16777215));
        spinBox_dbTester_freqExBlockSize->setMinimum(1);
        spinBox_dbTester_freqExBlockSize->setMaximum(100);
        spinBox_dbTester_freqExBlockSize->setValue(30);

        horizontalLayout_46->addWidget(spinBox_dbTester_freqExBlockSize);


        verticalLayout_38->addWidget(groupBox);

        groupBox_dbTester_ParameterOMap = new QGroupBox(tab_5);
        groupBox_dbTester_ParameterOMap->setObjectName(QStringLiteral("groupBox_dbTester_ParameterOMap"));
        verticalLayout_27 = new QVBoxLayout(groupBox_dbTester_ParameterOMap);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        label_dbTesterGaussianBlurBasic = new QLabel(groupBox_dbTester_ParameterOMap);
        label_dbTesterGaussianBlurBasic->setObjectName(QStringLiteral("label_dbTesterGaussianBlurBasic"));

        verticalLayout_27->addWidget(label_dbTesterGaussianBlurBasic);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_dbTester_BasicOMapBlockSize = new QLabel(groupBox_dbTester_ParameterOMap);
        label_dbTester_BasicOMapBlockSize->setObjectName(QStringLiteral("label_dbTester_BasicOMapBlockSize"));
        label_dbTester_BasicOMapBlockSize->setWordWrap(true);

        horizontalLayout_27->addWidget(label_dbTester_BasicOMapBlockSize);

        spinBox_dbTester_BasicOMapBlockSize = new QSpinBox(groupBox_dbTester_ParameterOMap);
        spinBox_dbTester_BasicOMapBlockSize->setObjectName(QStringLiteral("spinBox_dbTester_BasicOMapBlockSize"));
        spinBox_dbTester_BasicOMapBlockSize->setMinimumSize(QSize(45, 0));
        spinBox_dbTester_BasicOMapBlockSize->setMaximumSize(QSize(45, 16777215));
        spinBox_dbTester_BasicOMapBlockSize->setMaximum(200);
        spinBox_dbTester_BasicOMapBlockSize->setValue(1);

        horizontalLayout_27->addWidget(spinBox_dbTester_BasicOMapBlockSize);

        horizontalSpacer_26 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_26);

        label_ddbTester_BasicOMapSigma = new QLabel(groupBox_dbTester_ParameterOMap);
        label_ddbTester_BasicOMapSigma->setObjectName(QStringLiteral("label_ddbTester_BasicOMapSigma"));
        label_ddbTester_BasicOMapSigma->setWordWrap(true);

        horizontalLayout_27->addWidget(label_ddbTester_BasicOMapSigma);

        doubleSpinBox_dbTester_BasicOMapSigma = new QDoubleSpinBox(groupBox_dbTester_ParameterOMap);
        doubleSpinBox_dbTester_BasicOMapSigma->setObjectName(QStringLiteral("doubleSpinBox_dbTester_BasicOMapSigma"));
        doubleSpinBox_dbTester_BasicOMapSigma->setMinimumSize(QSize(50, 0));
        doubleSpinBox_dbTester_BasicOMapSigma->setMaximumSize(QSize(55, 16777215));
        doubleSpinBox_dbTester_BasicOMapSigma->setDecimals(1);
        doubleSpinBox_dbTester_BasicOMapSigma->setValue(1);

        horizontalLayout_27->addWidget(doubleSpinBox_dbTester_BasicOMapSigma);


        verticalLayout_27->addLayout(horizontalLayout_27);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_27->addItem(verticalSpacer_8);

        label_dbTesterGaussianBlurAdvanced = new QLabel(groupBox_dbTester_ParameterOMap);
        label_dbTesterGaussianBlurAdvanced->setObjectName(QStringLiteral("label_dbTesterGaussianBlurAdvanced"));

        verticalLayout_27->addWidget(label_dbTesterGaussianBlurAdvanced);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        label_dbTester_AdvancedOMapBlockSize = new QLabel(groupBox_dbTester_ParameterOMap);
        label_dbTester_AdvancedOMapBlockSize->setObjectName(QStringLiteral("label_dbTester_AdvancedOMapBlockSize"));
        label_dbTester_AdvancedOMapBlockSize->setWordWrap(true);

        horizontalLayout_30->addWidget(label_dbTester_AdvancedOMapBlockSize);

        spinBox_dbTester_AdvancedOMapBlockSize = new QSpinBox(groupBox_dbTester_ParameterOMap);
        spinBox_dbTester_AdvancedOMapBlockSize->setObjectName(QStringLiteral("spinBox_dbTester_AdvancedOMapBlockSize"));
        spinBox_dbTester_AdvancedOMapBlockSize->setMinimumSize(QSize(45, 0));
        spinBox_dbTester_AdvancedOMapBlockSize->setMaximumSize(QSize(45, 16777215));
        spinBox_dbTester_AdvancedOMapBlockSize->setMaximum(200);
        spinBox_dbTester_AdvancedOMapBlockSize->setValue(121);

        horizontalLayout_30->addWidget(spinBox_dbTester_AdvancedOMapBlockSize);

        horizontalSpacer_28 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_28);

        label_dbTester_AdvancedOMapSigma = new QLabel(groupBox_dbTester_ParameterOMap);
        label_dbTester_AdvancedOMapSigma->setObjectName(QStringLiteral("label_dbTester_AdvancedOMapSigma"));
        label_dbTester_AdvancedOMapSigma->setWordWrap(true);

        horizontalLayout_30->addWidget(label_dbTester_AdvancedOMapSigma);

        doubleSpinBox_dbTester_AdvancedOMapSigma = new QDoubleSpinBox(groupBox_dbTester_ParameterOMap);
        doubleSpinBox_dbTester_AdvancedOMapSigma->setObjectName(QStringLiteral("doubleSpinBox_dbTester_AdvancedOMapSigma"));
        doubleSpinBox_dbTester_AdvancedOMapSigma->setMinimumSize(QSize(50, 0));
        doubleSpinBox_dbTester_AdvancedOMapSigma->setMaximumSize(QSize(55, 16777215));
        doubleSpinBox_dbTester_AdvancedOMapSigma->setDecimals(1);
        doubleSpinBox_dbTester_AdvancedOMapSigma->setValue(10);

        horizontalLayout_30->addWidget(doubleSpinBox_dbTester_AdvancedOMapSigma);


        verticalLayout_27->addLayout(horizontalLayout_30);


        verticalLayout_38->addWidget(groupBox_dbTester_ParameterOMap);

        groupBox_dbTester_ParameterGabor = new QGroupBox(tab_5);
        groupBox_dbTester_ParameterGabor->setObjectName(QStringLiteral("groupBox_dbTester_ParameterGabor"));
        verticalLayout_39 = new QVBoxLayout(groupBox_dbTester_ParameterGabor);
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setContentsMargins(11, 11, 11, 11);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        label_dbTester_GaborSigma = new QLabel(groupBox_dbTester_ParameterGabor);
        label_dbTester_GaborSigma->setObjectName(QStringLiteral("label_dbTester_GaborSigma"));
        label_dbTester_GaborSigma->setMinimumSize(QSize(36, 0));
        label_dbTester_GaborSigma->setMaximumSize(QSize(36, 16777215));
        label_dbTester_GaborSigma->setWordWrap(true);

        horizontalLayout_31->addWidget(label_dbTester_GaborSigma);

        doubleSpinBox_dbTester_GaborSigma = new QDoubleSpinBox(groupBox_dbTester_ParameterGabor);
        doubleSpinBox_dbTester_GaborSigma->setObjectName(QStringLiteral("doubleSpinBox_dbTester_GaborSigma"));
        doubleSpinBox_dbTester_GaborSigma->setMinimumSize(QSize(55, 0));
        doubleSpinBox_dbTester_GaborSigma->setMaximumSize(QSize(55, 16777215));
        doubleSpinBox_dbTester_GaborSigma->setDecimals(1);
        doubleSpinBox_dbTester_GaborSigma->setValue(3);

        horizontalLayout_31->addWidget(doubleSpinBox_dbTester_GaborSigma);

        horizontalSpacer_29 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_29);

        label_dbTester_GaborLambda = new QLabel(groupBox_dbTester_ParameterGabor);
        label_dbTester_GaborLambda->setObjectName(QStringLiteral("label_dbTester_GaborLambda"));
        label_dbTester_GaborLambda->setWordWrap(true);

        horizontalLayout_31->addWidget(label_dbTester_GaborLambda);

        doubleSpinBox_dbTester_GaborLambda = new QDoubleSpinBox(groupBox_dbTester_ParameterGabor);
        doubleSpinBox_dbTester_GaborLambda->setObjectName(QStringLiteral("doubleSpinBox_dbTester_GaborLambda"));
        doubleSpinBox_dbTester_GaborLambda->setMinimumSize(QSize(50, 0));
        doubleSpinBox_dbTester_GaborLambda->setMaximumSize(QSize(55, 16777215));
        doubleSpinBox_dbTester_GaborLambda->setDecimals(1);
        doubleSpinBox_dbTester_GaborLambda->setValue(9);

        horizontalLayout_31->addWidget(doubleSpinBox_dbTester_GaborLambda);


        verticalLayout_39->addLayout(horizontalLayout_31);


        verticalLayout_38->addWidget(groupBox_dbTester_ParameterGabor);

        tabWidget_testerSettings->addTab(tab_5, QString());

        verticalLayout_37->addWidget(tabWidget_testerSettings);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_11 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_11);

        pushButton_startTesting = new QPushButton(tab_dbTester);
        pushButton_startTesting->setObjectName(QStringLiteral("pushButton_startTesting"));
        pushButton_startTesting->setMinimumSize(QSize(120, 0));
        pushButton_startTesting->setMaximumSize(QSize(120, 16777215));
        pushButton_startTesting->setAutoFillBackground(false);
        pushButton_startTesting->setStyleSheet(QLatin1String("background: rgb(54, 156, 221);\n"
"color: white;"));

        horizontalLayout_15->addWidget(pushButton_startTesting);


        verticalLayout_37->addLayout(horizontalLayout_15);

        groupBox_dbTester_Log = new QGroupBox(tab_dbTester);
        groupBox_dbTester_Log->setObjectName(QStringLiteral("groupBox_dbTester_Log"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox_dbTester_Log->sizePolicy().hasHeightForWidth());
        groupBox_dbTester_Log->setSizePolicy(sizePolicy6);
        groupBox_dbTester_Log->setMinimumSize(QSize(270, 0));
        groupBox_dbTester_Log->setMaximumSize(QSize(270, 16777215));
        verticalLayout_28 = new QVBoxLayout(groupBox_dbTester_Log);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        textBrowser_dbTesterLog = new QTextBrowser(groupBox_dbTester_Log);
        textBrowser_dbTesterLog->setObjectName(QStringLiteral("textBrowser_dbTesterLog"));

        verticalLayout_28->addWidget(textBrowser_dbTesterLog);

        progressBar_dbTester = new QProgressBar(groupBox_dbTester_Log);
        progressBar_dbTester->setObjectName(QStringLiteral("progressBar_dbTester"));
        progressBar_dbTester->setValue(0);
        progressBar_dbTester->setAlignment(Qt::AlignCenter);

        verticalLayout_28->addWidget(progressBar_dbTester);


        verticalLayout_37->addWidget(groupBox_dbTester_Log);


        horizontalLayout_28->addLayout(verticalLayout_37);

        groupBox_dbTester_Results = new QGroupBox(tab_dbTester);
        groupBox_dbTester_Results->setObjectName(QStringLiteral("groupBox_dbTester_Results"));
        groupBox_dbTester_Results->setMinimumSize(QSize(700, 500));
        verticalLayout_32 = new QVBoxLayout(groupBox_dbTester_Results);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        tabWidget_testResults = new QTabWidget(groupBox_dbTester_Results);
        tabWidget_testResults->setObjectName(QStringLiteral("tabWidget_testResults"));
        tab_farfrr = new QWidget();
        tab_farfrr->setObjectName(QStringLiteral("tab_farfrr"));
        verticalLayout_30 = new QVBoxLayout(tab_farfrr);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        widget_testFmrFnmr = new QCustomPlot(tab_farfrr);
        widget_testFmrFnmr->setObjectName(QStringLiteral("widget_testFmrFnmr"));

        verticalLayout_30->addWidget(widget_testFmrFnmr);

        tabWidget_testResults->addTab(tab_farfrr, QString());
        tab_roc = new QWidget();
        tab_roc->setObjectName(QStringLiteral("tab_roc"));
        verticalLayout_31 = new QVBoxLayout(tab_roc);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        widget_testROC = new QCustomPlot(tab_roc);
        widget_testROC->setObjectName(QStringLiteral("widget_testROC"));

        verticalLayout_31->addWidget(widget_testROC);

        tabWidget_testResults->addTab(tab_roc, QString());

        verticalLayout_32->addWidget(tabWidget_testResults);


        horizontalLayout_28->addWidget(groupBox_dbTester_Results);

        tabWidget_main->addTab(tab_dbTester, QString());

        horizontalLayout_41->addWidget(tabWidget_main);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1168, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_main->setCurrentIndex(0);
        tabWidget_exTester_settings->setCurrentIndex(0);
        tabWidget_exTester_results->setCurrentIndex(0);
        tabWidget_testerSettings->setCurrentIndex(0);
        tabWidget_testResults->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DBOX-MTCT", nullptr));
        groupBox_marker_inputImages->setTitle(QApplication::translate("MainWindow", "Input Images", nullptr));
        pushButton_inputDirectory->setText(QApplication::translate("MainWindow", "Select Directory", nullptr));
        groupBox_marker_settings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        label_minutiaeBlockSize->setText(QApplication::translate("MainWindow", "Minutiae Block Size:", nullptr));
        label_additionalBlocks->setText(QApplication::translate("MainWindow", "Additional Blocks +/-:", nullptr));
        groupBox_minutiaeType->setTitle(QApplication::translate("MainWindow", "Minutiae Type", nullptr));
        radioButton_ending->setText(QApplication::translate("MainWindow", "Ending", nullptr));
        radioButton_bifurcation->setText(QApplication::translate("MainWindow", "Bifurcation", nullptr));
        radioButton_nothing->setText(QApplication::translate("MainWindow", "Nothing", nullptr));
        groupBox_transformations->setTitle(QApplication::translate("MainWindow", "Transformations", nullptr));
        checkBox_marker_rotations->setText(QApplication::translate("MainWindow", "Rotations", nullptr));
        checkBox_marker_blur->setText(QApplication::translate("MainWindow", "Blur", nullptr));
        groupBox_marker_irisBlur->setTitle(QApplication::translate("MainWindow", "Iris Blur", nullptr));
        label_irisBlur_blur->setText(QApplication::translate("MainWindow", "Blur", nullptr));
        label_irisBlur_radius->setText(QApplication::translate("MainWindow", "Radius", nullptr));
        groupBox_fingerprintImage->setTitle(QApplication::translate("MainWindow", "Fingerprint Image", nullptr));
        groupBox_blockPreview->setTitle(QApplication::translate("MainWindow", "Block Preview", nullptr));
        label_blockOrig->setText(QApplication::translate("MainWindow", "Original", nullptr));
        label_blockBlur->setText(QApplication::translate("MainWindow", "Blurred", nullptr));
        label_blockIrisBlur->setText(QApplication::translate("MainWindow", "Iris Blurred", nullptr));
        groupBox_marker_minutiaeList->setTitle(QApplication::translate("MainWindow", "Minutiae List", nullptr));
        groupBox_output->setTitle(QApplication::translate("MainWindow", "Output", nullptr));
        label_outputPath->setText(QApplication::translate("MainWindow", "Path:", nullptr));
        lineEdit_marker_outputDirectory->setText(QApplication::translate("MainWindow", "./output", nullptr));
        pushButton_marker_outputDirectory->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        label_outputFormat->setText(QApplication::translate("MainWindow", "File Format:", nullptr));
        comboBox_outputFormat->setItemText(0, QApplication::translate("MainWindow", "*.BMP", nullptr));
        comboBox_outputFormat->setItemText(1, QApplication::translate("MainWindow", "*.TIF", nullptr));

        pushButton_marker_saveBlocks->setText(QApplication::translate("MainWindow", "Save Blocks", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_marker), QApplication::translate("MainWindow", "Minutiae Marker", nullptr));
        groupBox_netTrainer_input->setTitle(QApplication::translate("MainWindow", "Image Blocks Input", nullptr));
        pushButton_netTrainer_input->setText(QApplication::translate("MainWindow", "Select Directory", nullptr));
        label_trainerInputDirectory->setText(QString());
        groupBox_netTrainer_settings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        groupBox_netTrainer_inputBlocks->setTitle(QApplication::translate("MainWindow", "Input Blocks", nullptr));
        checkBox_netTrainer_original->setText(QApplication::translate("MainWindow", "Original", nullptr));
        checkBox_netTrainer_rotation->setText(QApplication::translate("MainWindow", "Rotation", nullptr));
        checkBox_netTrainer_blurred->setText(QApplication::translate("MainWindow", "Blurred", nullptr));
        checkBox_netTrainer_irisBlurred->setText(QApplication::translate("MainWindow", "Iris Blurred", nullptr));
        groupBox_netTrainer_trainingSettings->setTitle(QApplication::translate("MainWindow", "Training Settings", nullptr));
        label_netTrainer_testSet->setText(QApplication::translate("MainWindow", "Test set (%)", nullptr));
        label_netTrainer_trainSet->setText(QApplication::translate("MainWindow", "Train set (%):", nullptr));
        groupBox_netTrainer_mode->setTitle(QApplication::translate("MainWindow", "Mode", nullptr));
        radioButton_netTrainer_cpu->setText(QApplication::translate("MainWindow", "CPU", nullptr));
        radioButton_netTrainer_gpu->setText(QApplication::translate("MainWindow", "GPU", nullptr));
        groupBox_netTrainer_output->setTitle(QApplication::translate("MainWindow", "Output", nullptr));
        label_netTrainer_outputFolder->setText(QApplication::translate("MainWindow", "Output folder:", nullptr));
        lineEdit_netTrainer_outputFolder->setText(QApplication::translate("MainWindow", "./output", nullptr));
        pushButton_netTrainer_outputFolder->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        groupBox_netTrainer_solverParams->setTitle(QApplication::translate("MainWindow", "Solver Parameters", nullptr));
        label_netTrainer_model->setText(QApplication::translate("MainWindow", "Model (.prototxt):", nullptr));
        lineEdit_netTrainer_model->setText(QApplication::translate("MainWindow", "./core/config/Caffe/model.prototxt", nullptr));
        pushButton_netTrainer_model->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        label_netTrainer_testIterations->setText(QApplication::translate("MainWindow", "Test Iterations:", nullptr));
        label_netTrainer_testInterval->setText(QApplication::translate("MainWindow", "Test Interval:", nullptr));
        label_netTrainer_maxIterations->setText(QApplication::translate("MainWindow", "Max Iterations:", nullptr));
        label_netTrainer_snapshotInterval->setText(QApplication::translate("MainWindow", "Snapshot Interval:", nullptr));
        label_netTrainer_snapshotPrefix->setText(QApplication::translate("MainWindow", "Snapshot Prefix:", nullptr));
        lineEdit_netTrainer_snapshotPrefix->setText(QApplication::translate("MainWindow", "minutiae", nullptr));
        label_netTrainer_baseLearningRate->setText(QApplication::translate("MainWindow", "Base Learning Rate:", nullptr));
        label_netTrainer_momentum->setText(QApplication::translate("MainWindow", "Momentum:", nullptr));
        label_netTrainer_weightDecay->setText(QApplication::translate("MainWindow", "Weight Decay:", nullptr));
        label_netTrainer_gamma->setText(QApplication::translate("MainWindow", "Gamma:", nullptr));
        label_netTrainer_power->setText(QApplication::translate("MainWindow", "Power:", nullptr));
        groupBox_netTrainer_training->setTitle(QApplication::translate("MainWindow", "Training", nullptr));
        label_netTrainer_progress->setText(QApplication::translate("MainWindow", "Progress:", nullptr));
        pushButton_netTrainer_startTraining->setText(QApplication::translate("MainWindow", "Start Training", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_trainer), QApplication::translate("MainWindow", "Network Trainer", nullptr));
        groupBox_inputModel->setTitle(QApplication::translate("MainWindow", "Input Model", nullptr));
        pushButton_inputModel->setText(QApplication::translate("MainWindow", "Select Model", nullptr));
        label_selectedModel->setText(QApplication::translate("MainWindow", "Selected Model:", nullptr));
        label_selectedModelName->setText(QApplication::translate("MainWindow", "Default Caffe Model", nullptr));
        groupBox_inputImages_2->setTitle(QApplication::translate("MainWindow", "Input Images", nullptr));
        pushButton_inputDirectory_2->setText(QApplication::translate("MainWindow", "Select Directory", nullptr));
        groupBox_fingerprintImage_2->setTitle(QApplication::translate("MainWindow", "Fingerprint Image", nullptr));
        groupBox_minChecker_checkSettings->setTitle(QApplication::translate("MainWindow", "Check Settings", nullptr));
        groupBox_minChecker_mode->setTitle(QApplication::translate("MainWindow", "Mode", nullptr));
        radioButton_minChecker_cpuMode->setText(QApplication::translate("MainWindow", "CPU", nullptr));
        radioButton_minChecker_gpuMode->setText(QApplication::translate("MainWindow", "GPU", nullptr));
        groupBox_minChecker_extactionSettings->setTitle(QApplication::translate("MainWindow", "Extraction", nullptr));
        label_checkBlockSize->setText(QApplication::translate("MainWindow", "Block Size:", nullptr));
        checkBox_variableBlockSize->setText(QApplication::translate("MainWindow", "Variable Block Size", nullptr));
        groupBox__minChecker_checkMode->setTitle(QApplication::translate("MainWindow", "Check Mode", nullptr));
        radioButton_standard->setText(QApplication::translate("MainWindow", "Standard", nullptr));
        label_threshold->setText(QApplication::translate("MainWindow", "Threshold:", nullptr));
        radioButton_heatmap->setText(QApplication::translate("MainWindow", "Heatmap", nullptr));
        label_overlay->setText(QApplication::translate("MainWindow", "Overlay:", nullptr));
        groupBox_heatmapCreationProgress->setTitle(QApplication::translate("MainWindow", "Heatmap Creation Progress", nullptr));
        groupBox_foundedMinutia->setTitle(QApplication::translate("MainWindow", "Founded Minutia   ", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_checker), QApplication::translate("MainWindow", "Minutiae Checker", nullptr));
        groupBox_exTester_inputImages->setTitle(QApplication::translate("MainWindow", "Input Images", nullptr));
        pushButton_exTester_inputDir->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        label_exTester_inputImages->setText(QString());
        label_exTester_overlay->setText(QApplication::translate("MainWindow", "Overlay", nullptr));
        groupBox_exTester_ParameterGeneral->setTitle(QApplication::translate("MainWindow", "General", nullptr));
        label_exTester_BlockSize->setText(QApplication::translate("MainWindow", "Block Size for Orientation Map and Gabor Filter", nullptr));
        groupBox_exTester_ParameterOMap->setTitle(QApplication::translate("MainWindow", "Orientation Map", nullptr));
        label_exTesterGaussianBlurBasic->setText(QApplication::translate("MainWindow", "Gaussian Blur Basic", nullptr));
        label_exTester_BasicOMapBlockSize->setText(QApplication::translate("MainWindow", "Block Size", nullptr));
        label_exTester_BasicOMapSigma->setText(QApplication::translate("MainWindow", "Sigma", nullptr));
        label_exTester_GaussianBlurAdvanced->setText(QApplication::translate("MainWindow", "Gaussian Blur Advanced", nullptr));
        label_exTester_AdvancedOMapBlockSize->setText(QApplication::translate("MainWindow", "Block Size", nullptr));
        label_exTester_AdvancedOMapSigma->setText(QApplication::translate("MainWindow", "Sigma", nullptr));
        groupBox_exTester_frequencyMap->setTitle(QApplication::translate("MainWindow", "Frequency Map", nullptr));
        label_exTester_freqBlockSize->setText(QApplication::translate("MainWindow", "Block Size", nullptr));
        label_exTester_freqExBlockSize->setText(QApplication::translate("MainWindow", "Extraction Block Size", nullptr));
        groupBox_exTester_ParameterGabor->setTitle(QApplication::translate("MainWindow", "Gabor Filter", nullptr));
        label_exTester_GaborSigma->setText(QApplication::translate("MainWindow", "Sigma", nullptr));
        label_exTester_GaborLambda->setText(QApplication::translate("MainWindow", "Lambda", nullptr));
        tabWidget_exTester_settings->setTabText(tabWidget_exTester_settings->indexOf(tab_6), QApplication::translate("MainWindow", "Preprocessing", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Extraction Settings", nullptr));
        label_exTester_exBlockSize->setText(QApplication::translate("MainWindow", "Block Size", nullptr));
        groupBox_exTester_exResults->setTitle(QApplication::translate("MainWindow", "Results", nullptr));
        radioButton_exTester_crossingNumber->setText(QApplication::translate("MainWindow", "Crossing Number", nullptr));
        radioButton_exTester_predictedMinutiae->setText(QApplication::translate("MainWindow", "Predicted Minutiae", nullptr));
        radioButton_exTester_fixedPredictedMinutiae->setText(QApplication::translate("MainWindow", "Predicted Fixed Minutiae", nullptr));
        tabWidget_exTester_settings->setTabText(tabWidget_exTester_settings->indexOf(tab_7), QApplication::translate("MainWindow", "Extraction", nullptr));
        groupBox_exTester_mode->setTitle(QApplication::translate("MainWindow", "Mode", nullptr));
        radioButton_exTester_cpuMode->setText(QApplication::translate("MainWindow", "CPU", nullptr));
        label_exTester_threadNum->setText(QApplication::translate("MainWindow", "Threads:", nullptr));
        radioButton_exTester_gpuMode->setText(QApplication::translate("MainWindow", "GPU", nullptr));
        groupBox_exTester_preprocessing->setTitle(QApplication::translate("MainWindow", "Preprocessing", nullptr));
        checkBox_exTester_contrast->setText(QApplication::translate("MainWindow", "Enhance the Contrast", nullptr));
        checkBox_exTester_holeRemover->setText(QApplication::translate("MainWindow", "Remove the Holes", nullptr));
        label_exTester_removeHoles->setText(QApplication::translate("MainWindow", "Size", nullptr));
        checkBox_exTester_advancedOMap->setText(QApplication::translate("MainWindow", "Use the Advanced Orientation Map", nullptr));
        checkBox_exTester_mask->setText(QApplication::translate("MainWindow", "Use the Mask", nullptr));
        checkBox_exTester_qualityMap->setText(QApplication::translate("MainWindow", "Use the Quality Map", nullptr));
        groupBox_exTester_exFeatures_2->setTitle(QApplication::translate("MainWindow", "Extraction", nullptr));
        checkBox_exTester_orientationFixer->setText(QApplication::translate("MainWindow", "Use the Orientation Fixer", nullptr));
        checkBox_exTester_varBlockSize->setText(QApplication::translate("MainWindow", "Use Variable Block Size", nullptr));
        tabWidget_exTester_settings->setTabText(tabWidget_exTester_settings->indexOf(tab_features), QApplication::translate("MainWindow", "Features", nullptr));
        label_exExter_original->setText(QApplication::translate("MainWindow", "Original", nullptr));
        label_exExter_mask->setText(QApplication::translate("MainWindow", "Mask", nullptr));
        label_exExter_omap->setText(QApplication::translate("MainWindow", "Map", nullptr));
        comboBox_exTester_map->setItemText(0, QApplication::translate("MainWindow", "Orientation", nullptr));
        comboBox_exTester_map->setItemText(1, QApplication::translate("MainWindow", "Quality", nullptr));
        comboBox_exTester_map->setItemText(2, QApplication::translate("MainWindow", "Frequency", nullptr));

        label_exExter_enhanced->setText(QApplication::translate("MainWindow", "Enhanced", nullptr));
        label_exExter_binarized->setText(QApplication::translate("MainWindow", "Binarized", nullptr));
        label_exExter_skeleton->setText(QApplication::translate("MainWindow", "Skeleton", nullptr));
        checkBox_exTester_invertedSkeleton->setText(QApplication::translate("MainWindow", "Inverted", nullptr));
        tabWidget_exTester_results->setTabText(tabWidget_exTester_results->indexOf(tab_8), QApplication::translate("MainWindow", "Preprocessing", nullptr));
        tabWidget_exTester_results->setTabText(tabWidget_exTester_results->indexOf(tab_extraction), QApplication::translate("MainWindow", "Extraction", nullptr));
        tabWidget_exTester_results->setTabText(tabWidget_exTester_results->indexOf(tab_large), QApplication::translate("MainWindow", "Large View", nullptr));
        tabWidget_exTester_results->setTabText(tabWidget_exTester_results->indexOf(tab_log), QApplication::translate("MainWindow", "Log", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_extractionTester), QApplication::translate("MainWindow", "Extraction Tester", nullptr));
        pushButton_inputDatabase->setText(QApplication::translate("MainWindow", "Select Database", nullptr));
        label_selectedDbName->setText(QString());
        label_numberOfSubject->setText(QApplication::translate("MainWindow", "Number of subjects:", nullptr));
        label_imagesPerSubject->setText(QApplication::translate("MainWindow", "Images per subjects:", nullptr));
        groupBox_dbTester_mode->setTitle(QApplication::translate("MainWindow", "Mode", nullptr));
        radioButton_dbTester_cpuMode->setText(QApplication::translate("MainWindow", "CPU", nullptr));
        label_dbTester_threadNum->setText(QApplication::translate("MainWindow", "Threads:", nullptr));
        radioButton_dbTester_gpuMode->setText(QApplication::translate("MainWindow", "GPU", nullptr));
        tabWidget_testerSettings->setTabText(tabWidget_testerSettings->indexOf(tab_3), QApplication::translate("MainWindow", "Input", nullptr));
        groupBox_matcher->setTitle(QApplication::translate("MainWindow", "Matcher", nullptr));
        radioButton_matcherSuprema->setText(QApplication::translate("MainWindow", "Suprema", nullptr));
        radioButton_matcherBozorth->setText(QApplication::translate("MainWindow", "Bozorth3", nullptr));
        groupBox_dbTester_preprocessing->setTitle(QApplication::translate("MainWindow", "Preprocessing", nullptr));
        checkBox_dbTester_contrastEnhancement->setText(QApplication::translate("MainWindow", "Use Contrast Enhancement", nullptr));
        checkBox_dbTester_advancedOrientationMap->setText(QApplication::translate("MainWindow", "Use Advanced Orientation Map", nullptr));
        checkBox_dbTester_qualityMap->setText(QApplication::translate("MainWindow", "Use Quality Map", nullptr));
        checkBox_dbTester_mask->setText(QApplication::translate("MainWindow", "Use Mask", nullptr));
        checkBox_dbTester_invertedSkeleton->setText(QApplication::translate("MainWindow", "Generate Inverted Skeleton", nullptr));
        checkBox_dbTester_removeHoles->setText(QApplication::translate("MainWindow", "Remove Holes", nullptr));
        label_dbTester_holeSize->setText(QApplication::translate("MainWindow", "Hole Size:", nullptr));
        groupBox_dbTester_Extraction->setTitle(QApplication::translate("MainWindow", "Extracition", nullptr));
        checkBox_dbTester_fixOrientations->setText(QApplication::translate("MainWindow", "Fix Minutiae Orientations", nullptr));
        checkBox_dbTester_variableBlockSize->setText(QApplication::translate("MainWindow", "Use Variable Block Size", nullptr));
        tabWidget_testerSettings->setTabText(tabWidget_testerSettings->indexOf(tab_4), QApplication::translate("MainWindow", "Settings", nullptr));
        groupBox_dbTester_ParameterGeneral->setTitle(QApplication::translate("MainWindow", "General", nullptr));
        label_dbTester_BlockSize->setText(QApplication::translate("MainWindow", "Block Size for Orientation Map and Gabor Filter", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Frequency Map", nullptr));
        label_dbTester_freqBlockSize->setText(QApplication::translate("MainWindow", "Block Size:", nullptr));
        label_dbTester_freqExBlockSize->setText(QApplication::translate("MainWindow", "Extraction Block Size:", nullptr));
        groupBox_dbTester_ParameterOMap->setTitle(QApplication::translate("MainWindow", "Orientation Map", nullptr));
        label_dbTesterGaussianBlurBasic->setText(QApplication::translate("MainWindow", "Gaussian Blur Basic", nullptr));
        label_dbTester_BasicOMapBlockSize->setText(QApplication::translate("MainWindow", "Block Size", nullptr));
        label_ddbTester_BasicOMapSigma->setText(QApplication::translate("MainWindow", "Sigma", nullptr));
        label_dbTesterGaussianBlurAdvanced->setText(QApplication::translate("MainWindow", "Gaussian Blur Advanced", nullptr));
        label_dbTester_AdvancedOMapBlockSize->setText(QApplication::translate("MainWindow", "Block Size", nullptr));
        label_dbTester_AdvancedOMapSigma->setText(QApplication::translate("MainWindow", "Sigma", nullptr));
        groupBox_dbTester_ParameterGabor->setTitle(QApplication::translate("MainWindow", "Gabor Filter", nullptr));
        label_dbTester_GaborSigma->setText(QApplication::translate("MainWindow", "Sigma", nullptr));
        label_dbTester_GaborLambda->setText(QApplication::translate("MainWindow", "Lambda", nullptr));
        tabWidget_testerSettings->setTabText(tabWidget_testerSettings->indexOf(tab_5), QApplication::translate("MainWindow", "Parameters", nullptr));
        pushButton_startTesting->setText(QApplication::translate("MainWindow", "Start Testing", nullptr));
        groupBox_dbTester_Log->setTitle(QApplication::translate("MainWindow", "Log", nullptr));
        groupBox_dbTester_Results->setTitle(QApplication::translate("MainWindow", "Results", nullptr));
        tabWidget_testResults->setTabText(tabWidget_testResults->indexOf(tab_farfrr), QApplication::translate("MainWindow", "FMR / FNMR", nullptr));
        tabWidget_testResults->setTabText(tabWidget_testResults->indexOf(tab_roc), QApplication::translate("MainWindow", "ROC", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_dbTester), QApplication::translate("MainWindow", "Database Tester", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
