cmake_minimum_required( VERSION 3.16 )

set(QTTEST_PROJECT_NAME qtablewidget)

project(${QTTEST_PROJECT_NAME})

set( BUILD_MANIFEST
    main.cpp
    table.cpp
)

if(WIN32)
    set(EXE_OPTIONS WIN32)
endif()

add_executable(${QTTEST_PROJECT_NAME} ${EXE_OPTIONS} ${BUILD_MANIFEST})

target_link_libraries(${QTTEST_PROJECT_NAME} Qt6::Core Qt6::Widgets)

set_target_properties(${QTTEST_PROJECT_NAME} PROPERTIES AUTOMOC TRUE)


if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET ${QTTEST_PROJECT_NAME} POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:${QTTEST_PROJECT_NAME}>
        COMMENT "Run windeployqt"
    )
endif()
