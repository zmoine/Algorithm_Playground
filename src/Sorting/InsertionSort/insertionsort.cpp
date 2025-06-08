#include "insertionsort.h"

//Ascending Implementation
void InsertionSort::sortAscending(int arr[], int n){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        //Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

//Descending Implementation
void InsertionSort::sortDescending(int arr[], int n){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        //Move elements greater than key one position ahead
        while (j >= 0 && arr[j] < key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

std::string InsertionSort::toString(){
    return "Insertion Sort";
}

