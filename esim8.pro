TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        iperson.cpp \
        main.cpp \
        person.cpp \
        student.cpp \
        teacher.cpp

HEADERS += \
    iperson.h \
    person.h \
    student.h \
    teacher.h

DISTFILES += \
    classdiagram.qmodel
