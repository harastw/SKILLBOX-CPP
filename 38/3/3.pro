QT       += core gui
QT += widgets
QT += multimedia  
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17

SOURCES += \
    main.cpp \
    BlurWidget.cpp

HEADERS += \
    BlurWidget.hpp    

FORMS += \
    design.ui    
    
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
