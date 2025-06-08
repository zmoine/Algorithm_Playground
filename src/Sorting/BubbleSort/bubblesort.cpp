#include "bubblesort.h"

//Ascending Implementation
void BubbleSort::sortAscending(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        //Compare adjacent elements
        for(int j = 0; j < n-i-1; j++){
            //Swap if they are out of order in ascending order
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//Descending Implementation
void BubbleSort::sortDescending(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        //Compare adjacent elements
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){
                //Swap if they are out of order in descending order
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

std::string BubbleSort::toString(){
    return "Bubble Sort";
}


