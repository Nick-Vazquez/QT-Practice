TEMPLATE = app
TARGET = QT_Beginner_Tutorial

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    window.cpp

HEADERS += \
    mainwindow.h \
    window.h

DISTFILES += \
    .gitignore
