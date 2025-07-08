#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/quargsgreene/code/Eglof/build/_deps/juce-subbuild
  /Applications/CMake.app/Contents/bin/cmake -Dcfgdir=/$CONFIGURATION$EFFECTIVE_PLATFORM_NAME -P /Users/quargsgreene/code/Eglof/build/_deps/juce-subbuild/juce-populate-prefix/tmp/juce-populate-mkdirs.cmake
  /Applications/CMake.app/Contents/bin/cmake -E touch /Users/quargsgreene/code/Eglof/build/_deps/juce-subbuild/juce-populate-prefix/src/juce-populate-stamp/$CONFIGURATION$EFFECTIVE_PLATFORM_NAME/juce-populate-mkdir
fi

