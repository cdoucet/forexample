cmake_minimum_required (VERSION 2.6)

project (external_example CXX)

include(ExternalProject)

ExternalProject_Add(eigen
                    PREFIX eigen
                    DOWNLOAD_DIR eigen/download
                    SOURCE_DIR eigen/src
                    BINARY_DIR eigen/build
                    TMP_DIR eigen/tmp
                    STAMP_DIR eigen/stamp
                    INSTALL_DIR eigen/install
                    URL http://bitbucket.org/eigen/eigen/get/3.2.4.tar.gz
                    CMAKE_ARGS -D CMAKE_INSTALL_PREFIX=<INSTALL_DIR>
                   )

add_executable(eigen_example main.cpp)
add_dependencies(eigen_example eigen)
include_directories(build/eigen/install/include/eigen3)

#add_subdirectory(src)
