#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "../sortingalgorithm.h"

class BubbleUp : public SortingAlgorithm{
public:
    void sort(int arr[], int n);
};

class BubbleDown : public SortingAlgorithm{
public:
    void sort(int arr[], int n);
};

#endif
