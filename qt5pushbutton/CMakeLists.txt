cmake_minimum_required( VERSION 3.18 )

project("qt5pushbutton")

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    mybutton.cpp
)

add_executable(qt5pushbutton ${BUILD_QT5VERSION_MANIFEST})

target_link_libraries(qt5pushbutton Qt5::Core Qt5::Widgets)