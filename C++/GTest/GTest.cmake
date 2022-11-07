function(add_executable_gtest project_name)
    message("add_executable_gtest project_name")

    enable_testing()
    find_package(GTest REQUIRED test test_main)
    if (GTEST_FOUND)
        include_directories(${GTEST_INCLUDE_DIR})

        set(name_gtest ${project_name}GTest)

        include_directories(${PROJECT_SOURCE_DIR})
        file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/*.cpp)
        file(GLOB H_FILES ${PROJECT_SOURCE_DIR}/*.hpp)

        message("CMAKE_CURRENT_LIST_DIR:" ${CMAKE_CURRENT_LIST_DIR})
        set(libs_gtest ${libs})

        add_executable(${name_gtest}
                       ${SRC_FILES}
                       ${H_FILES})

        target_link_libraries(${name_gtest}

                              ${GTEST_BOTH_LIBRARIES}
                              ${GTEST_LIBRARIES}
                              ${GTEST_MAIN_LIBRARIES}
                              )
    else ()
        message(INFO "Don't find gtest")
    endif ()
endfunction()
