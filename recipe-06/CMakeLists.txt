cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-06 LANGUAGES C CXX)

message(STATUS "Is the cxx compiler loaded? ${CMAKE_CXX_COMPILER_LOADED}")

if(CMAKE_CXX_COMPILER_LOADED)
  message(STATUS "The c++ compiler ID is: ${CMAKE_CXX_COMPILER_ID}")
  message(STATUS "Is the c++ from GNU? ${CMAKE_COMPILER_IS_GNUCXX}")
  message(STATUS "The c++ compiler versoin is: ${CMAKE_CXX_COMPILER_VERSION}")
endif()

message(STATUS "Is the c compiler loaded? ${CMAKE_C_COMPILER_LOADED}")
if(CMAKE_C_COMPILER_LOADED)
  message(STATUS "The c compiler ID is: ${CMAKE_C_COMPILER_ID}")
  message(STATUS "Is the c from GNU? ${CMAKE_COMPILER_IS_GNUC}")
  message(STATUS "The c compiler version is: ${CMAKE_C_COMPILER_VERSION}")
endif()

