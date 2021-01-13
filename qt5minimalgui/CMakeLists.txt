cmake_minimum_required( VERSION 3.16 )

project("qt5minimalgui")

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
)

add_executable(qt5minimalgui ${BUILD_QT5VERSION_MANIFEST})

target_link_libraries(qt5minimalgui Qt5::Core Qt5::Widgets)