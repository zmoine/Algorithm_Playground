#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

#include <iostream>

class SortingAlgorithm{
public:
    virtual void sort(int arr[], int n) = 0;
    virtual ~SortingAlgorithm() {}
};

#endif
