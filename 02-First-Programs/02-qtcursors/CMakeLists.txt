cmake_minimum_required( VERSION 3.16 )

project("qtcursors")

set( BUILD_MANIFEST
    main.cpp
    cursors.cpp
)

add_executable(qtcursors ${BUILD_MANIFEST})

target_link_libraries(qtcursors Qt6::Core Qt6::Widgets)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qtcursors POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qtcursors>
        COMMENT "Run windeployqt"
    )
endif()
