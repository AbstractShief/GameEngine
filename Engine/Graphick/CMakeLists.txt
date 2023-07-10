cmake_minimum_required(VERSION 3.14)
# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

project(graphick)
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

find_package(SDL2_image REQUIRED)
include_directories(${SDL2_IMAGE_INCLUDE_DIRS})

file(GLOB_RECURSE VARIABLE src/*.cpp ../Physick/src/*.cpp)

set(ARGS -Wall -g -lSDL2 -lSDL2_image)
add_executable(graphick main.cpp ${VARIABLE})
target_link_libraries(graphick ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES} -lSDL2_image)
target_compile_options(graphick PRIVATE ${ARGS})
