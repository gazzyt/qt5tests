cmake_minimum_required( VERSION 3.16 )

project("qt5checkablemenu")

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    checkable.cpp
)

set( BUILD_QT5VERSION_HEADERS_MANIFEST

)

add_executable(qt5checkablemenu ${BUILD_QT5VERSION_MANIFEST} ${BUILD_QT5VERSION_HEADERS_MANIFEST})

target_link_libraries(qt5checkablemenu Qt5::Core Qt5::Widgets)

set_target_properties(qt5checkablemenu PROPERTIES AUTOMOC TRUE)