QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    pvpgameplay.cpp \
    pvpwindow.cpp

HEADERS += \
    mainwindow.h \
    pvpgameplay.h \
    pvpwindow.h

FORMS += \
    mainwindow.ui \
    pvpwindow.ui

TRANSLATIONS += \
    BOOLEO_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Design/AND_0.png \
    Design/AND_1.png \
    Design/Medium_1.png \
    Design/Medium_2.png \
    Design/OR_0.png \
    Design/OR_1.png \
    Design/Palitre.png \
    Design/XOR_0.png \
    Design/XOR_1.png
