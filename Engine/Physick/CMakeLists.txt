cmake_minimum_required(VERSION 3.14)

function(AddTest testfile testfilecpp var_files)
   message(STATUS "FILES:${var_files}")
   add_executable(
      ${testfile} ${testfilecpp} ${var_files}
   )
   target_link_libraries(
      ${testfile} 
      GTest::gtest_main
   )
   include(GoogleTest)
   gtest_discover_tests(coord_test)
endfunction()
project(MyProject)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()


file(GLOB_RECURSE VARIABLE src/*.cpp ../General/error/*.cpp ../General/object/*.cpp)
#compilation
set(ARGS -Wall -g -lm -DDEBUG=1)
add_executable(MyProject main.cpp ${VARIABLE})
target_compile_options(MyProject PRIVATE ${ARGS})
#testin#
add_executable(
   coord_test tests/coord_test.cpp ${VARIABLE}
)
target_link_libraries(
   coord_test
   GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(coord_test)
target_compile_options(coord_test PRIVATE -DDEBUG=1)
add_executable(
   force_test tests/force_test.cpp ${VARIABLE}
)
target_link_libraries(
   force_test
   GTest::gtest_main
)
target_compile_options(force_test PRIVATE -DDEBUG=1)
include(GoogleTest)
gtest_discover_tests(force_test)
add_executable(
   object_test tests/object_test.cpp ${VARIABLE}
)
target_link_libraries(
   object_test
   GTest::gtest_main
)
target_compile_options(object_test PRIVATE -DDEBUG=1)
include(GoogleTest)
gtest_discover_tests(object_test)
