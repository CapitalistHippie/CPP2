# CMake coding conventions

## Coding style

### General

Lines should not be more than 80 characters in length. Functions and constants that are not standard should be prepended with a project specific identifier.

### Variables

Constants should be in all uppercase with underscores between words. Technically there are no constants in CMake but using this style should be a warning to coders that the variable is not be changed. Other variables should be written in pascal case.

Examples:

```cmake
set(SHOULD_NOT_BE_CHANGED 42)
set(somethingThatMayBeChanged 84)
```

### Functions

When writing a function call write them fully lowercase and specify arguments in full uppercase. When you need to write a function call over multiple lines, line up the arguments.

It's also preferred when specifying an argument to do that on a new line.

It should look like this:

```cmake
add_library(${TARGET_NAME} STATIC ${SOURCE_FILES})

set_target_properties(${TARGET_NAME} PROPERTIES
                      LINKER_LANGUAGE CXX)

target_include_directories(${TARGET_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
```

When making new functions try to stick to the way the standard functions are named. Mainly with underscores between names.
