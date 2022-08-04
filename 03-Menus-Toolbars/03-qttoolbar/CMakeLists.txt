cmake_minimum_required( VERSION 3.16 )

project("qttoolbar")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_MANIFEST
    main.cpp
    toolbar.cpp
)

set( BUILD_HEADERS_MANIFEST

)

add_executable(qttoolbar ${BUILD_MANIFEST} ${BUILD_HEADERS_MANIFEST} application.qrc)

target_link_libraries(qttoolbar Qt6::Core Qt6::Widgets)

set_target_properties(qttoolbar PROPERTIES AUTOMOC TRUE)
set_target_properties(qttoolbar PROPERTIES AUTORCC TRUE)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qttoolbar POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qttoolbar>
        COMMENT "Run windeployqt"
    )
endif()
