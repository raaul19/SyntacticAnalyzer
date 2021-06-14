#-------------------------------------------------
#
# Project created by QtCreator 2021-06-13T11:05:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SyntacticAnalyzer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    automatum.cpp \
    analyzer.cpp \
    syntactic.cpp

HEADERS  += mainwindow.h \
    automatum.h \
    analyzer.h \
    syntactic.h

FORMS    += mainwindow.ui
