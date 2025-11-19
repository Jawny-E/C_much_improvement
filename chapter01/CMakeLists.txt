# Recommenden when using ubuntu 22.04
cmake_minimum_required(VERSION 3.22)

project(chapter01 LANGUAGES C)

enable_testing()

# ----- Unity library ------
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../external/unity external_unity)

# ----- Add all exercises -----
file(GLOB EXERCISES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "ex_*")

foreach(ex ${EXERCISES})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${ex})
        add_subdirectory(${ex})
    endif()
endforeach()
# ----- Add tests -----
add_subdirectory(tests)
