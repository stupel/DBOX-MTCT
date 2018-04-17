#-------------------------------------------------
#
# Project created by QtCreator 2016-05-05T11:08:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = DBOX-MTCT
TEMPLATE = app

DESTDIR = $$PWD

#QMAKE_LFLAGS += /STACK:64000000

SOURCES +=  main.cpp\
            mainwindow.cpp \
    graphics_view_zoom.cpp \
    minutiaemarker.cpp \
    mousefingerprintscene.cpp \
    networktrainer.cpp \
    minutiaechecker.cpp \
    caffenetwork.cpp \
    databasetester.cpp \
    isoconverter.cpp \
    QCustomPlot/qcustomplot.cpp \
    extractiontester.cpp

HEADERS  += mainwindow.h \
    graphics_view_zoom.h \
    minutiaemarker.h \
    mousefingerprintscene.h \
    networktrainer.h \
    minutiaechecker.h \
    caffenetwork.h \
    databasetester.h \
    isoconverter.h \
    qmatconverter.h \
    QCustomPlot/qcustomplot.h \
    extractiontester.h


FORMS    += mainwindow.ui

#icons
RC_ICONS = core/config/Icons/mmtc.ico

#CUDA
unix:!macx: LIBS += -L$$PWD/../../../../../opt/cuda/lib64/ -lcudart
INCLUDEPATH += $$PWD/../../../../../opt/cuda/include
DEPENDPATH += $$PWD/../../../../../opt/cuda/include

#Preprocessing
unix:!macx: LIBS += -L$$PWD/../Preprocessing/ -lPreprocessing
INCLUDEPATH += $$PWD/../Preprocessing
DEPENDPATH += $$PWD/../Preprocessing

#Bozorth3
unix:!macx: LIBS += -L$$PWD/../bozorth3m/ -lbozorth3m
INCLUDEPATH += $$PWD/../bozorth3m
DEPENDPATH += $$PWD/../bozorth3m

#SupremaSensor
unix:!macx: LIBS += -L$$PWD/../../../../../opt/suprema/x64/ -lUFMatcher
unix:!macx: LIBS += -L$$PWD/../../../../../opt/suprema/x64/ -lUFScanner
INCLUDEPATH += $$PWD/../../../../../opt/suprema/include
DEPENDPATH += $$PWD/../../../../../opt/suprema/include

#OpenCV
unix:!macx: LIBS += -L$$PWD/../../../../../usr/local/lib64/ -lopencv_world

#ArrayFire
unix:!macx: LIBS += -L$$PWD/../../../../../usr/lib/ -lafcuda

#Caffe
unix:!macx: LIBS += -L$$PWD/../../../../../usr/lib64/ -lcaffe
unix:!macx: LIBS += -L$$PWD/../../../../../usr/lib64/ -lboost_system
unix:!macx: LIBS += -L$$PWD/../../../../../usr/lib64/ -lglog
unix:!macx: LIBS += -L$$PWD/../../../../../usr/lib64/ -lprotobuf

#Extraction
unix:!macx: LIBS += -L$$PWD/../Extraction/ -lExtraction
INCLUDEPATH += $$PWD/../Extraction
DEPENDPATH += $$PWD/../Extraction
