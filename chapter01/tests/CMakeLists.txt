# Get all test files in directory
file(GLOB TEST_SOURCES test_*.c)

# For every test_src = TEST_SOURCES
foreach(test_src ${TEST_SOURCES})
    # Gets file name without directory or extension
    get_filename_component(test_name ${test_src} NAME_WE)

    # Strip "test_" to get the library name
    # Replace X with Y, store in Z from A
    string(REPLACE "test_" "" lib_name ${test_name})

    # Add executable with test_name and test_source 
    add_executable(${test_name} ${test_src})
    # Link library to test and unity
    target_link_libraries(${test_name} PRIVATE ${lib_name} unity::framework)

    # Add test to ctest
    add_test(NAME ${test_name} COMMAND ${test_name})
endforeach()
