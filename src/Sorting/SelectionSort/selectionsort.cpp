#include "selectionsort.h"

//Ascending Implementation
void SelectionSort::sortAscending(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        //Swap minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

//Descending Implementation
void SelectionSort::sortDescending(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] > arr[minIndex]){
                minIndex = j;
            }
        }
        //Swap minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

std::string SelectionSort::toString(){
    return "Selection Sort";
}

