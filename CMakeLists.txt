cmake_minimum_required(VERSION 3.16)
project(Adaship)

set(CMAKE_CXX_STANDARD 17)
configure_file(adaship_config.ini ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

add_executable(Adaship main.cpp Config.h Config.cpp adaship_config.ini)