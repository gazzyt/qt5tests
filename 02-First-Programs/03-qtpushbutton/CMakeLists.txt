cmake_minimum_required( VERSION 3.16 )

project("qtpushbutton")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_MANIFEST
    main.cpp
    mybutton.cpp
)

add_executable(qtpushbutton ${BUILD_MANIFEST})

target_link_libraries(qtpushbutton Qt6::Core Qt6::Widgets)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qtpushbutton POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qtpushbutton>
        COMMENT "Run windeployqt"
    )
endif()
