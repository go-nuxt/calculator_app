cmake_minimum_required(VERSION 3.16)

project(CalculatorApp VERSION 1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCES
    src/main.c
    src/calc_lib.c
)

add_executable(${PROJECT_NAME} ${SOURCES})

if (MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()
