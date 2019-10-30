# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)


set(var 123)
message("var = ${var}")

set(list_var 1 2 3 4 5)
message("list_var:${list_var}")

set(a "")
while (NOT a STREQUAL "xxx")
    set(a "${a}x")
    message("a = ${a}")
endwhile ()

# for循环遍历
foreach (item 1 2 3)
    message("item = ${item}")
endforeach (item)

foreach (item RANGE 3)
    message("item = ${item}")
endforeach (item)

foreach (item RANGE 0 7 3)
    message("item = ${item}")
endforeach (RANGE)


foreach (item IN LISTS list_var)
    message("item = ${item}")
endforeach (item)


# 自定义函数命令
function(func x y z)
    message("call function func")
    message("x = ${x}")
    message("y = ${y}")
    message("z = ${z}")
    message("ARGC = ${ARGC}")
    message("ARGV = ${ARGV}")
    message("ARGV0 = ${ARGV0}")
    message("ARGV1 = ${ARGV1}")
    message("ARGV2 = ${ARGV2}")
    message("ARGV3 = ${ARGV3}")
endfunction(func)

func(1 2 3)

# 自定义宏命令

macro(ma a b)
    message("a = ${a}")
    message("b = ${b}")
endmacro(ma)

ma("hello" "world")

# 变量的作用域


aux_source_directory(. DIR_SRCS)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
        native-lib

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        native-lib.cpp)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        native-lib

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib})