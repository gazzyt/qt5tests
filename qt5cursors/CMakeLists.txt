cmake_minimum_required( VERSION 3.16 )

project("qt5cursors")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    cursors.cpp
)

add_executable(qt5cursors ${BUILD_QT5VERSION_MANIFEST})

target_link_libraries(qt5cursors Qt6::Core Qt6::Widgets)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qt5cursors POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qt5cursors>
        COMMENT "Run windeployqt"
    )
endif()
