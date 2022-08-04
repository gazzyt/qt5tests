cmake_minimum_required( VERSION 3.16 )

project("qt5simplemenu")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_QT5VERSION_MANIFEST
    main.cpp
    simplemenu.cpp
)

set( BUILD_QT5VERSION_HEADERS_MANIFEST

)

add_executable(qt5simplemenu ${BUILD_QT5VERSION_MANIFEST} ${BUILD_QT5VERSION_HEADERS_MANIFEST})

target_link_libraries(qt5simplemenu Qt6::Core Qt6::Widgets)

set_target_properties(qt5simplemenu PROPERTIES AUTOMOC TRUE)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qt5simplemenu POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qt5simplemenu>
        COMMENT "Run windeployqt"
    )
endif()
