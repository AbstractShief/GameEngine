if(EXISTS "/home/debial/GameEngine/Engine/General/build/testfile[1]_tests.cmake")
  include("/home/debial/GameEngine/Engine/General/build/testfile[1]_tests.cmake")
else()
  add_test(testfile_NOT_BUILT testfile_NOT_BUILT)
endif()
