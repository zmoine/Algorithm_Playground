#include <iostream>
#include <chrono>
#include <algorithm>
#include "BubbleSort/bubblesort.h"
#include "InsertionSort/insertionsort.h"
#include "SelectionSort/selectionsort.h"
#include "QuickSort/quicksort.h"
#include "MergeSort/mergesort.h"
#include "ShellSort/shellsort.h"
#include "CountingSort/countingsort.h"
#include "RadixSort/radixsort.h"
using namespace std;
using namespace std::chrono;

//Function to print the elements of the array
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Function to sort the elements according to type
template<typename sortingAlgorithm>
void runSort(int array1[], int array2[], int n){
    sortingAlgorithm sorter;

    cout << "Original Array: \n";
    print(array1, n);     //Print original array

    auto start1 = high_resolution_clock::now();
    sorter.sortAscending(array1, n);    //Sort
    auto end1 = high_resolution_clock::now();
    cout << "\n" << sorter.toString() << " Ascending: \n";
    print(array1, n);     //Print sorted array
    cout << "Time: " << duration_cast<milliseconds>(end1-start1).count() << " ms\n" << endl;

    auto start2 = high_resolution_clock::now();
    sorter.sortDescending(array2, n);    //Sort
    auto end2 = high_resolution_clock::now();
    cout << "\n" << sorter.toString() << " Descending: \n";
    print(array2, n);     //Print sorted array
    cout << "Time: " << duration_cast<milliseconds>(end2-start2).count() << " ms" << endl;
}

int main(){
    const int SIZE = 1000;
    int mode;
    cout << "1. Random Numbers\n2. Sorted Ascending Numbers\n3. Sorted Descending Numbers\nChoose Input Mode: ";
    cin >> mode;

    int array[SIZE];
    while (true) {
        switch (mode) {
            case 1:
                for (int i=0; i<SIZE; i++) {
                    array[i] = rand() % SIZE;
                }
                break;
            case 2:
                for (int i=0; i<SIZE; i++) {
                    array[i] = rand() % SIZE;
                }
                sort(array, array+SIZE);
                break;
            case 3:
                for (int i=0; i<SIZE; i++) {
                    array[i] = rand() % SIZE;
                }
                sort(array, array+SIZE);
                reverse(array, array+SIZE);
                break;
            default:
                cout << "Invalid Input\nChoose Input Mode: ";
                cin >> mode;
                continue;
        }
        break;
    }

    int sort;
    while (true) {
        cout << "\n1. Insertion Sort\n2. Bubble Sort\n3. Selection Sort\n4. Quick Sort\n5. Merge Sort\n6. Shell Sort\n7. Counting Sort\n8. Radix Sort\n0. EXIT\nChoose Sorting Algorithm: ";
        cin >> sort;
        int array1[SIZE], array2[SIZE];
        copy(array, array+SIZE, array1);
        copy(array, array+SIZE, array2);

        switch (sort) {
            case 1: {
                runSort<InsertionSort>(array1, array2, SIZE);
                continue;
            }
            case 2: {
                runSort<BubbleSort>(array1, array2, SIZE);
                continue;
            }
            case 3: {
                runSort<SelectionSort>(array1, array2, SIZE);
                continue;
            }
            case 4: {
                runSort<QuickSort>(array1, array2, SIZE);
                continue;
            }
            case 5: {
                runSort<MergeSort>(array1, array2, SIZE);
                continue;
            }
            case 6: {
                runSort<ShellSort>(array1, array2, SIZE);
                continue;
            }
            case 7: {
                runSort<CountingSort>(array1, array2, SIZE);
                continue;
            }
            case 8: {
                runSort<RadixSort>(array1, array2, SIZE);
                continue;
            }
            case 0: {
                break;
            }
            default: {
                cout << "Invalid Input";
                continue;
            }
        }
        break;
    }
    return 0;
}
