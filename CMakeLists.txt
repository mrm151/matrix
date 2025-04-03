cmake_minimum_required(VERSION 3.22.1)
project(Matrix)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/52204f78f94d7512df1f0f3bea1d47437a2c3a58.zip 
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(main main.cpp matrix.cpp)

add_executable(
  test_matrix
  test_matrix.cpp
)
target_link_libraries(
  test_matrix
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_matrix)
