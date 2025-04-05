cmake_minimum_required(VERSION 3.30)
project(Algorithm_Playground)

set(CMAKE_CXX_STANDARD 20)

add_executable(Algorithm_Playground src/SortingAlgorithms/main.cpp
        src/SortingAlgorithms/BubbleSort/bubblesort.cpp
        src/SortingAlgorithms/BubbleSort/bubblesort.h
        src/SortingAlgorithms/sortingAlgorithm.h)
