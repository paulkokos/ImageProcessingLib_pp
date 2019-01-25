cmake_minimum_required(VERSION 3.5)
project(ImageProcessingLib_pp)
set(CMAKE_CXX_STANDARD 17)
#add_compile_options(-Wall -Wextra -Wpedantic)
#find_package(GTest REQUIRED)
#find_package (Threads)


add_library(ImageProcessingLib_pp lib/library.cpp lib/library.h)

#include_directories(${source_dir}/gtest/include)

include_directories(${GTEST_INCLUDE_DIRS})

target_compile_features(ImageProcessingLib_pp PRIVATE cxx_lambda_init_captures)

#include(gtest.cmake)



add_executable(MainProgram src/main.cpp)
add_executable(Tests tests/Tests.cpp)

target_link_libraries(Tests ${GTEST_LIBRARIES} pthread)
#target_link_libraries(Tests ${CMAKE_THREAD_LIBS_INIT})
