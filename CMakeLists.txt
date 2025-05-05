cmake_minimum_required(VERSION 3.14)
project(qvadratuch_reh)

set(CMAKE_CXX_STANDARD 17)

# Основная библиотека
add_library(qvadratuch_reh src/quadratic_solver.cpp)
target_include_directories(qvadratuch_reh PUBLIC src)

# Подключение GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Тесты
add_executable(tests tests/test_quadratic_solver.cpp)
target_link_libraries(tests gtest_main qvadratuch_reh)

include(GoogleTest)
gtest_discover_tests(tests)
