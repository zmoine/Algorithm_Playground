#pragma once
#include "../sort.h"

class InsertionSort : public Sort{
public:
    void sortAscending(int arr[], int n) override;
    void sortDescending(int arr[], int n) override;
    std::string toString() override;
};