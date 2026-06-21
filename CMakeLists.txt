cmake_minimum_required(VERSION 3.12)
project(CPPBasicToPro)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE CPP_FILES "*.cpp")

foreach(FILE ${CPP_FILES})
    file(RELATIVE_PATH REL_PATH ${CMAKE_SOURCE_DIR} ${FILE})
    string(REPLACE "/" "_" TARGET_NAME ${REL_PATH})
    string(REPLACE ".cpp" "" TARGET_NAME ${TARGET_NAME})
    add_executable(${TARGET_NAME} ${FILE})
endforeach()
