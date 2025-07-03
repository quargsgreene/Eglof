if(EXISTS "/Users/quargsgreene/code/Eglof/build/test/RelWithDebInfo/EglofTest")
  if(NOT EXISTS "/Users/quargsgreene/code/Eglof/build/test/EglofTest[1]_tests-RelWithDebInfo.cmake" OR
     NOT "/Users/quargsgreene/code/Eglof/build/test/EglofTest[1]_tests-RelWithDebInfo.cmake" IS_NEWER_THAN "/Users/quargsgreene/code/Eglof/build/test/RelWithDebInfo/EglofTest" OR
     NOT "/Users/quargsgreene/code/Eglof/build/test/EglofTest[1]_tests-RelWithDebInfo.cmake" IS_NEWER_THAN "${CMAKE_CURRENT_LIST_FILE}")
    include("/Applications/CMake.app/Contents/share/cmake-4.1/Modules/GoogleTestAddTests.cmake")
    gtest_discover_tests_impl(
      TEST_EXECUTABLE [==[/Users/quargsgreene/code/Eglof/build/test/RelWithDebInfo/EglofTest]==]
      TEST_EXECUTOR [==[]==]
      TEST_WORKING_DIR [==[/Users/quargsgreene/code/Eglof/build/test]==]
      TEST_EXTRA_ARGS [==[]==]
      TEST_PROPERTIES [==[]==]
      TEST_PREFIX [==[]==]
      TEST_SUFFIX [==[]==]
      TEST_FILTER [==[]==]
      NO_PRETTY_TYPES [==[FALSE]==]
      NO_PRETTY_VALUES [==[FALSE]==]
      TEST_LIST [==[EglofTest_TESTS]==]
      CTEST_FILE [==[/Users/quargsgreene/code/Eglof/build/test/EglofTest[1]_tests-RelWithDebInfo.cmake]==]
      TEST_DISCOVERY_TIMEOUT [==[5]==]
      TEST_DISCOVERY_EXTRA_ARGS [==[]==]
      TEST_XML_OUTPUT_DIR [==[]==]
    )
  endif()
  include("/Users/quargsgreene/code/Eglof/build/test/EglofTest[1]_tests-RelWithDebInfo.cmake")
else()
  add_test(EglofTest_NOT_BUILT EglofTest_NOT_BUILT)
endif()
