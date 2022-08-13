cmake_minimum_required( VERSION 3.16 )

project("qvboxlayout")

set( BUILD_MANIFEST
    main.cpp
    verticalbox.cpp
)

add_executable(qvboxlayout ${BUILD_MANIFEST})

target_link_libraries(qvboxlayout Qt6::Core Qt6::Widgets)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qvboxlayout POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qvboxlayout>
        COMMENT "Run windeployqt"
    )
endif()
