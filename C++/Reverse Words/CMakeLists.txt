cmake_minimum_required(VERSION 3.20)
project(ReverseWords)

set(source main.cpp "../Reduce but Grow/main.cpp")
set(libs)

function(foo)
    list(LENGTH ARGV x)
    # check first is FOO here
    math(EXPR argn "${x}")

    if (argn EQUAL 0)
        message("argn: 0 |")
        return()
    endif ()

    set(output)
    foreach (index RANGE 1 ${argn})
        list(GET ARGV ${index} current)
        set(output "${output} `${current}`")
    endforeach ()

    message("argn: ${argn} | argv:${output}")
endfunction()

#foo(FOO)
#foo(FOO "")
#foo(FOO "1")
#foo(FOO "1" "")
#foo(FOO "1" "abc")

add_executable(${PROJECT_NAME} ${source})
#add_executable_gtest()
#foo(${PROJECT_NAME} ${source})

#set(TEST)

function(use_llvm TARGET)
    message("ARGC=\"${ARGC}\"")
    message("ARGN=\"${ARGN}\"")
    message("ARGV=\"${ARGV}\"")
    message("ARGV0=\"${ARGV0}\"")
    message("ARGV1=\"${ARGV1}\"")
    message("ARGV2=\"${ARGV2}\"")
endfunction()

add_custom_target(foo COMMAND ls)

use_llvm(foo core bitwriter)

if (TEST)
    message("1 TEST")
else ()
    message("2 TEST")
endif ()
