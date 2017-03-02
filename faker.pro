QT += core
QT -= gui
QT += sql


CONFIG += c++11

TARGET = faker
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    generator.cpp \
    main.cpp \
    ImieNazwisko/bazaimienazwiskozenskie.cpp \
    ImieNazwisko/bazaimienazwiskomeskie.cpp \
    bazamysql.cpp \
    Login/generujlogin.cpp \
    Haslo/generujhaslo.cpp \
    tworzbaze.cpp

HEADERS += \
    generator.h \
    ImieNazwisko/bazaimienazwiskozenskie.h \
    ImieNazwisko/bazaimienazwiskomeskie.h \
    ImieNazwisko/imienazwiskostruct.h \
    bazamysql.h \
    Login/generujlogin.h \
    modul.h \
    Haslo/generujhaslo.h \
    tworzbaze.h
