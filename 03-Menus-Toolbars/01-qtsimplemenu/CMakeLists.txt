cmake_minimum_required( VERSION 3.16 )

project("qtsimplemenu")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_MANIFEST
    main.cpp
    simplemenu.cpp
)

set( BUILD_HEADERS_MANIFEST

)

add_executable(qtsimplemenu ${BUILD_MANIFEST} ${BUILD_HEADERS_MANIFEST})

target_link_libraries(qtsimplemenu Qt6::Core Qt6::Widgets)

set_target_properties(qtsimplemenu PROPERTIES AUTOMOC TRUE)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qtsimplemenu POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qtsimplemenu>
        COMMENT "Run windeployqt"
    )
endif()
