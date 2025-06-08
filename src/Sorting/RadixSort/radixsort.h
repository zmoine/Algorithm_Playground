#pragma once

#include "../sort.h"

class RadixSort : public Sort{
public:
    void sortAscending(int arr[], int n) override;
    void sortDescending(int arr[], int n) override;
    std::string toString() override;
private:
    static int getMax(int arr[], int n);
    static void countSortAsc(int arr[], int n, int exp);
    static void countSortDesc(int arr[], int n, int exp);
};