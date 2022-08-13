cmake_minimum_required( VERSION 3.16 )

project("qtversion")

set( BUILD_QTVERSION_MANIFEST
    main.cpp
)

add_executable(qtversion ${BUILD_QTVERSION_MANIFEST})

target_link_libraries(qtversion Qt6::Core)