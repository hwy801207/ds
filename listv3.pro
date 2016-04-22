TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    chainnode.cpp \
    chain.cpp

HEADERS += \
    chainnode.h \
    linearlist.h \
    chain.h \
    extendedlinearlist.h

