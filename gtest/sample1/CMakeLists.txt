cmake_minimum_required(VERSION 2.8)

project(sample1 C CXX)

find_package (Threads)

add_executable(without_main sample1_unittest.cc sample1.cc)
target_link_libraries(without_main /local/cdoucet/gtest/1.7.0/lib/libgtest_main.a)
target_link_libraries(without_main /local/cdoucet/gtest/1.7.0/lib/libgtest.a)
target_link_libraries (without_main ${CMAKE_THREAD_LIBS_INIT})

add_executable(with_main main.cc sample1_unittest.cc sample1.cc)
target_link_libraries(with_main /local/cdoucet/gtest/1.7.0/lib/libgtest.a)
target_link_libraries (with_main ${CMAKE_THREAD_LIBS_INIT})

include_directories(/local/cdoucet/gtest/1.7.0/include)




