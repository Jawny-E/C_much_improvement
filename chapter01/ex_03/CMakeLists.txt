# Adds the library built by this exercise
# STATIC-> archive of object files for use when linking other targets
add_library(ex_03 STATIC
    src/ex_03.c
)

# Includes the *.h file in build
# PUBLIC -> Makes it public to other targets
target_include_directories(ex_03 PUBLIC include)

# Create an executable to control the output
add_executable(EX03 src/main.c)

# Links the library to the executable
target_link_libraries(EX03 PRIVATE ex_03)
