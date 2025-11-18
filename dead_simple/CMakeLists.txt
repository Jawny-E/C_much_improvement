cmake_minimum_required(VERSION 3.22)

project(
    dead_simple
    LANGUAGES C
)

# External dependecies
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../external/unity external_unity)

# Internal libraries

## Fibonacci
add_library(fibonacci STATIC)
target_sources(fibonacci PRIVATE src/fibonacci.c)
target_include_directories(fibonacci
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)
## Pyramid
add_library(pyramid STATIC)
target_sources(pyramid PRIVATE src/pyramid.c)
target_include_directories(pyramid
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Tests

enable_testing()

# Fibonacci tests
add_executable(test_fibonacci tests/test_fibbonacci_result.c)
target_include_directories(test_fibonacci PRIVATE include)
target_link_libraries(test_fibonacci PRIVATE fibonacci unity::framework)

add_test(
    NAME fibonacci_tests
    COMMAND test_fibonacci
)

# Pyramid tests
add_executable(test_pyramid tests/test_pyramid.c)
target_include_directories(test_pyramid PRIVATE include)
target_link_libraries(test_pyramid PRIVATE pyramid unity::framework)

add_test(
    NAME pyramid_tests
    COMMAND test_pyramid
)
