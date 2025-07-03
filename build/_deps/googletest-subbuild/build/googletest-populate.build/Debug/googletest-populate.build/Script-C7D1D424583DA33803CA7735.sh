#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/quargsgreene/code/Eglof/libs
  /Applications/CMake.app/Contents/bin/cmake -DCMAKE_MESSAGE_LOG_LEVEL=VERBOSE -P /Users/quargsgreene/code/Eglof/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp/googletest-populate-gitclone.cmake
  /Applications/CMake.app/Contents/bin/cmake -E touch /Users/quargsgreene/code/Eglof/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/$CONFIGURATION$EFFECTIVE_PLATFORM_NAME/googletest-populate-download
fi

