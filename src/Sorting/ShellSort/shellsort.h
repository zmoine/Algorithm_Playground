#pragma once
#include "../sorting.h"

class ShellSort : public Sort{
public:
    void sortAscending(int arr[], int n) override;
    void sortDescending(int arr[], int n) override;
    std::string toString() override;
};