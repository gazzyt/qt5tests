cmake_minimum_required( VERSION 3.18 )

project("qt5version")

find_package(Qt5 COMPONENTS Core REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
)

add_executable(qt5version ${BUILD_QT5VERSION_MANIFEST})

target_link_libraries(qt5version Qt5::Core)