#include "bubblesort.h"

//Bubble Sort Ascending Implementation
void BubbleUp::sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        //Compare adjacent elements
        for(int j=0; j<n-i-1; j++){
            //Swap if they are out of order in ascending order
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//Bubble Sort Descending Implementation
void BubbleDown::sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        //Compare adjacent elements
        for(int j=0; j<n-i-1; j++){
            if(arr[j] < arr[j+1]){
                //Swap if they are out of order in descending order
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
