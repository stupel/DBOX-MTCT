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
#include <QtWidgets/QFrame>
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
    QGridLayout *gridLayout_9;
    QTabWidget *tabWidget_main;
    QWidget *tab_marker;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_inputImages;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_inputDirectory;
    QListWidget *listWidget_inputImages;
    QGroupBox *groupBox_settings;
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
    QCheckBox *checkBox_rotations;
    QHBoxLayout *horizontalLayout_17;
    QCheckBox *checkBox_blur;
    QSpacerItem *horizontalSpacer_9;
    QDoubleSpinBox *doubleSpinBox_blur;
    QHBoxLayout *horizontalLayout_25;
    QCheckBox *checkBox_irisBlur;
    QSpacerItem *horizontalSpacer_24;
    QDoubleSpinBox *doubleSpinBox_irisBlur;
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
    QGroupBox *groupBox_minutiaeList;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget_minutiae;
    QGroupBox *groupBox_output;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_outputPath;
    QLineEdit *lineEdit_outputDirectory;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_outputDirectory;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_outputFormat;
    QComboBox *comboBox_outputFormat;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_saveBlocks;
    QProgressBar *progressBar_savingBlocks;
    QWidget *tab_trainer;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_imageBlocksInput;
    QVBoxLayout *verticalLayout_19;
    QPushButton *pushButton_trainerInputDirectory;
    QLabel *label_trainerInputDirectory;
    QTreeView *treeView_networkTrainer;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBox_settings_2;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox_inputBlocks;
    QVBoxLayout *verticalLayout_20;
    QCheckBox *checkBox_trainerOriginals;
    QCheckBox *checkBox_trainerRotations;
    QCheckBox *checkBox_trainerBlurred;
    QCheckBox *checkBox_trainerIrisBlurred;
    QSpacerItem *verticalSpacer_7;
    QGroupBox *groupBox_training;
    QVBoxLayout *verticalLayout_24;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBox_testSet;
    QSpinBox *spinBox_trainSet;
    QLabel *label_testSet;
    QLabel *label_trainSet;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_caffeModel;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_defaultCaffeModel;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *radioButton_customCaffeModel;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line_2;
    QGridLayout *gridLayout_3;
    QLabel *label_caffeModelPrototxt;
    QLineEdit *lineEdit_caffeModelPrototxt;
    QPushButton *pushButton_caffeModelPrototxt;
    QLabel *label_caffeSolverPrototxt;
    QLineEdit *lineEdit_caffeSolverPrototxt;
    QPushButton *pushButton_caffeSolverPrototxt;
    QGroupBox *groupBox_output_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_outputFolder;
    QLineEdit *lineEdit_trainerOutputFolder;
    QPushButton *pushButton_outputFolder;
    QGroupBox *groupBox_trainingLog;
    QVBoxLayout *verticalLayout_25;
    QTextBrowser *textBrowser_networkTrainerLog;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_trainer_progress;
    QProgressBar *progressBar_training;
    QPushButton *pushButton_startTraining;
    QWidget *tab_checker;
    QHBoxLayout *horizontalLayout_11;
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
    QVBoxLayout *verticalLayout_26;
    QGroupBox *groupBox_checkSettings;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_checkBlockSize;
    QSpinBox *spinBox_checkBlockSize;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox_variableBlockSize;
    QFrame *line;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_standard;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_threshold;
    QSpinBox *spinBox_threshold;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *radioButton_heatmap;
    QHBoxLayout *horizontalLayout_2;
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
    QWidget *tab_features;
    QVBoxLayout *verticalLayout_57;
    QGroupBox *groupBox_exTester_threadNum;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_exTester_threadNum;
    QSpacerItem *horizontalSpacer_38;
    QSpinBox *spinBox_exTester_threadNum;
    QGroupBox *groupBox_exTester_preprocessing;
    QVBoxLayout *verticalLayout_56;
    QCheckBox *checkBox_exTester_contrast;
    QHBoxLayout *horizontalLayout_43;
    QCheckBox *checkBox_exTester_removeHoles;
    QSpacerItem *horizontalSpacer_37;
    QLabel *label_exTester_removeHoles;
    QSpinBox *spinBox_exTester_holeSize;
    QCheckBox *checkBox_exTester_gaborFilterGPU;
    QCheckBox *checkBox_exTester_mask;
    QCheckBox *checkBox_exTester_qualityMap;
    QCheckBox *checkBox_exTester_frequencyMap;
    QCheckBox *checkBox_exTester_fixOrientations;
    QSpacerItem *verticalSpacer_11;
    QWidget *tab_7;
    QTabWidget *tabWidget_exTester_results;
    QWidget *tab_8;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_45;
    QLabel *label_exExter_original;
    QGraphicsView *graphicsView_exExter_original;
    QVBoxLayout *verticalLayout_46;
    QLabel *label_exExter_mask;
    QGraphicsView *graphicsView_exExter_mask;
    QVBoxLayout *verticalLayout_47;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_exExter_omap;
    QComboBox *comboBox_exTester_map;
    QGraphicsView *graphicsView_exExter_map;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_48;
    QLabel *label_exExter_enhanced;
    QGraphicsView *graphicsView_exExter_enhanced;
    QVBoxLayout *verticalLayout_49;
    QLabel *label_exExter_binarized;
    QGraphicsView *graphicsView_exExter_binarized;
    QVBoxLayout *verticalLayout_50;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_exExter_skeleton;
    QCheckBox *checkBox_exTester_invertedSkeleton;
    QGraphicsView *graphicsView_exExter_skeleton;
    QWidget *tab_extraction;
    QWidget *tab_large;
    QWidget *tab_log;
    QVBoxLayout *verticalLayout_51;
    QTextBrowser *textBrowser_exTester_log;
    QWidget *tab_dbTester;
    QHBoxLayout *horizontalLayout_28;
    QVBoxLayout *verticalLayout_37;
    QTabWidget *tabWidget_testerSettings;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_29;
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
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_imageToProcess;
    QSpinBox *spinBox_imageToProcess;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_36;
    QGroupBox *groupBox_matcher;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *radioButton_matcherBozorth;
    QRadioButton *radioButton_matcherMCC;
    QRadioButton *radioButton_matcherSuprema;
    QCheckBox *checkBox_dbTesterUseMask;
    QCheckBox *checkBox_dbTester_freqMap;
    QCheckBox *checkBox_dbTesterUseFixOrientations;
    QCheckBox *checkBox_dbTester_contrastEnhancement;
    QGridLayout *gridLayout_7;
    QLabel *label_dbTester_holeSize;
    QCheckBox *checkBox_dbTester_removeHoles;
    QSpinBox *spinBox_dbTester_holeSize;
    QSpacerItem *horizontalSpacer_35;
    QCheckBox *checkBox_dbTesterUseVariableBlockSize;
    QCheckBox *checkBox_dbTesterUseDistinctMinutiae;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_38;
    QGroupBox *groupBox_dbTester_ParameterGeneral;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_dbTester_BlockSize;
    QSpacerItem *horizontalSpacer_25;
    QSpinBox *spinBox_dbTester_BlockSize;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_54;
    QLabel *label_dbTester_freqBlockSize;
    QLabel *label_dbTester_freqExBlockSize;
    QVBoxLayout *verticalLayout_53;
    QSpinBox *spinBox_dbTester_freqBlockSize;
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
    QWidget *tab;
    QVBoxLayout *verticalLayout_40;
    QGroupBox *groupBox_dbTester_iteration;
    QGridLayout *gridLayout_5;
    QLabel *label_dbTester_iterBlockSize;
    QSpinBox *spinBox_dbTester_iterBlockSize;
    QLabel *label_dbTester_iterSigma;
    QSpinBox *spinBox_dbTester_iterSigma;
    QLabel *label_dbTester_iterLambda;
    QSpinBox *spinBox_dbTester_iterLambda;
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
    QCustomPlot *widget_testRoc;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1168, 751);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_9 = new QGridLayout(centralWidget);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
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
        groupBox_inputImages = new QGroupBox(tab_marker);
        groupBox_inputImages->setObjectName(QStringLiteral("groupBox_inputImages"));
        groupBox_inputImages->setMinimumSize(QSize(200, 0));
        groupBox_inputImages->setMaximumSize(QSize(200, 16777215));
        verticalLayout_9 = new QVBoxLayout(groupBox_inputImages);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pushButton_inputDirectory = new QPushButton(groupBox_inputImages);
        pushButton_inputDirectory->setObjectName(QStringLiteral("pushButton_inputDirectory"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_inputDirectory->sizePolicy().hasHeightForWidth());
        pushButton_inputDirectory->setSizePolicy(sizePolicy);
        pushButton_inputDirectory->setMaximumSize(QSize(100, 16777215));

        verticalLayout_8->addWidget(pushButton_inputDirectory);

        listWidget_inputImages = new QListWidget(groupBox_inputImages);
        listWidget_inputImages->setObjectName(QStringLiteral("listWidget_inputImages"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget_inputImages->sizePolicy().hasHeightForWidth());
        listWidget_inputImages->setSizePolicy(sizePolicy1);
        listWidget_inputImages->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_8->addWidget(listWidget_inputImages);


        verticalLayout_9->addLayout(verticalLayout_8);


        verticalLayout_5->addWidget(groupBox_inputImages);

        groupBox_settings = new QGroupBox(tab_marker);
        groupBox_settings->setObjectName(QStringLiteral("groupBox_settings"));
        groupBox_settings->setMaximumSize(QSize(200, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_settings);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_minutiaeBlockSize = new QLabel(groupBox_settings);
        label_minutiaeBlockSize->setObjectName(QStringLiteral("label_minutiaeBlockSize"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_minutiaeBlockSize->sizePolicy().hasHeightForWidth());
        label_minutiaeBlockSize->setSizePolicy(sizePolicy2);
        label_minutiaeBlockSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_minutiaeBlockSize, 0, 0, 1, 1);

        spinBox_minutiaeBlockSize = new QSpinBox(groupBox_settings);
        spinBox_minutiaeBlockSize->setObjectName(QStringLiteral("spinBox_minutiaeBlockSize"));
        sizePolicy.setHeightForWidth(spinBox_minutiaeBlockSize->sizePolicy().hasHeightForWidth());
        spinBox_minutiaeBlockSize->setSizePolicy(sizePolicy);
        spinBox_minutiaeBlockSize->setValue(19);

        gridLayout->addWidget(spinBox_minutiaeBlockSize, 0, 1, 1, 1);

        label_additionalBlocks = new QLabel(groupBox_settings);
        label_additionalBlocks->setObjectName(QStringLiteral("label_additionalBlocks"));
        sizePolicy2.setHeightForWidth(label_additionalBlocks->sizePolicy().hasHeightForWidth());
        label_additionalBlocks->setSizePolicy(sizePolicy2);
        label_additionalBlocks->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_additionalBlocks, 1, 0, 1, 1);

        spinBox_additionalBlocks = new QSpinBox(groupBox_settings);
        spinBox_additionalBlocks->setObjectName(QStringLiteral("spinBox_additionalBlocks"));
        sizePolicy.setHeightForWidth(spinBox_additionalBlocks->sizePolicy().hasHeightForWidth());
        spinBox_additionalBlocks->setSizePolicy(sizePolicy);
        spinBox_additionalBlocks->setValue(3);

        gridLayout->addWidget(spinBox_additionalBlocks, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        groupBox_minutiaeType = new QGroupBox(groupBox_settings);
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

        groupBox_transformations = new QGroupBox(groupBox_settings);
        groupBox_transformations->setObjectName(QStringLiteral("groupBox_transformations"));
        verticalLayout = new QVBoxLayout(groupBox_transformations);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_rotations = new QCheckBox(groupBox_transformations);
        checkBox_rotations->setObjectName(QStringLiteral("checkBox_rotations"));
        checkBox_rotations->setChecked(true);

        verticalLayout->addWidget(checkBox_rotations);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        checkBox_blur = new QCheckBox(groupBox_transformations);
        checkBox_blur->setObjectName(QStringLiteral("checkBox_blur"));
        checkBox_blur->setChecked(true);

        horizontalLayout_17->addWidget(checkBox_blur);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_9);

        doubleSpinBox_blur = new QDoubleSpinBox(groupBox_transformations);
        doubleSpinBox_blur->setObjectName(QStringLiteral("doubleSpinBox_blur"));
        doubleSpinBox_blur->setMinimumSize(QSize(50, 0));
        doubleSpinBox_blur->setMaximumSize(QSize(50, 16777215));
        doubleSpinBox_blur->setDecimals(1);
        doubleSpinBox_blur->setMinimum(0.1);
        doubleSpinBox_blur->setMaximum(10);
        doubleSpinBox_blur->setSingleStep(0.1);
        doubleSpinBox_blur->setValue(1.1);

        horizontalLayout_17->addWidget(doubleSpinBox_blur);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        checkBox_irisBlur = new QCheckBox(groupBox_transformations);
        checkBox_irisBlur->setObjectName(QStringLiteral("checkBox_irisBlur"));
        checkBox_irisBlur->setChecked(true);

        horizontalLayout_25->addWidget(checkBox_irisBlur);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_24);

        doubleSpinBox_irisBlur = new QDoubleSpinBox(groupBox_transformations);
        doubleSpinBox_irisBlur->setObjectName(QStringLiteral("doubleSpinBox_irisBlur"));
        doubleSpinBox_irisBlur->setMinimumSize(QSize(50, 0));
        doubleSpinBox_irisBlur->setMaximumSize(QSize(50, 16777215));
        doubleSpinBox_irisBlur->setDecimals(1);
        doubleSpinBox_irisBlur->setMinimum(0.1);
        doubleSpinBox_irisBlur->setMaximum(10);
        doubleSpinBox_irisBlur->setSingleStep(0.1);
        doubleSpinBox_irisBlur->setValue(1.7);

        horizontalLayout_25->addWidget(doubleSpinBox_irisBlur);


        verticalLayout->addLayout(horizontalLayout_25);


        verticalLayout_3->addWidget(groupBox_transformations);


        verticalLayout_5->addWidget(groupBox_settings);


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
        label_blockIrisBlur->setMinimumSize(QSize(60, 0));
        label_blockIrisBlur->setMaximumSize(QSize(60, 16777215));
        label_blockIrisBlur->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_blockIrisBlur);

        horizontalSpacer_23 = new QSpacerItem(17, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_23);


        verticalLayout_35->addLayout(horizontalLayout_23);


        horizontalLayout_24->addLayout(verticalLayout_35);


        verticalLayout_18->addWidget(groupBox_blockPreview);

        groupBox_minutiaeList = new QGroupBox(tab_marker);
        groupBox_minutiaeList->setObjectName(QStringLiteral("groupBox_minutiaeList"));
        groupBox_minutiaeList->setMinimumSize(QSize(270, 0));
        groupBox_minutiaeList->setMaximumSize(QSize(270, 16777215));
        verticalLayout_4 = new QVBoxLayout(groupBox_minutiaeList);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableWidget_minutiae = new QTableWidget(groupBox_minutiaeList);
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


        verticalLayout_18->addWidget(groupBox_minutiaeList);

        groupBox_output = new QGroupBox(tab_marker);
        groupBox_output->setObjectName(QStringLiteral("groupBox_output"));
        groupBox_output->setMinimumSize(QSize(0, 145));
        groupBox_output->setMaximumSize(QSize(270, 160));
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

        lineEdit_outputDirectory = new QLineEdit(groupBox_output);
        lineEdit_outputDirectory->setObjectName(QStringLiteral("lineEdit_outputDirectory"));
        lineEdit_outputDirectory->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_outputDirectory);


        verticalLayout_10->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_outputDirectory = new QPushButton(groupBox_output);
        pushButton_outputDirectory->setObjectName(QStringLiteral("pushButton_outputDirectory"));
        sizePolicy.setHeightForWidth(pushButton_outputDirectory->sizePolicy().hasHeightForWidth());
        pushButton_outputDirectory->setSizePolicy(sizePolicy);
        pushButton_outputDirectory->setMinimumSize(QSize(100, 0));
        pushButton_outputDirectory->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(pushButton_outputDirectory);


        verticalLayout_10->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_outputFormat = new QLabel(groupBox_output);
        label_outputFormat->setObjectName(QStringLiteral("label_outputFormat"));

        horizontalLayout->addWidget(label_outputFormat);

        comboBox_outputFormat = new QComboBox(groupBox_output);
        comboBox_outputFormat->addItem(QString());
        comboBox_outputFormat->addItem(QString());
        comboBox_outputFormat->setObjectName(QStringLiteral("comboBox_outputFormat"));

        horizontalLayout->addWidget(comboBox_outputFormat);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_saveBlocks = new QPushButton(groupBox_output);
        pushButton_saveBlocks->setObjectName(QStringLiteral("pushButton_saveBlocks"));
        pushButton_saveBlocks->setMinimumSize(QSize(100, 0));
        pushButton_saveBlocks->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(pushButton_saveBlocks);


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
        horizontalLayout_9 = new QHBoxLayout(tab_trainer);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        groupBox_imageBlocksInput = new QGroupBox(tab_trainer);
        groupBox_imageBlocksInput->setObjectName(QStringLiteral("groupBox_imageBlocksInput"));
        groupBox_imageBlocksInput->setMaximumSize(QSize(280, 16777215));
        verticalLayout_19 = new QVBoxLayout(groupBox_imageBlocksInput);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        pushButton_trainerInputDirectory = new QPushButton(groupBox_imageBlocksInput);
        pushButton_trainerInputDirectory->setObjectName(QStringLiteral("pushButton_trainerInputDirectory"));
        pushButton_trainerInputDirectory->setMaximumSize(QSize(100, 16777215));

        verticalLayout_19->addWidget(pushButton_trainerInputDirectory);

        label_trainerInputDirectory = new QLabel(groupBox_imageBlocksInput);
        label_trainerInputDirectory->setObjectName(QStringLiteral("label_trainerInputDirectory"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_trainerInputDirectory->sizePolicy().hasHeightForWidth());
        label_trainerInputDirectory->setSizePolicy(sizePolicy5);
        label_trainerInputDirectory->setWordWrap(true);

        verticalLayout_19->addWidget(label_trainerInputDirectory);

        treeView_networkTrainer = new QTreeView(groupBox_imageBlocksInput);
        treeView_networkTrainer->setObjectName(QStringLiteral("treeView_networkTrainer"));
        treeView_networkTrainer->setMaximumSize(QSize(260, 16777215));

        verticalLayout_19->addWidget(treeView_networkTrainer);


        horizontalLayout_9->addWidget(groupBox_imageBlocksInput);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        groupBox_settings_2 = new QGroupBox(tab_trainer);
        groupBox_settings_2->setObjectName(QStringLiteral("groupBox_settings_2"));
        groupBox_settings_2->setMaximumSize(QSize(16777215, 250));
        verticalLayout_22 = new QVBoxLayout(groupBox_settings_2);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        groupBox_inputBlocks = new QGroupBox(groupBox_settings_2);
        groupBox_inputBlocks->setObjectName(QStringLiteral("groupBox_inputBlocks"));
        groupBox_inputBlocks->setEnabled(true);
        groupBox_inputBlocks->setMinimumSize(QSize(130, 0));
        verticalLayout_20 = new QVBoxLayout(groupBox_inputBlocks);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        checkBox_trainerOriginals = new QCheckBox(groupBox_inputBlocks);
        checkBox_trainerOriginals->setObjectName(QStringLiteral("checkBox_trainerOriginals"));
        checkBox_trainerOriginals->setCheckable(true);
        checkBox_trainerOriginals->setChecked(true);

        verticalLayout_20->addWidget(checkBox_trainerOriginals);

        checkBox_trainerRotations = new QCheckBox(groupBox_inputBlocks);
        checkBox_trainerRotations->setObjectName(QStringLiteral("checkBox_trainerRotations"));
        checkBox_trainerRotations->setChecked(true);

        verticalLayout_20->addWidget(checkBox_trainerRotations);

        checkBox_trainerBlurred = new QCheckBox(groupBox_inputBlocks);
        checkBox_trainerBlurred->setObjectName(QStringLiteral("checkBox_trainerBlurred"));
        checkBox_trainerBlurred->setChecked(true);

        verticalLayout_20->addWidget(checkBox_trainerBlurred);

        checkBox_trainerIrisBlurred = new QCheckBox(groupBox_inputBlocks);
        checkBox_trainerIrisBlurred->setObjectName(QStringLiteral("checkBox_trainerIrisBlurred"));
        checkBox_trainerIrisBlurred->setChecked(true);

        verticalLayout_20->addWidget(checkBox_trainerIrisBlurred);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_7);


        horizontalLayout_8->addWidget(groupBox_inputBlocks);

        groupBox_training = new QGroupBox(groupBox_settings_2);
        groupBox_training->setObjectName(QStringLiteral("groupBox_training"));
        groupBox_training->setEnabled(true);
        verticalLayout_24 = new QVBoxLayout(groupBox_training);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        spinBox_testSet = new QSpinBox(groupBox_training);
        spinBox_testSet->setObjectName(QStringLiteral("spinBox_testSet"));
        spinBox_testSet->setMinimumSize(QSize(50, 0));
        spinBox_testSet->setMaximumSize(QSize(50, 16777215));
        spinBox_testSet->setMinimum(1);
        spinBox_testSet->setMaximum(100);
        spinBox_testSet->setSingleStep(1);
        spinBox_testSet->setValue(20);

        gridLayout_2->addWidget(spinBox_testSet, 1, 1, 1, 1);

        spinBox_trainSet = new QSpinBox(groupBox_training);
        spinBox_trainSet->setObjectName(QStringLiteral("spinBox_trainSet"));
        spinBox_trainSet->setMinimumSize(QSize(50, 0));
        spinBox_trainSet->setMaximumSize(QSize(50, 16777215));
        spinBox_trainSet->setMinimum(1);
        spinBox_trainSet->setMaximum(100);
        spinBox_trainSet->setSingleStep(1);
        spinBox_trainSet->setValue(100);

        gridLayout_2->addWidget(spinBox_trainSet, 0, 1, 1, 1);

        label_testSet = new QLabel(groupBox_training);
        label_testSet->setObjectName(QStringLiteral("label_testSet"));

        gridLayout_2->addWidget(label_testSet, 1, 0, 1, 1);

        label_trainSet = new QLabel(groupBox_training);
        label_trainSet->setObjectName(QStringLiteral("label_trainSet"));

        gridLayout_2->addWidget(label_trainSet, 0, 0, 1, 1);


        verticalLayout_24->addLayout(gridLayout_2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_6);


        horizontalLayout_8->addWidget(groupBox_training);

        groupBox_caffeModel = new QGroupBox(groupBox_settings_2);
        groupBox_caffeModel->setObjectName(QStringLiteral("groupBox_caffeModel"));
        groupBox_caffeModel->setEnabled(false);
        groupBox_caffeModel->setMaximumSize(QSize(16777215, 160));
        verticalLayout_21 = new QVBoxLayout(groupBox_caffeModel);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        radioButton_defaultCaffeModel = new QRadioButton(groupBox_caffeModel);
        radioButton_defaultCaffeModel->setObjectName(QStringLiteral("radioButton_defaultCaffeModel"));
        radioButton_defaultCaffeModel->setMaximumSize(QSize(85, 16777215));
        radioButton_defaultCaffeModel->setChecked(true);

        horizontalLayout_7->addWidget(radioButton_defaultCaffeModel);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        radioButton_customCaffeModel = new QRadioButton(groupBox_caffeModel);
        radioButton_customCaffeModel->setObjectName(QStringLiteral("radioButton_customCaffeModel"));

        horizontalLayout_7->addWidget(radioButton_customCaffeModel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_21->addLayout(horizontalLayout_7);

        line_2 = new QFrame(groupBox_caffeModel);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_21->addWidget(line_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_caffeModelPrototxt = new QLabel(groupBox_caffeModel);
        label_caffeModelPrototxt->setObjectName(QStringLiteral("label_caffeModelPrototxt"));
        label_caffeModelPrototxt->setEnabled(false);

        gridLayout_3->addWidget(label_caffeModelPrototxt, 0, 0, 1, 1);

        lineEdit_caffeModelPrototxt = new QLineEdit(groupBox_caffeModel);
        lineEdit_caffeModelPrototxt->setObjectName(QStringLiteral("lineEdit_caffeModelPrototxt"));
        lineEdit_caffeModelPrototxt->setEnabled(false);

        gridLayout_3->addWidget(lineEdit_caffeModelPrototxt, 0, 1, 1, 1);

        pushButton_caffeModelPrototxt = new QPushButton(groupBox_caffeModel);
        pushButton_caffeModelPrototxt->setObjectName(QStringLiteral("pushButton_caffeModelPrototxt"));
        pushButton_caffeModelPrototxt->setEnabled(false);
        pushButton_caffeModelPrototxt->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(pushButton_caffeModelPrototxt, 0, 2, 1, 1);

        label_caffeSolverPrototxt = new QLabel(groupBox_caffeModel);
        label_caffeSolverPrototxt->setObjectName(QStringLiteral("label_caffeSolverPrototxt"));
        label_caffeSolverPrototxt->setEnabled(false);

        gridLayout_3->addWidget(label_caffeSolverPrototxt, 1, 0, 1, 1);

        lineEdit_caffeSolverPrototxt = new QLineEdit(groupBox_caffeModel);
        lineEdit_caffeSolverPrototxt->setObjectName(QStringLiteral("lineEdit_caffeSolverPrototxt"));
        lineEdit_caffeSolverPrototxt->setEnabled(false);

        gridLayout_3->addWidget(lineEdit_caffeSolverPrototxt, 1, 1, 1, 1);

        pushButton_caffeSolverPrototxt = new QPushButton(groupBox_caffeModel);
        pushButton_caffeSolverPrototxt->setObjectName(QStringLiteral("pushButton_caffeSolverPrototxt"));
        pushButton_caffeSolverPrototxt->setEnabled(false);

        gridLayout_3->addWidget(pushButton_caffeSolverPrototxt, 1, 2, 1, 1);


        verticalLayout_21->addLayout(gridLayout_3);


        horizontalLayout_8->addWidget(groupBox_caffeModel);


        verticalLayout_22->addLayout(horizontalLayout_8);

        groupBox_output_2 = new QGroupBox(groupBox_settings_2);
        groupBox_output_2->setObjectName(QStringLiteral("groupBox_output_2"));
        horizontalLayout_13 = new QHBoxLayout(groupBox_output_2);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_outputFolder = new QLabel(groupBox_output_2);
        label_outputFolder->setObjectName(QStringLiteral("label_outputFolder"));

        horizontalLayout_13->addWidget(label_outputFolder);

        lineEdit_trainerOutputFolder = new QLineEdit(groupBox_output_2);
        lineEdit_trainerOutputFolder->setObjectName(QStringLiteral("lineEdit_trainerOutputFolder"));
        lineEdit_trainerOutputFolder->setReadOnly(true);

        horizontalLayout_13->addWidget(lineEdit_trainerOutputFolder);

        pushButton_outputFolder = new QPushButton(groupBox_output_2);
        pushButton_outputFolder->setObjectName(QStringLiteral("pushButton_outputFolder"));

        horizontalLayout_13->addWidget(pushButton_outputFolder);


        verticalLayout_22->addWidget(groupBox_output_2);


        verticalLayout_23->addWidget(groupBox_settings_2);

        groupBox_trainingLog = new QGroupBox(tab_trainer);
        groupBox_trainingLog->setObjectName(QStringLiteral("groupBox_trainingLog"));
        verticalLayout_25 = new QVBoxLayout(groupBox_trainingLog);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        textBrowser_networkTrainerLog = new QTextBrowser(groupBox_trainingLog);
        textBrowser_networkTrainerLog->setObjectName(QStringLiteral("textBrowser_networkTrainerLog"));

        verticalLayout_25->addWidget(textBrowser_networkTrainerLog);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_trainer_progress = new QLabel(groupBox_trainingLog);
        label_trainer_progress->setObjectName(QStringLiteral("label_trainer_progress"));

        horizontalLayout_12->addWidget(label_trainer_progress);

        progressBar_training = new QProgressBar(groupBox_trainingLog);
        progressBar_training->setObjectName(QStringLiteral("progressBar_training"));
        progressBar_training->setValue(0);
        progressBar_training->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(progressBar_training);

        pushButton_startTraining = new QPushButton(groupBox_trainingLog);
        pushButton_startTraining->setObjectName(QStringLiteral("pushButton_startTraining"));
        pushButton_startTraining->setMinimumSize(QSize(100, 0));
        pushButton_startTraining->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(pushButton_startTraining);


        verticalLayout_25->addLayout(horizontalLayout_12);


        verticalLayout_23->addWidget(groupBox_trainingLog);


        horizontalLayout_9->addLayout(verticalLayout_23);

        tabWidget_main->addTab(tab_trainer, QString());
        tab_checker = new QWidget();
        tab_checker->setObjectName(QStringLiteral("tab_checker"));
        horizontalLayout_11 = new QHBoxLayout(tab_checker);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
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


        horizontalLayout_11->addLayout(verticalLayout_15);

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


        horizontalLayout_11->addWidget(groupBox_fingerprintImage_2);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        groupBox_checkSettings = new QGroupBox(tab_checker);
        groupBox_checkSettings->setObjectName(QStringLiteral("groupBox_checkSettings"));
        groupBox_checkSettings->setMinimumSize(QSize(300, 0));
        groupBox_checkSettings->setMaximumSize(QSize(300, 16777215));
        verticalLayout_16 = new QVBoxLayout(groupBox_checkSettings);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_checkBlockSize = new QLabel(groupBox_checkSettings);
        label_checkBlockSize->setObjectName(QStringLiteral("label_checkBlockSize"));
        label_checkBlockSize->setMinimumSize(QSize(56, 0));
        label_checkBlockSize->setMaximumSize(QSize(56, 16777215));

        horizontalLayout_3->addWidget(label_checkBlockSize);

        spinBox_checkBlockSize = new QSpinBox(groupBox_checkSettings);
        spinBox_checkBlockSize->setObjectName(QStringLiteral("spinBox_checkBlockSize"));
        spinBox_checkBlockSize->setMaximumSize(QSize(45, 16777215));
        spinBox_checkBlockSize->setMinimum(5);
        spinBox_checkBlockSize->setMaximum(40);
        spinBox_checkBlockSize->setValue(19);

        horizontalLayout_3->addWidget(spinBox_checkBlockSize);

        horizontalSpacer_3 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        checkBox_variableBlockSize = new QCheckBox(groupBox_checkSettings);
        checkBox_variableBlockSize->setObjectName(QStringLiteral("checkBox_variableBlockSize"));

        horizontalLayout_3->addWidget(checkBox_variableBlockSize);


        verticalLayout_16->addLayout(horizontalLayout_3);

        line = new QFrame(groupBox_checkSettings);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_16->addWidget(line);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radioButton_standard = new QRadioButton(groupBox_checkSettings);
        radioButton_standard->setObjectName(QStringLiteral("radioButton_standard"));
        radioButton_standard->setChecked(true);

        horizontalLayout_10->addWidget(radioButton_standard);

        horizontalSpacer_6 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        label_threshold = new QLabel(groupBox_checkSettings);
        label_threshold->setObjectName(QStringLiteral("label_threshold"));

        horizontalLayout_10->addWidget(label_threshold);

        spinBox_threshold = new QSpinBox(groupBox_checkSettings);
        spinBox_threshold->setObjectName(QStringLiteral("spinBox_threshold"));
        spinBox_threshold->setMinimumSize(QSize(45, 0));
        spinBox_threshold->setMaximumSize(QSize(45, 16777215));
        spinBox_threshold->setMaximum(100);
        spinBox_threshold->setValue(90);

        horizontalLayout_10->addWidget(spinBox_threshold);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);


        verticalLayout_16->addLayout(horizontalLayout_10);

        radioButton_heatmap = new QRadioButton(groupBox_checkSettings);
        radioButton_heatmap->setObjectName(QStringLiteral("radioButton_heatmap"));

        verticalLayout_16->addWidget(radioButton_heatmap);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_overlay = new QLabel(groupBox_checkSettings);
        label_overlay->setObjectName(QStringLiteral("label_overlay"));

        horizontalLayout_2->addWidget(label_overlay);

        horizontalSlider_overlay = new QSlider(groupBox_checkSettings);
        horizontalSlider_overlay->setObjectName(QStringLiteral("horizontalSlider_overlay"));
        horizontalSlider_overlay->setMaximum(100);
        horizontalSlider_overlay->setValue(100);
        horizontalSlider_overlay->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_overlay);


        verticalLayout_16->addLayout(horizontalLayout_2);


        verticalLayout_26->addWidget(groupBox_checkSettings);

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


        verticalLayout_26->addWidget(groupBox_heatmapCreationProgress);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_26->addItem(verticalSpacer_3);

        groupBox_foundedMinutia = new QGroupBox(tab_checker);
        groupBox_foundedMinutia->setObjectName(QStringLiteral("groupBox_foundedMinutia"));
        groupBox_foundedMinutia->setMinimumSize(QSize(300, 0));
        groupBox_foundedMinutia->setMaximumSize(QSize(300, 160));
        verticalLayout_13 = new QVBoxLayout(groupBox_foundedMinutia);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        tableWidget_foundedMinutia = new QTableWidget(groupBox_foundedMinutia);
        tableWidget_foundedMinutia->setObjectName(QStringLiteral("tableWidget_foundedMinutia"));
        tableWidget_foundedMinutia->setMaximumSize(QSize(280, 150));
        tableWidget_foundedMinutia->setFrameShape(QFrame::NoFrame);

        verticalLayout_13->addWidget(tableWidget_foundedMinutia);


        verticalLayout_26->addWidget(groupBox_foundedMinutia);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_26->addItem(verticalSpacer);


        horizontalLayout_11->addLayout(verticalLayout_26);

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
        tab_features = new QWidget();
        tab_features->setObjectName(QStringLiteral("tab_features"));
        verticalLayout_57 = new QVBoxLayout(tab_features);
        verticalLayout_57->setSpacing(6);
        verticalLayout_57->setContentsMargins(11, 11, 11, 11);
        verticalLayout_57->setObjectName(QStringLiteral("verticalLayout_57"));
        groupBox_exTester_threadNum = new QGroupBox(tab_features);
        groupBox_exTester_threadNum->setObjectName(QStringLiteral("groupBox_exTester_threadNum"));
        horizontalLayout_44 = new QHBoxLayout(groupBox_exTester_threadNum);
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        label_exTester_threadNum = new QLabel(groupBox_exTester_threadNum);
        label_exTester_threadNum->setObjectName(QStringLiteral("label_exTester_threadNum"));

        horizontalLayout_44->addWidget(label_exTester_threadNum);

        horizontalSpacer_38 = new QSpacerItem(54, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_44->addItem(horizontalSpacer_38);

        spinBox_exTester_threadNum = new QSpinBox(groupBox_exTester_threadNum);
        spinBox_exTester_threadNum->setObjectName(QStringLiteral("spinBox_exTester_threadNum"));

        horizontalLayout_44->addWidget(spinBox_exTester_threadNum);


        verticalLayout_57->addWidget(groupBox_exTester_threadNum);

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
        checkBox_exTester_removeHoles = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_removeHoles->setObjectName(QStringLiteral("checkBox_exTester_removeHoles"));
        checkBox_exTester_removeHoles->setChecked(true);

        horizontalLayout_43->addWidget(checkBox_exTester_removeHoles);

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

        checkBox_exTester_gaborFilterGPU = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_gaborFilterGPU->setObjectName(QStringLiteral("checkBox_exTester_gaborFilterGPU"));
        checkBox_exTester_gaborFilterGPU->setChecked(true);

        verticalLayout_56->addWidget(checkBox_exTester_gaborFilterGPU);

        checkBox_exTester_mask = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_mask->setObjectName(QStringLiteral("checkBox_exTester_mask"));
        checkBox_exTester_mask->setChecked(false);

        verticalLayout_56->addWidget(checkBox_exTester_mask);

        checkBox_exTester_qualityMap = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_qualityMap->setObjectName(QStringLiteral("checkBox_exTester_qualityMap"));
        checkBox_exTester_qualityMap->setChecked(true);

        verticalLayout_56->addWidget(checkBox_exTester_qualityMap);

        checkBox_exTester_frequencyMap = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_frequencyMap->setObjectName(QStringLiteral("checkBox_exTester_frequencyMap"));

        verticalLayout_56->addWidget(checkBox_exTester_frequencyMap);

        checkBox_exTester_fixOrientations = new QCheckBox(groupBox_exTester_preprocessing);
        checkBox_exTester_fixOrientations->setObjectName(QStringLiteral("checkBox_exTester_fixOrientations"));

        verticalLayout_56->addWidget(checkBox_exTester_fixOrientations);


        verticalLayout_57->addWidget(groupBox_exTester_preprocessing);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_57->addItem(verticalSpacer_11);

        tabWidget_exTester_settings->addTab(tab_features, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tabWidget_exTester_settings->addTab(tab_7, QString());

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

        graphicsView_exExter_original = new QGraphicsView(tab_8);
        graphicsView_exExter_original->setObjectName(QStringLiteral("graphicsView_exExter_original"));
        graphicsView_exExter_original->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_45->addWidget(graphicsView_exExter_original);


        gridLayout_6->addLayout(verticalLayout_45, 0, 0, 1, 1);

        verticalLayout_46 = new QVBoxLayout();
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        label_exExter_mask = new QLabel(tab_8);
        label_exExter_mask->setObjectName(QStringLiteral("label_exExter_mask"));
        label_exExter_mask->setMinimumSize(QSize(0, 25));

        verticalLayout_46->addWidget(label_exExter_mask);

        graphicsView_exExter_mask = new QGraphicsView(tab_8);
        graphicsView_exExter_mask->setObjectName(QStringLiteral("graphicsView_exExter_mask"));
        graphicsView_exExter_mask->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_46->addWidget(graphicsView_exExter_mask);


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

        graphicsView_exExter_map = new QGraphicsView(tab_8);
        graphicsView_exExter_map->setObjectName(QStringLiteral("graphicsView_exExter_map"));
        graphicsView_exExter_map->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_47->addWidget(graphicsView_exExter_map);


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

        graphicsView_exExter_enhanced = new QGraphicsView(tab_8);
        graphicsView_exExter_enhanced->setObjectName(QStringLiteral("graphicsView_exExter_enhanced"));
        graphicsView_exExter_enhanced->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_48->addWidget(graphicsView_exExter_enhanced);


        gridLayout_6->addLayout(verticalLayout_48, 2, 0, 1, 1);

        verticalLayout_49 = new QVBoxLayout();
        verticalLayout_49->setSpacing(6);
        verticalLayout_49->setObjectName(QStringLiteral("verticalLayout_49"));
        label_exExter_binarized = new QLabel(tab_8);
        label_exExter_binarized->setObjectName(QStringLiteral("label_exExter_binarized"));
        label_exExter_binarized->setMinimumSize(QSize(0, 23));

        verticalLayout_49->addWidget(label_exExter_binarized);

        graphicsView_exExter_binarized = new QGraphicsView(tab_8);
        graphicsView_exExter_binarized->setObjectName(QStringLiteral("graphicsView_exExter_binarized"));
        graphicsView_exExter_binarized->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_49->addWidget(graphicsView_exExter_binarized);


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

        graphicsView_exExter_skeleton = new QGraphicsView(tab_8);
        graphicsView_exExter_skeleton->setObjectName(QStringLiteral("graphicsView_exExter_skeleton"));
        graphicsView_exExter_skeleton->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_50->addWidget(graphicsView_exExter_skeleton);


        gridLayout_6->addLayout(verticalLayout_50, 2, 2, 1, 1);

        tabWidget_exTester_results->addTab(tab_8, QString());
        tab_extraction = new QWidget();
        tab_extraction->setObjectName(QStringLiteral("tab_extraction"));
        tabWidget_exTester_results->addTab(tab_extraction, QString());
        tab_large = new QWidget();
        tab_large->setObjectName(QStringLiteral("tab_large"));
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
        tabWidget_testerSettings->setMaximumSize(QSize(270, 190));
        tabWidget_testerSettings->setTabPosition(QTabWidget::North);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_29 = new QVBoxLayout(tab_3);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
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


        verticalLayout_29->addLayout(horizontalLayout_14);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_29->addItem(verticalSpacer_5);

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


        verticalLayout_29->addLayout(gridLayout_4);

        line_3 = new QFrame(tab_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_29->addWidget(line_3);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        label_imageToProcess = new QLabel(tab_3);
        label_imageToProcess->setObjectName(QStringLiteral("label_imageToProcess"));

        horizontalLayout_41->addWidget(label_imageToProcess);

        spinBox_imageToProcess = new QSpinBox(tab_3);
        spinBox_imageToProcess->setObjectName(QStringLiteral("spinBox_imageToProcess"));
        spinBox_imageToProcess->setMinimumSize(QSize(55, 0));
        spinBox_imageToProcess->setMaximumSize(QSize(55, 16777215));
        spinBox_imageToProcess->setMinimum(1);
        spinBox_imageToProcess->setMaximum(32);
        spinBox_imageToProcess->setValue(1);

        horizontalLayout_41->addWidget(spinBox_imageToProcess);


        verticalLayout_29->addLayout(horizontalLayout_41);

        tabWidget_testerSettings->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_36 = new QVBoxLayout(tab_4);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        groupBox_matcher = new QGroupBox(tab_4);
        groupBox_matcher->setObjectName(QStringLiteral("groupBox_matcher"));
        groupBox_matcher->setMaximumSize(QSize(16777215, 65));
        horizontalLayout_16 = new QHBoxLayout(groupBox_matcher);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        radioButton_matcherBozorth = new QRadioButton(groupBox_matcher);
        radioButton_matcherBozorth->setObjectName(QStringLiteral("radioButton_matcherBozorth"));
        radioButton_matcherBozorth->setChecked(true);

        horizontalLayout_16->addWidget(radioButton_matcherBozorth);

        radioButton_matcherMCC = new QRadioButton(groupBox_matcher);
        radioButton_matcherMCC->setObjectName(QStringLiteral("radioButton_matcherMCC"));

        horizontalLayout_16->addWidget(radioButton_matcherMCC);

        radioButton_matcherSuprema = new QRadioButton(groupBox_matcher);
        radioButton_matcherSuprema->setObjectName(QStringLiteral("radioButton_matcherSuprema"));
        radioButton_matcherSuprema->setChecked(false);

        horizontalLayout_16->addWidget(radioButton_matcherSuprema);


        verticalLayout_36->addWidget(groupBox_matcher);

        checkBox_dbTesterUseMask = new QCheckBox(tab_4);
        checkBox_dbTesterUseMask->setObjectName(QStringLiteral("checkBox_dbTesterUseMask"));
        checkBox_dbTesterUseMask->setChecked(true);

        verticalLayout_36->addWidget(checkBox_dbTesterUseMask);

        checkBox_dbTester_freqMap = new QCheckBox(tab_4);
        checkBox_dbTester_freqMap->setObjectName(QStringLiteral("checkBox_dbTester_freqMap"));

        verticalLayout_36->addWidget(checkBox_dbTester_freqMap);

        checkBox_dbTesterUseFixOrientations = new QCheckBox(tab_4);
        checkBox_dbTesterUseFixOrientations->setObjectName(QStringLiteral("checkBox_dbTesterUseFixOrientations"));
        checkBox_dbTesterUseFixOrientations->setChecked(true);

        verticalLayout_36->addWidget(checkBox_dbTesterUseFixOrientations);

        checkBox_dbTester_contrastEnhancement = new QCheckBox(tab_4);
        checkBox_dbTester_contrastEnhancement->setObjectName(QStringLiteral("checkBox_dbTester_contrastEnhancement"));
        checkBox_dbTester_contrastEnhancement->setChecked(true);

        verticalLayout_36->addWidget(checkBox_dbTester_contrastEnhancement);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_dbTester_holeSize = new QLabel(tab_4);
        label_dbTester_holeSize->setObjectName(QStringLiteral("label_dbTester_holeSize"));

        gridLayout_7->addWidget(label_dbTester_holeSize, 0, 2, 1, 1);

        checkBox_dbTester_removeHoles = new QCheckBox(tab_4);
        checkBox_dbTester_removeHoles->setObjectName(QStringLiteral("checkBox_dbTester_removeHoles"));
        checkBox_dbTester_removeHoles->setChecked(true);

        gridLayout_7->addWidget(checkBox_dbTester_removeHoles, 0, 0, 1, 1);

        spinBox_dbTester_holeSize = new QSpinBox(tab_4);
        spinBox_dbTester_holeSize->setObjectName(QStringLiteral("spinBox_dbTester_holeSize"));
        spinBox_dbTester_holeSize->setMinimumSize(QSize(55, 0));
        spinBox_dbTester_holeSize->setMaximumSize(QSize(60, 16777215));
        spinBox_dbTester_holeSize->setMinimum(1);
        spinBox_dbTester_holeSize->setMaximum(50);
        spinBox_dbTester_holeSize->setValue(20);

        gridLayout_7->addWidget(spinBox_dbTester_holeSize, 0, 3, 1, 1);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_35, 0, 1, 1, 1);


        verticalLayout_36->addLayout(gridLayout_7);

        checkBox_dbTesterUseVariableBlockSize = new QCheckBox(tab_4);
        checkBox_dbTesterUseVariableBlockSize->setObjectName(QStringLiteral("checkBox_dbTesterUseVariableBlockSize"));

        verticalLayout_36->addWidget(checkBox_dbTesterUseVariableBlockSize);

        checkBox_dbTesterUseDistinctMinutiae = new QCheckBox(tab_4);
        checkBox_dbTesterUseDistinctMinutiae->setObjectName(QStringLiteral("checkBox_dbTesterUseDistinctMinutiae"));

        verticalLayout_36->addWidget(checkBox_dbTesterUseDistinctMinutiae);

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
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalLayout_54 = new QVBoxLayout();
        verticalLayout_54->setSpacing(6);
        verticalLayout_54->setObjectName(QStringLiteral("verticalLayout_54"));
        label_dbTester_freqBlockSize = new QLabel(groupBox);
        label_dbTester_freqBlockSize->setObjectName(QStringLiteral("label_dbTester_freqBlockSize"));

        verticalLayout_54->addWidget(label_dbTester_freqBlockSize);

        label_dbTester_freqExBlockSize = new QLabel(groupBox);
        label_dbTester_freqExBlockSize->setObjectName(QStringLiteral("label_dbTester_freqExBlockSize"));

        verticalLayout_54->addWidget(label_dbTester_freqExBlockSize);


        gridLayout_8->addLayout(verticalLayout_54, 0, 0, 1, 1);

        verticalLayout_53 = new QVBoxLayout();
        verticalLayout_53->setSpacing(6);
        verticalLayout_53->setObjectName(QStringLiteral("verticalLayout_53"));
        spinBox_dbTester_freqBlockSize = new QSpinBox(groupBox);
        spinBox_dbTester_freqBlockSize->setObjectName(QStringLiteral("spinBox_dbTester_freqBlockSize"));
        spinBox_dbTester_freqBlockSize->setMinimumSize(QSize(50, 0));
        spinBox_dbTester_freqBlockSize->setMaximumSize(QSize(55, 16777215));
        spinBox_dbTester_freqBlockSize->setMinimum(1);
        spinBox_dbTester_freqBlockSize->setMaximum(100);
        spinBox_dbTester_freqBlockSize->setValue(8);

        verticalLayout_53->addWidget(spinBox_dbTester_freqBlockSize);

        spinBox_dbTester_freqExBlockSize = new QSpinBox(groupBox);
        spinBox_dbTester_freqExBlockSize->setObjectName(QStringLiteral("spinBox_dbTester_freqExBlockSize"));
        spinBox_dbTester_freqExBlockSize->setMinimumSize(QSize(50, 0));
        spinBox_dbTester_freqExBlockSize->setMaximumSize(QSize(55, 16777215));
        spinBox_dbTester_freqExBlockSize->setMinimum(1);
        spinBox_dbTester_freqExBlockSize->setMaximum(100);
        spinBox_dbTester_freqExBlockSize->setValue(30);

        verticalLayout_53->addWidget(spinBox_dbTester_freqExBlockSize);


        gridLayout_8->addLayout(verticalLayout_53, 0, 1, 1, 1);


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
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_40 = new QVBoxLayout(tab);
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setContentsMargins(11, 11, 11, 11);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        groupBox_dbTester_iteration = new QGroupBox(tab);
        groupBox_dbTester_iteration->setObjectName(QStringLiteral("groupBox_dbTester_iteration"));
        groupBox_dbTester_iteration->setMinimumSize(QSize(0, 122));
        groupBox_dbTester_iteration->setMaximumSize(QSize(16777215, 122));
        gridLayout_5 = new QGridLayout(groupBox_dbTester_iteration);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_dbTester_iterBlockSize = new QLabel(groupBox_dbTester_iteration);
        label_dbTester_iterBlockSize->setObjectName(QStringLiteral("label_dbTester_iterBlockSize"));

        gridLayout_5->addWidget(label_dbTester_iterBlockSize, 0, 0, 1, 1);

        spinBox_dbTester_iterBlockSize = new QSpinBox(groupBox_dbTester_iteration);
        spinBox_dbTester_iterBlockSize->setObjectName(QStringLiteral("spinBox_dbTester_iterBlockSize"));
        spinBox_dbTester_iterBlockSize->setMinimumSize(QSize(50, 0));
        spinBox_dbTester_iterBlockSize->setMaximumSize(QSize(50, 16777215));
        spinBox_dbTester_iterBlockSize->setMaximum(30);
        spinBox_dbTester_iterBlockSize->setSingleStep(1);
        spinBox_dbTester_iterBlockSize->setValue(0);

        gridLayout_5->addWidget(spinBox_dbTester_iterBlockSize, 0, 1, 1, 1);

        label_dbTester_iterSigma = new QLabel(groupBox_dbTester_iteration);
        label_dbTester_iterSigma->setObjectName(QStringLiteral("label_dbTester_iterSigma"));

        gridLayout_5->addWidget(label_dbTester_iterSigma, 1, 0, 1, 1);

        spinBox_dbTester_iterSigma = new QSpinBox(groupBox_dbTester_iteration);
        spinBox_dbTester_iterSigma->setObjectName(QStringLiteral("spinBox_dbTester_iterSigma"));
        spinBox_dbTester_iterSigma->setMinimumSize(QSize(50, 0));
        spinBox_dbTester_iterSigma->setMaximumSize(QSize(50, 16777215));
        spinBox_dbTester_iterSigma->setMaximum(30);

        gridLayout_5->addWidget(spinBox_dbTester_iterSigma, 1, 1, 1, 1);

        label_dbTester_iterLambda = new QLabel(groupBox_dbTester_iteration);
        label_dbTester_iterLambda->setObjectName(QStringLiteral("label_dbTester_iterLambda"));

        gridLayout_5->addWidget(label_dbTester_iterLambda, 2, 0, 1, 1);

        spinBox_dbTester_iterLambda = new QSpinBox(groupBox_dbTester_iteration);
        spinBox_dbTester_iterLambda->setObjectName(QStringLiteral("spinBox_dbTester_iterLambda"));
        spinBox_dbTester_iterLambda->setMinimumSize(QSize(50, 0));
        spinBox_dbTester_iterLambda->setMaximumSize(QSize(50, 16777215));
        spinBox_dbTester_iterLambda->setMaximum(30);

        gridLayout_5->addWidget(spinBox_dbTester_iterLambda, 2, 1, 1, 1);


        verticalLayout_40->addWidget(groupBox_dbTester_iteration);

        tabWidget_testerSettings->addTab(tab, QString());

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
        widget_testRoc = new QCustomPlot(tab_roc);
        widget_testRoc->setObjectName(QStringLiteral("widget_testRoc"));

        verticalLayout_31->addWidget(widget_testRoc);

        tabWidget_testResults->addTab(tab_roc, QString());

        verticalLayout_32->addWidget(tabWidget_testResults);


        horizontalLayout_28->addWidget(groupBox_dbTester_Results);

        tabWidget_main->addTab(tab_dbTester, QString());

        gridLayout_9->addWidget(tabWidget_main, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1168, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_main->setCurrentIndex(3);
        tabWidget_exTester_settings->setCurrentIndex(1);
        tabWidget_exTester_results->setCurrentIndex(0);
        tabWidget_testerSettings->setCurrentIndex(0);
        tabWidget_testResults->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DBOX MTCT", nullptr));
        groupBox_inputImages->setTitle(QApplication::translate("MainWindow", "Input Images", nullptr));
        pushButton_inputDirectory->setText(QApplication::translate("MainWindow", "Select Directory", nullptr));
        groupBox_settings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        label_minutiaeBlockSize->setText(QApplication::translate("MainWindow", "Minutiae Block Size:", nullptr));
        label_additionalBlocks->setText(QApplication::translate("MainWindow", "Additional Blocks +/-:", nullptr));
        groupBox_minutiaeType->setTitle(QApplication::translate("MainWindow", "Minutiae Type", nullptr));
        radioButton_ending->setText(QApplication::translate("MainWindow", "Ending", nullptr));
        radioButton_bifurcation->setText(QApplication::translate("MainWindow", "Bifurcation", nullptr));
        radioButton_nothing->setText(QApplication::translate("MainWindow", "Nothing", nullptr));
        groupBox_transformations->setTitle(QApplication::translate("MainWindow", "Transformations", nullptr));
        checkBox_rotations->setText(QApplication::translate("MainWindow", "Rotations", nullptr));
        checkBox_blur->setText(QApplication::translate("MainWindow", "Blur", nullptr));
        checkBox_irisBlur->setText(QApplication::translate("MainWindow", "Iris Blur", nullptr));
        groupBox_fingerprintImage->setTitle(QApplication::translate("MainWindow", "Fingerprint Image", nullptr));
        groupBox_blockPreview->setTitle(QApplication::translate("MainWindow", "Block Preview", nullptr));
        label_blockOrig->setText(QApplication::translate("MainWindow", "Original", nullptr));
        label_blockBlur->setText(QApplication::translate("MainWindow", "Blurred", nullptr));
        label_blockIrisBlur->setText(QApplication::translate("MainWindow", "Iris Blurred", nullptr));
        groupBox_minutiaeList->setTitle(QApplication::translate("MainWindow", "Minutiae List", nullptr));
        groupBox_output->setTitle(QApplication::translate("MainWindow", "Output", nullptr));
        label_outputPath->setText(QApplication::translate("MainWindow", "Path:", nullptr));
        pushButton_outputDirectory->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        label_outputFormat->setText(QApplication::translate("MainWindow", "File Format:", nullptr));
        comboBox_outputFormat->setItemText(0, QApplication::translate("MainWindow", "*.BMP", nullptr));
        comboBox_outputFormat->setItemText(1, QApplication::translate("MainWindow", "*.TIF", nullptr));

        pushButton_saveBlocks->setText(QApplication::translate("MainWindow", "Save Blocks", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_marker), QApplication::translate("MainWindow", "Minutiae Marker", nullptr));
        groupBox_imageBlocksInput->setTitle(QApplication::translate("MainWindow", "Image Blocks Input", nullptr));
        pushButton_trainerInputDirectory->setText(QApplication::translate("MainWindow", "Select Directory", nullptr));
        label_trainerInputDirectory->setText(QString());
        groupBox_settings_2->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        groupBox_inputBlocks->setTitle(QApplication::translate("MainWindow", "Input Blocks", nullptr));
        checkBox_trainerOriginals->setText(QApplication::translate("MainWindow", "Originals", nullptr));
        checkBox_trainerRotations->setText(QApplication::translate("MainWindow", "Rotations", nullptr));
        checkBox_trainerBlurred->setText(QApplication::translate("MainWindow", "Blurred", nullptr));
        checkBox_trainerIrisBlurred->setText(QApplication::translate("MainWindow", "Iris Blurred", nullptr));
        groupBox_training->setTitle(QApplication::translate("MainWindow", "Training", nullptr));
        label_testSet->setText(QApplication::translate("MainWindow", "Test set (%)", nullptr));
        label_trainSet->setText(QApplication::translate("MainWindow", "Train set (%):", nullptr));
        groupBox_caffeModel->setTitle(QApplication::translate("MainWindow", "Caffe Model", nullptr));
        radioButton_defaultCaffeModel->setText(QApplication::translate("MainWindow", "Use Default", nullptr));
        radioButton_customCaffeModel->setText(QApplication::translate("MainWindow", "Load Custom", nullptr));
        label_caffeModelPrototxt->setText(QApplication::translate("MainWindow", "Model Prototxt:", nullptr));
        pushButton_caffeModelPrototxt->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        label_caffeSolverPrototxt->setText(QApplication::translate("MainWindow", "Solver Prototxt:", nullptr));
        pushButton_caffeSolverPrototxt->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        groupBox_output_2->setTitle(QApplication::translate("MainWindow", "Output", nullptr));
        label_outputFolder->setText(QApplication::translate("MainWindow", "Output folder:", nullptr));
        pushButton_outputFolder->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        groupBox_trainingLog->setTitle(QApplication::translate("MainWindow", "Log", nullptr));
        label_trainer_progress->setText(QApplication::translate("MainWindow", "Progress:", nullptr));
        pushButton_startTraining->setText(QApplication::translate("MainWindow", "Start Training", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_trainer), QApplication::translate("MainWindow", "Network Trainer", nullptr));
        groupBox_inputModel->setTitle(QApplication::translate("MainWindow", "Input Model", nullptr));
        pushButton_inputModel->setText(QApplication::translate("MainWindow", "Select Model", nullptr));
        label_selectedModel->setText(QApplication::translate("MainWindow", "Selected Model:", nullptr));
        label_selectedModelName->setText(QApplication::translate("MainWindow", "Default Caffe Model", nullptr));
        groupBox_inputImages_2->setTitle(QApplication::translate("MainWindow", "Input Images", nullptr));
        pushButton_inputDirectory_2->setText(QApplication::translate("MainWindow", "Select Directory", nullptr));
        groupBox_fingerprintImage_2->setTitle(QApplication::translate("MainWindow", "Fingerprint Image", nullptr));
        groupBox_checkSettings->setTitle(QApplication::translate("MainWindow", "Check Settings", nullptr));
        label_checkBlockSize->setText(QApplication::translate("MainWindow", "Block Size:", nullptr));
        checkBox_variableBlockSize->setText(QApplication::translate("MainWindow", "Variable Block Size", nullptr));
        radioButton_standard->setText(QApplication::translate("MainWindow", "Standard", nullptr));
        label_threshold->setText(QApplication::translate("MainWindow", "Threshold:", nullptr));
        radioButton_heatmap->setText(QApplication::translate("MainWindow", "Heatmap", nullptr));
        label_overlay->setText(QApplication::translate("MainWindow", "Overlay:", nullptr));
        groupBox_heatmapCreationProgress->setTitle(QApplication::translate("MainWindow", "Heatmap Creation Progress", nullptr));
        groupBox_foundedMinutia->setTitle(QApplication::translate("MainWindow", "Founded Minutia", nullptr));
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
        groupBox_exTester_threadNum->setTitle(QApplication::translate("MainWindow", "Threads", nullptr));
        label_exTester_threadNum->setText(QApplication::translate("MainWindow", "Number of Threads", nullptr));
        groupBox_exTester_preprocessing->setTitle(QApplication::translate("MainWindow", "Preprocessing", nullptr));
        checkBox_exTester_contrast->setText(QApplication::translate("MainWindow", "Enhance the Contrast", nullptr));
        checkBox_exTester_removeHoles->setText(QApplication::translate("MainWindow", "Remove the Holes", nullptr));
        label_exTester_removeHoles->setText(QApplication::translate("MainWindow", "Size", nullptr));
        checkBox_exTester_gaborFilterGPU->setText(QApplication::translate("MainWindow", "Use GPU for Gabor Filter", nullptr));
        checkBox_exTester_mask->setText(QApplication::translate("MainWindow", "Use the Mask", nullptr));
        checkBox_exTester_qualityMap->setText(QApplication::translate("MainWindow", "Use the Quality Map", nullptr));
        checkBox_exTester_frequencyMap->setText(QApplication::translate("MainWindow", "Use the Frequency Map", nullptr));
        checkBox_exTester_fixOrientations->setText(QApplication::translate("MainWindow", "Fix the Orientations", nullptr));
        tabWidget_exTester_settings->setTabText(tabWidget_exTester_settings->indexOf(tab_features), QApplication::translate("MainWindow", "Features", nullptr));
        tabWidget_exTester_settings->setTabText(tabWidget_exTester_settings->indexOf(tab_7), QApplication::translate("MainWindow", "Extraction", nullptr));
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
        label_imageToProcess->setText(QApplication::translate("MainWindow", "Image(s) to process at once:", nullptr));
        tabWidget_testerSettings->setTabText(tabWidget_testerSettings->indexOf(tab_3), QApplication::translate("MainWindow", "Input", nullptr));
        groupBox_matcher->setTitle(QApplication::translate("MainWindow", "Matcher", nullptr));
        radioButton_matcherBozorth->setText(QApplication::translate("MainWindow", "Bozorth3", nullptr));
        radioButton_matcherMCC->setText(QApplication::translate("MainWindow", "MCC", nullptr));
        radioButton_matcherSuprema->setText(QApplication::translate("MainWindow", "Suprema", nullptr));
        checkBox_dbTesterUseMask->setText(QApplication::translate("MainWindow", "Use Mask", nullptr));
        checkBox_dbTester_freqMap->setText(QApplication::translate("MainWindow", "Use Frequency Map", nullptr));
        checkBox_dbTesterUseFixOrientations->setText(QApplication::translate("MainWindow", "Fix Minutiae Orientations", nullptr));
        checkBox_dbTester_contrastEnhancement->setText(QApplication::translate("MainWindow", "Use Contrast Enhancement", nullptr));
        label_dbTester_holeSize->setText(QApplication::translate("MainWindow", "Hole Size:", nullptr));
        checkBox_dbTester_removeHoles->setText(QApplication::translate("MainWindow", "Remove Holes", nullptr));
        checkBox_dbTesterUseVariableBlockSize->setText(QApplication::translate("MainWindow", "Use Variable Block Size", nullptr));
        checkBox_dbTesterUseDistinctMinutiae->setText(QApplication::translate("MainWindow", "Distinct Minutiae", nullptr));
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
        groupBox_dbTester_iteration->setTitle(QApplication::translate("MainWindow", "Parameter Iteration", nullptr));
        label_dbTester_iterBlockSize->setText(QApplication::translate("MainWindow", " Block Size Increase Iterations", nullptr));
        label_dbTester_iterSigma->setText(QApplication::translate("MainWindow", "Sigma Increase Iterations", nullptr));
        label_dbTester_iterLambda->setText(QApplication::translate("MainWindow", "Lambda Increase Iterations", nullptr));
        tabWidget_testerSettings->setTabText(tabWidget_testerSettings->indexOf(tab), QApplication::translate("MainWindow", "Test", nullptr));
        pushButton_startTesting->setText(QApplication::translate("MainWindow", "Start Testing", nullptr));
        groupBox_dbTester_Log->setTitle(QApplication::translate("MainWindow", "Log", nullptr));
        groupBox_dbTester_Results->setTitle(QApplication::translate("MainWindow", "Results", nullptr));
        tabWidget_testResults->setTabText(tabWidget_testResults->indexOf(tab_farfrr), QApplication::translate("MainWindow", "FAR / FRR", nullptr));
        tabWidget_testResults->setTabText(tabWidget_testResults->indexOf(tab_roc), QApplication::translate("MainWindow", "ROC", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_dbTester), QApplication::translate("MainWindow", "Database Tester", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
