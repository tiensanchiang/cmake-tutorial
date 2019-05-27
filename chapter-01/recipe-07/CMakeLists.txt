cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-07 LANGUAGES C CXX)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build Type" FORCE)
endif()

message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")

message(STATUS "c flags, Debug configuration: ${CMAKE_C_FLAGS_DEBUG}")
message(STATUS "c flags, Release configuration: ${CMAKE_C_FLAGS_RELEASE}")

message(STATUS "c++ flags, Debug configuration: ${CMAKE_CXX_FLAGS_DEBUG}")
message(STATUS "c++ flags, Release configuration: ${CMAKE_CXX_FLAGS_RELEASE}")
