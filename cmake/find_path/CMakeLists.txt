cmake_minimum_required (VERSION 2.6)

project (find_path_example CXX)


find_path(HELLO_FILE hello.txt
          PATHS ${CMAKE_SOURCE_DIR})

message(STATUS ${HELLO_FILE})

