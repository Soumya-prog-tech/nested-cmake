cmake_minimum_required(VERSION 3.13)
set(PROJECT_NAME snacks)
set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES 
  src/coffee.cpp
  include/coffee.hpp
)
project(${PROJECT_NAME})

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC include)

