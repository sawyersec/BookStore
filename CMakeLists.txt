cmake_minimum_required(VERSION 4.0)
project(BookStore)

set(CMAKE_CXX_STANDARD 20)

add_executable(BookStore main.cpp
        PrintedMedia.cpp
        PrintedMedia.h
        Book.cpp
        Book.h
        Magazine.cpp
        Magazine.h
        BookSet.cpp
        BookSet.h)
