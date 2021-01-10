cmake_minimum_required( VERSION 3.18 )

project("qt5plusminus")

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    plusminus.cpp
)

set( BUILD_QT5VERSION_HEADERS_MANIFEST
    main.cpp
    plusminus.cpp
)

add_executable(qt5plusminus ${BUILD_QT5VERSION_MANIFEST} ${BUILD_QT5VERSION_HEADERS_MANIFEST})

target_link_libraries(qt5plusminus Qt5::Core Qt5::Widgets)

set_target_properties(qt5plusminus PROPERTIES AUTOMOC TRUE)