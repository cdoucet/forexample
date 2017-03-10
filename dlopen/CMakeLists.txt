CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT(dlopen_example CXX)

ADD_EXECUTABLE(main main.cpp print_ref.cpp)
TARGET_LINK_LIBRARIES(main dl)

ADD_LIBRARY(module MODULE module.cpp)

IF(APPLE)
  SET_TARGET_PROPERTIES(module PROPERTIES SUFFIX ".dylib" LINK_FLAGS "-undefined dynamic_lookup")
ENDIF(APPLE)


