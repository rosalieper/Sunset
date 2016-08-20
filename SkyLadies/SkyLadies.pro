#-------------------------------------------------
#
# Project created by QtCreator 2016-01-05T11:41:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SkyLadies
TEMPLATE = app


SOURCES += main.cpp\
        sl.cpp \
    about_sunset.cpp

HEADERS  += sl.h \
    skyl.h \
    about_sunset.h

FORMS    += sl.ui \
    about_sunset.ui

RESOURCES += \
    Pictures.qrc

OTHER_FILES += \
    README.txt \
    Mondjo_Tchelibou_Impression.txt
