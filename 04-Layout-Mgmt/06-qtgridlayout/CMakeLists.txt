cmake_minimum_required( VERSION 3.16 )

project("qtgridlayout")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_MANIFEST
    main.cpp
    calculator.cpp
)

add_executable(qtgridlayout ${BUILD_MANIFEST})

target_link_libraries(qtgridlayout Qt6::Core Qt6::Widgets)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qtgridlayout POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qtgridlayout>
        COMMENT "Run windeployqt"
    )
endif()
