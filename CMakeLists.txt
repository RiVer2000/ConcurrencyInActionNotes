cmake_minimum_required(VERSION 3.25)
project(main
  VERSION 0.0.1
  LANGUAGES CXX
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/BIN)
find_package(Threads REQUIRED)
add_subdirectory(src)
