#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/quargsgreene/code/Eglof/libs
  /Applications/CMake.app/Contents/bin/cmake -DCMAKE_MESSAGE_LOG_LEVEL=VERBOSE -P /Users/quargsgreene/code/Eglof/build/_deps/juce-subbuild/juce-populate-prefix/tmp/juce-populate-gitclone.cmake
  /Applications/CMake.app/Contents/bin/cmake -E touch /Users/quargsgreene/code/Eglof/build/_deps/juce-subbuild/juce-populate-prefix/src/juce-populate-stamp/$CONFIGURATION$EFFECTIVE_PLATFORM_NAME/juce-populate-download
fi

