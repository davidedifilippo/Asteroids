

CONFIG += c++11



SOURCES += \
    animation.cpp \
    asteroid.cpp \
    bullet.cpp \
    entity.cpp \
    main.cpp \
    player.cpp

HEADERS += \
    animation.h \
    asteroid.h \
    bullet.h \
    entity.h \
    player.h

INCLUDEPATH = /usr/local/include/SFML

LIBS += -L/usr/local/lib -lsfml-graphics -lsfml-window -lsfml-system

CONFIG(debug, debug|release) {
    DESTDIR = ./build/debug
} else {
    DESTDIR = ./build/release
}



