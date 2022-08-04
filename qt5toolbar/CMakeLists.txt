cmake_minimum_required( VERSION 3.16 )

project("qt5toolbar")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    toolbar.cpp
)

set( BUILD_QT5VERSION_HEADERS_MANIFEST

)

add_executable(qt5toolbar ${BUILD_QT5VERSION_MANIFEST} ${BUILD_QT5VERSION_HEADERS_MANIFEST} application.qrc)

target_link_libraries(qt5toolbar Qt6::Core Qt6::Widgets)

set_target_properties(qt5toolbar PROPERTIES AUTOMOC TRUE)
set_target_properties(qt5toolbar PROPERTIES AUTORCC TRUE)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qt5toolbar POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qt5toolbar>
        COMMENT "Run windeployqt"
    )
endif()
