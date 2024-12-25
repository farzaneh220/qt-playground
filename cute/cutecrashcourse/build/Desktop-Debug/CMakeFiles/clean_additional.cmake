# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/cutecrashcourse_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/cutecrashcourse_autogen.dir/ParseCache.txt"
  "cutecrashcourse_autogen"
  )
endif()
