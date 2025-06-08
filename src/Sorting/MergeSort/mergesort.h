#pragma once
#include "../sort.h"

class MergeSort : public Sort{
public:
    void sortAscending(int arr[], int n) override;
    void sortDescending(int arr[], int n) override;
    std::string toString() override;
private:
    static void mergeSortAsc(int arr[], int left, int right);
    static void mergeAsc(int arr[], int left, int mid, int right);
    static void mergeSortDesc(int arr[], int left, int right);
    static void mergeDesc(int arr[], int left, int mid, int right);

};