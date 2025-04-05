cmake_minimum_required(VERSION 3.30)
project(Algorithm_Playground)

set(CMAKE_CXX_STANDARD 20)

add_executable(Algorithm_Playground src/main.cpp
        src/BubbleSort/bubblesort.cpp
        src/BubbleSort/bubblesort.h
        src/sortingAlgorithm.h)
