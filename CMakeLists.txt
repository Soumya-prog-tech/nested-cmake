cmake_minimum_required(VERSION 3.13)
set(PROJECT_NAME wisher)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(${PROJECT_NAME})
set(SOURCE_FILES 
  src/main.cpp
  src/Greeter.cpp
  include/Greeter.hpp
)

add_subdirectory(snacks snacks/build)


add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PUBLIC snacks)

