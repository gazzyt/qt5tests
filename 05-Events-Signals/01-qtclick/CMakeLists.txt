cmake_minimum_required( VERSION 3.16 )

project("qtclick")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_MANIFEST
    main.cpp
    click.cpp
)

if(WIN32)
    set(EXE_OPTIONS WIN32)
endif()

add_executable(qtclick ${EXE_OPTIONS} ${BUILD_MANIFEST})

target_link_libraries(qtclick Qt6::Core Qt6::Widgets)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qtclick POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qtclick>
        COMMENT "Run windeployqt"
    )
endif()
