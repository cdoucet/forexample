cmake_minimum_required (VERSION 2.6)

project (ctest_example CXX)


enable_testing()

add_test(test_12_15 ../test/functional/12_15.sh)

add_subdirectory(src)
