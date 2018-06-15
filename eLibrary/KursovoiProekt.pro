#-------------------------------------------------
#
# Project created by QtCreator 2017-12-08T09:59:35
#
#-------------------------------------------------

QT       += sql core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KursovoiProekt
TEMPLATE = app
RC_FILE = logo.rc

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    book.cpp \
    database.cpp \
    deletion.cpp \
    listitem.cpp \
    main.cpp \
    mainwindow.cpp \
    reader.cpp \
    winbooking.cpp \
    wininfobook.cpp \
    wininforeader.cpp \
    winreturn.cpp \
    winload.cpp

HEADERS += \
    book.h \
    database.h \
    deletion.h \
    listitem.h \
    mainwindow.h \
    reader.h \
    winbooking.h \
    wininfobook.h \
    wininforeader.h \
    winreturn.h \
    winload.h

FORMS += \
    deletion.ui \
    mainwindow.ui \
    winbooking.ui \
    wininfobook.ui \
    wininforeader.ui \
    winreturn.ui \
    winload.ui
