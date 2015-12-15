# Version 2.8 is required for the ExternalProject module
cmake_minimum_required (VERSION 2.8)

project (external_example CXX)

include(ExternalProject)



# Users can provide their own include directory for Eigen
if (NOT EIGEN_INCLUDE)

  # Default version of Eigen
  set(EIGEN_DEFAULT_VERSION "3.2.4")

  # Specify wether Eigen version is user-defined
  if(NOT EIGEN_VERSION)
    set(EIGEN_VERSION ${EIGEN_DEFAULT_VERSION})
  endif(NOT EIGEN_VERSION)

  # Installation of Eigen
  ExternalProject_Add(eigen
                      PREFIX eigen
                      DOWNLOAD_DIR eigen/download
                      SOURCE_DIR eigen/src
                      BINARY_DIR eigen/build
                      TMP_DIR eigen/tmp
                      STAMP_DIR eigen/stamp
                      INSTALL_DIR eigen/install
                      URL http://bitbucket.org/eigen/eigen/get/${EIGEN_VERSION}.tar.gz
                      CMAKE_ARGS -D CMAKE_INSTALL_PREFIX=<INSTALL_DIR>
                     )

  # The include directory of the automatic installation of Eigen
  set(EIGEN_INCLUDE "build/eigen/install/include")

endif(NOT EIGEN_INCLUDE)



add_executable(eigen_example main.cpp)
add_dependencies(eigen_example eigen)

include_directories(${EIGEN_INCLUDE}/eigen3)
