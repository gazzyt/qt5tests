cmake_minimum_required( VERSION 3.16 )

project("qt5toolbar")

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    toolbar.cpp
)

set( BUILD_QT5VERSION_HEADERS_MANIFEST

)

add_executable(qt5toolbar ${BUILD_QT5VERSION_MANIFEST} ${BUILD_QT5VERSION_HEADERS_MANIFEST} application.qrc)

target_link_libraries(qt5toolbar Qt5::Core Qt5::Widgets)

set_target_properties(qt5toolbar PROPERTIES AUTOMOC TRUE)
set_target_properties(qt5toolbar PROPERTIES AUTORCC TRUE)