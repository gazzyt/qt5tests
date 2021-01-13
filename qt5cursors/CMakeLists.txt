cmake_minimum_required( VERSION 3.16 )

project("qt5cursors")

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    cursors.cpp
)

add_executable(qt5cursors ${BUILD_QT5VERSION_MANIFEST})

target_link_libraries(qt5cursors Qt5::Core Qt5::Widgets)