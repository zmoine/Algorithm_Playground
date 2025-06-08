#pragma once
#include <string>

//Abstract base class for sorting algorithms
class Sort{
public:
    virtual void sortAscending(int arr[], int n) = 0;     //Sort ascending array method
    virtual void sortDescending(int arr[], int n) = 0;     //Sort descending array method
    virtual std::string toString() = 0;
    virtual ~Sort() = default;       //Virtual destructor for cleanup
};
