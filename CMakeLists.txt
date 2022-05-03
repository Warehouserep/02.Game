cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(03.homework VERSION 0.0.1 LANGUAGES C CXX)

add_executable(
	check_value
	check_value.cpp
)

add_executable(
	random_value
	random_value.cpp
	random_value.h
)

add_executable(
	high_scores
	high_scores.cpp
	high_scores.h
)

add_executable(
	argument
	argument.cpp
	argument.h
)
