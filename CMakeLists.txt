cmake_minimum_required(VERSION 2.5 FATAL_ERROR)
PROJECT(FUZZPID C CXX)

add_library(fuzzPID SHARED  fuzzPID.cpp)
add_executable(demo_intercept ./getPID.cpp fuzzPID)
add_executable(demo_no_intercept ./getPID.cpp)
set_target_properties(fuzzPID PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(demo_intercept PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(demo_no_intercept PROPERTIES LINKER_LANGUAGE CXX)
