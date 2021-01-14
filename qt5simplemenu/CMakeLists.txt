cmake_minimum_required( VERSION 3.16 )

project("qt5simplemenu")

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    simplemenu.cpp
)

set( BUILD_QT5VERSION_HEADERS_MANIFEST

)

add_executable(qt5simplemenu ${BUILD_QT5VERSION_MANIFEST} ${BUILD_QT5VERSION_HEADERS_MANIFEST})

target_link_libraries(qt5simplemenu Qt5::Core Qt5::Widgets)

set_target_properties(qt5simplemenu PROPERTIES AUTOMOC TRUE)