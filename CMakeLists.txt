
cmake_minimum_required(VERSION 3.10)
add_compile_options(-Wall -Wextra -Werror)

project(ft)

include_directories(include PRIVATE include)

file(GLOB SOURCES "src/*.c")

add_library(${PROJECT_NAME} STATIC ${SOURCES})

