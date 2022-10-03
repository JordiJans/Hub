cmake_minimum_required(VERSION 3.5)

project(pics LANGUAGES C)

add_executable(pics main.c)

install(TARGETS pics
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
