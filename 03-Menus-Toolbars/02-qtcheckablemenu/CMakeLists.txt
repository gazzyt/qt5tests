cmake_minimum_required( VERSION 3.16 )

project("qtcheckablemenu")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_MANIFEST
    main.cpp
    checkable.cpp
)

set( BUILD_HEADERS_MANIFEST

)

add_executable(qtcheckablemenu ${BUILD_MANIFEST} ${BUILD_HEADERS_MANIFEST})

target_link_libraries(qtcheckablemenu Qt6::Core Qt6::Widgets)

set_target_properties(qtcheckablemenu PROPERTIES AUTOMOC TRUE)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qtcheckablemenu POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qtcheckablemenu>
        COMMENT "Run windeployqt"
    )
endif()
