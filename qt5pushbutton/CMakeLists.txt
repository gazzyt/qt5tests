cmake_minimum_required( VERSION 3.16 )

project("qt5pushbutton")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    mybutton.cpp
)

add_executable(qt5pushbutton ${BUILD_QT5VERSION_MANIFEST})

target_link_libraries(qt5pushbutton Qt6::Core Qt6::Widgets)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qt5pushbutton POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qt5pushbutton>
        COMMENT "Run windeployqt"
    )
endif()
