#include "quicksort.h"

//Ascending Implementation
void QuickSort::sortAscending(int arr[], int n){
    quickSortAsc(arr, 0, n-1);
}

//Descending Implementation
void QuickSort::sortDescending(int arr[], int n){
    quickSortAsc(arr, 0, n-1);
}

// ----- Helper functions -----
//Ascending QuickSort
void QuickSort::quickSortAsc(int arr[], int low, int high){
    if (low < high){
        int pi = partitionAsc(arr, low, high);
        quickSortAsc(arr, low, pi-1);
        quickSortAsc(arr, pi+1, high);
    }
}

int QuickSort::partitionAsc(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j = low; j < high; j++){
        if (arr[j] < pivot){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return i+1;
}

//Descending QuickSort
void QuickSort::quickSortDesc(int arr[], int low, int high){
    if (low < high){
        int pi = partitionDesc(arr, low, high);
        quickSortDesc(arr, low, pi-1);
        quickSortDesc(arr, pi+1, high);
    }
}

int QuickSort::partitionDesc(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j = low; j < high; j++){
        if (arr[j] > pivot){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

std::string QuickSort::toString(){
    return "Quick Sort";
}

