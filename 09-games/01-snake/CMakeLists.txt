cmake_minimum_required( VERSION 3.16 )

set(QTTEST_PROJECT_NAME snake)

project(${QTTEST_PROJECT_NAME})

set( BUILD_MANIFEST
    main.cpp
    snake.cpp
)


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

configure_file(apple.png apple.png COPYONLY)
configure_file(dot.png dot.png COPYONLY)
configure_file(head.png head.png COPYONLY)
