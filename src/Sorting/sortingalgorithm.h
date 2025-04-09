#pragma once

//Abstract base class for sorting algorithms
class SortingAlgorithm{
public:
    virtual void sort(int arr[], int n) = 0;     //Sort array method
    virtual ~SortingAlgorithm() = default;       //Virtual destructor for cleanup
};
