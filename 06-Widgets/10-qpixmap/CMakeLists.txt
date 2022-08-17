cmake_minimum_required( VERSION 3.16 )

set(QTTEST_PROJECT_NAME qpixmap)

project(${QTTEST_PROJECT_NAME})

find_package(JPEG REQUIRED)

set( BUILD_MANIFEST
    main.cpp
    pixmap.cpp
)

if(WIN32)
    set(EXE_OPTIONS WIN32)
endif()

add_executable(${QTTEST_PROJECT_NAME} ${EXE_OPTIONS} ${BUILD_MANIFEST})

target_link_libraries(${QTTEST_PROJECT_NAME} Qt6::Core Qt6::Widgets ${JPEG_LIBRARIES})

set_target_properties(${QTTEST_PROJECT_NAME} PROPERTIES AUTOMOC TRUE)


if (WIN32)
    find_program(TOOL_WINDEPLOYQT_DEBUG NAMES windeployqt.debug.bat)
    find_program(TOOL_WINDEPLOYQT NAMES windeployqt)
    find_file(LIB_JPEG jpeg62.dll PATHS ${VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/bin)
    find_file(LIB_JPEG_DEBUG jpeg62.dll PATHS ${VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/debug/bin)

    add_custom_command(TARGET ${QTTEST_PROJECT_NAME} POST_BUILD
        COMMAND $<$<CONFIG:Debug>:${TOOL_WINDEPLOYQT_DEBUG}>$<$<CONFIG:Release>:${TOOL_WINDEPLOYQT}>
                $<TARGET_FILE:${QTTEST_PROJECT_NAME}>
        COMMAND ${CMAKE_COMMAND} -E copy
            $<$<CONFIG:Debug>:${LIB_JPEG_DEBUG}>$<$<CONFIG:Release>:${LIB_JPEG}>
            $<$<CONFIG:Debug>:${CMAKE_CURRENT_BINARY_DIR}/Debug>$<$<CONFIG:Release>:${CMAKE_CURRENT_BINARY_DIR}/Release>
        COMMENT "Run windeployqt"
    )


endif()

configure_file(Bojnice.jpg Bojnice.jpg COPYONLY)
