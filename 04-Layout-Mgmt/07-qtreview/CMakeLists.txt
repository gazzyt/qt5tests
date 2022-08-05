cmake_minimum_required( VERSION 3.16 )

project("qtreview")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

set( BUILD_MANIFEST
    main.cpp
    review.cpp
)

if(WIN32)
    set(EXE_OPTIONS WIN32)
endif()

add_executable(qtreview ${EXE_OPTIONS} ${BUILD_MANIFEST})

target_link_libraries(qtreview Qt6::Core Qt6::Widgets)

if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)

    add_custom_command(TARGET qtreview POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:qtreview>
        COMMENT "Run windeployqt"
    )
endif()
