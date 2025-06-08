#pragma once
#include "../sort.h"

class QuickSort : public Sort{
public:
    void sortAscending(int arr[], int n) override;
    void sortDescending(int arr[], int n) override;
    std::string toString() override;
private:
    static void quickSortAsc(int arr[], int low, int high);
    static int partitionAsc(int arr[], int low, int high);
    static void quickSortDesc(int arr[], int low, int high);
    static int partitionDesc(int arr[], int low, int high);
};