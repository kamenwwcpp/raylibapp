cmake_minimum_required(VERSION 3.16)
project(raylibapp CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_library(raylib STATIC IMPORTED)
set_target_properties(raylib PROPERTIES
    IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/lib/libraylib.a
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    raylib
    GL
    m
    pthread
    dl
    rt
    X11
)
