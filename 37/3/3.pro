QT       += core gui
QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17

FORMS += \
    design.ui

SOURCES += \
    main.cpp \
    RemoteController.cpp
    
HEADERS += \
    RemoteController.hpp
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
