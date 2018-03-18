cmake_minimum_required(VERSION 3.6)

set (TARGET_NAME findIsland)
project(${TARGET_NAME})

set (SOURCES_FILES
        sources/main.cpp
        sources/countIslands.cpp
    )


set (HEADER_FILES
        sources/countIslands.h
    )

add_executable(${PROJECT_NAME} ${SOURCES_FILES}  ${HEADER_FILES} )

if(CMAKE_BUILD_TESTING)
    enable_testing()
endif()
