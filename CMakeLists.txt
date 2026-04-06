cmake_minimum_required(VERSION 3.10)
project(HelloWorldProject)

set(CMAKE_CXX_STANDARD 17)

# Підключення vcpkg
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")

# Основна програма
add_executable(hello main.cpp math_operations.cpp)

# Google Test
enable_testing()
find_package(GTest CONFIG REQUIRED)

add_executable(unit_tests tests/unit_tests.cpp math_operations.cpp)
target_link_libraries(unit_tests GTest::gtest GTest::gtest_main)

add_test(NAME unit_tests COMMAND unit_tests)
