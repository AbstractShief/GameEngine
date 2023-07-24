cmake_minimum_required(VERSION 3.14)
# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

project(MyProject)


#compilation
#set(ARGS -Wall -g -lm)
#target_compile_options(MyProject PRIVATE ${ARGS})
#testin#
file(GLOB_RECURSE ALL_CPP *.cpp EXCLUDE /home/debial/GameEngine/Engine/General/tests/*.cpp)

function(AddTest testfile testfilecpp)
   message(STATUS "FILE:${testfilecpp}")
   add_executable(
      ${testfile} ${testfilecpp} ${ALL_CPP}
   )
   target_link_libraries(
      ${testfile}
      GTest::gtest_main
   )
   include(GoogleTest)
   gtest_discover_tests(${testfile})
endfunction()
message(STATUS ${ALL_CPP})
add_executable(
   coord_test tests/coord_test.cpp structure/coord/coord.cpp
)
target_link_libraries(
   coord_test
   GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(coord_test)
