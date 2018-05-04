######################################################################
# Automatically generated by qmake (3.1) Mon Apr 16 16:17:42 2018
######################################################################

TEMPLATE = app
TARGET = LIneFollower_GUI
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

QT+= widgets
QT+= serialport
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += menu_utama.h \
    setting_connection.h \
    movement_view.h \
    overview_menu.h \
    rekonstruksi_jalur.h \
    line_tracking.h
SOURCES += main.cpp menu_utama.cpp \
    setting_connection.cpp \
    movement_view.cpp \
    overview_menu.cpp \
    rekonstruksi_jalur.cpp \
    line_tracking.cpp

RESOURCES += \
    asset/icon_pack.qrc