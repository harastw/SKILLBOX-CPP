QT       += core gui
  QT += widgets
  QT += webenginewidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17

SOURCES += \
    main.cpp \
    HtmlEditor.cpp

FORMS += \
    design.ui
    
HEADERS += \
    HtmlEditor.hpp
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
