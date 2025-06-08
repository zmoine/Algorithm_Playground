#include "radixsort.h"

//Ascending Implementation
void RadixSort::sortAscending(int arr[], int n){
    int maxVal = getMax(arr, n);

    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countSortAsc(arr, n, exp);
}

//Descending Implementation
void RadixSort::sortDescending(int arr[], int n){
    int maxVal = getMax(arr, n);

    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countSortDesc(arr, n, exp);
}

// ----- Helper Functions -----
//Helper to get maximum value
int RadixSort::getMax(int arr[], int n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

//Counting sort based on digit place (ascending)
void RadixSort::countSortAsc(int arr[], int n, int exp){
    int* output = new int[n];
    int count[10] = {};

    //Count digit occurrences
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    //Accumulate counts
    for (int i = 1; i < 10; i++)
        count[i] += count[i-1];

    //Build output
    for (int i = n-1; i >= 0; i--){
        int digit = (arr[i] / exp) % 10;
        output[count[digit]-1] = arr[i];
        count[digit]--;
    }

    //Copy back
    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    delete[] output;
}

//Counting sort based on digit place (descending)
void RadixSort::countSortDesc(int arr[], int n, int exp){
    int* output = new int[n];
    int count[10] = {};

    //Count digit occurrences
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    //Reverse accumulate counts
    for (int i = 8; i >= 0; i--)
        count[i] += count[i+1];

    //Build output
    for (int i = 0; i < n; i++){
        int digit = (arr[i] / exp) % 10;
        output[count[digit]-1] = arr[i];
        count[digit]--;
    }

    //Copy back
    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    delete[] output;
}

std::string RadixSort::toString(){
    return "Radix Sort";
}

