# Adds the library built by this exercise
# STATIC-> archive of object files for use when linking other targets
add_library(ex_02 STATIC
    src/ex_02.c
)

# Includes the *.h file in build
# PUBLIC -> Makes it public to other targets
target_include_directories(ex_02 PUBLIC src)
