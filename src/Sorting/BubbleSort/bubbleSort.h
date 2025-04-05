#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "../Sorting/sortingAlgorithm.h"

//BubbleUp class inherits from SortingAlgorithm abstract class
class BubbleUp : public SortingAlgorithm{
public:
    void sort(int arr[], int n); //Implements sort method
};

//BubbleDown class inherits from SortingAlgorithm abstract class
class BubbleDown : public SortingAlgorithm{
public:
    void sort(int arr[], int n); //Implements sort method
};

#endif
