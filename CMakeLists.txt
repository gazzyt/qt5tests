cmake_minimum_required( VERSION 3.16 )

project ( qttests )

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)


add_subdirectory(01-Introduction)
add_subdirectory(02-First-Programs)
add_subdirectory(03-Menus-Toolbars)
add_subdirectory(04-Layout-Mgmt)
add_subdirectory(05-Events-Signals)
add_subdirectory(06-Widgets)
add_subdirectory(07-painting)
add_subdirectory(08-Custom-Widgets)
add_subdirectory(09-games)
