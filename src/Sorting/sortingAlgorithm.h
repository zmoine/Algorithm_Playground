#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

#include <iostream>

//Abstract base class for sorting algorithms
class SortingAlgorithm{
public:
    virtual void sort(int arr[], int n) = 0; //Virtual method for sorting an array
    virtual ~SortingAlgorithm() {} //Virtual destructor for cleanup
};

#endif
