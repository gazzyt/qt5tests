cmake_minimum_required( VERSION 3.16 )

project("qtbuttons")

set( BUILD_MANIFEST
    main.cpp
    buttons.cpp
)

add_executable(qtbuttons ${BUILD_MANIFEST})

target_link_libraries(qtbuttons Qt6::Core Qt6::Widgets)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qtbuttons POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qtbuttons>
        COMMENT "Run windeployqt"
    )
endif()
