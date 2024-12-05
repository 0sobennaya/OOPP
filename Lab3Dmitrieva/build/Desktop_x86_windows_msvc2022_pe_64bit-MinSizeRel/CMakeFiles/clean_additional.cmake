# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "MinSizeRel")
  file(REMOVE_RECURSE
  "CMakeFiles\\Lab3Dmitrieva_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Lab3Dmitrieva_autogen.dir\\ParseCache.txt"
  "Lab3Dmitrieva_autogen"
  )
endif()
