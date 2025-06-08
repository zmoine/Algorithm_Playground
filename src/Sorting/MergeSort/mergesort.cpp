#include "mergesort.h"

//Ascending Implementation
void MergeSort::sortAscending(int arr[], int n){
    mergeSortAsc(arr, 0, n-1);
}

//Descending Implementation
void MergeSort::sortDescending(int arr[], int n){
    mergeSortDesc(arr, 0, n-1);
}

// ----- Helper Functions -----
//Ascending MergeSort
void MergeSort::mergeSortAsc(int arr[], int left, int right){
    if (left < right){
        int mid = (left+right) / 2;
        mergeSortAsc(arr, left, mid);
        mergeSortAsc(arr, mid+1, right);
        mergeAsc(arr, left, mid, right);
    }
}

void MergeSort::mergeAsc(int arr[], int left, int mid, int right){
    int n1 = mid-left+1;
    int n2 = right-mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left+i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid+1+j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

//Descending MergeSort
void MergeSort::mergeSortDesc(int arr[], int left, int right){
    if (left < right){
        int mid = (left+right) / 2;
        mergeSortDesc(arr, left, mid);
        mergeSortDesc(arr, mid+1, right);
        mergeDesc(arr, left, mid, right);
    }
}

void MergeSort::mergeDesc(int arr[], int left, int mid, int right){
    int n1 = mid-left+1;
    int n2 = right-mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left+i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid+1+j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] >= R[j]) ? L[i++] : R[j++];

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

std::string MergeSort::toString(){
    return "Merge Sort";
}

