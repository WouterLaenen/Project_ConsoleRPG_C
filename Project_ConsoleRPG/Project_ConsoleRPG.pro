TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        enemy.cpp \
        entity.cpp \
        main.cpp \
        maptile.cpp \
        player.cpp

HEADERS += \
    enemy.h \
    entity.h \
    maptile.h \
    player.h
