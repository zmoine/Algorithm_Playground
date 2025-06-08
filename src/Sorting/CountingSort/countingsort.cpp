#include "countingsort.h"
#include <algorithm>

//Ascending Implementation
void CountingSort::sortAscending(int arr[], int n){
    int maxVal = *std::max_element(arr, arr+n);
    int minVal = *std::min_element(arr, arr+n);
    int range = maxVal-minVal+1;

    int* count = new int[range]();
    int* output = new int[n];

    //Count occurrences
    for (int i = 0; i < n; i++)
        count[arr[i]-minVal]++;

    //Accumulate counts
    for (int i = 1; i < range; i++)
        count[i] += count[i-1];

    //Build output
    for (int i = n-1; i >= 0; i--){
        output[count[arr[i]-minVal]-1] = arr[i];
        count[arr[i]-minVal]--;
    }

    //Copy to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    delete[] count;
    delete[] output;
}

//Descending Implementation
void CountingSort::sortDescending(int arr[], int n){
    int maxVal = *std::max_element(arr, arr+n);
    int minVal = *std::min_element(arr, arr+n);
    int range = maxVal-minVal+1;

    int* count = new int[range]();
    int* output = new int[n];

    //Count occurrences
    for (int i = 0; i < n; i++)
        count[arr[i]-minVal]++;

    //Accumulate counts in reverse for descending order
    for (int i = range-2; i >= 0; i--)
        count[i] += count[i+1];

    //Build output
    for (int i = 0; i < n; i++){
        output[count[arr[i]-minVal]-1] = arr[i];
        count[arr[i]-minVal]--;
    }

    //Copy to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    delete[] count;
    delete[] output;
}

std::string CountingSort::toString(){
    return "Counting Sort";
}

