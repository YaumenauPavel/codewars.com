cmake_minimum_required(VERSION 3.20)
project(ComplementaryDNA)

#add_executable_gtest(ComplementaryDNA)
enable_testing()
find_package(GTest REQUIRED test test_main)

include_directories(${GTEST_INCLUDE_DIR})

set(name_gtest ComplementaryDNAGTest)

include_directories(${PROJECT_SOURCE_DIR})
file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/*.cpp)
file(GLOB H_FILES ${PROJECT_SOURCE_DIR}/*.hpp)

message("CMAKE_CURRENT_LIST_DIR:" ${CMAKE_CURRENT_LIST_DIR})
set(libs_gtest ${libs})

add_executable(${name_gtest}
               ${SRC_FILES}
               ${H_FILES}
               ../Equals.hpp)

target_link_libraries(${name_gtest}

                      ${GTEST_BOTH_LIBRARIES}
                      ${GTEST_LIBRARIES}
                      ${GTEST_MAIN_LIBRARIES}

                      -lpthread
                      )
