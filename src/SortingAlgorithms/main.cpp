#include <iostream>
#include "BubbleSort/bubblesort.h"
using namespace std;

//Function to print the elements of an array
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    //Bubble Sort
    //Create instance of BubbleUp and BubbleDown
    BubbleUp bubbleup;
    BubbleDown bubbledown;

    //Bubble Sort Ascending
    int arrBubbleAsc[] = {64, 34, 25, 12, 22, 11, 96};
    int n = sizeof(arrBubbleAsc)/sizeof(arrBubbleAsc[0]); //Size
    cout << "Original Array: ";
    print(arrBubbleAsc, n); //Print original array
    bubbleup.sort(arrBubbleAsc,n); //Sort
    cout << "Array Bubbled Up (Ascending): ";
    print(arrBubbleAsc, n); //Print sorted array
    cout << endl;

    //Bubble Sort Descending
    int arrBubbleDesc[] = {64, 34, 25, 12, 22, 11, 96};
    cout << "Original Array: ";
    print(arrBubbleDesc, n); //Print original array
    bubbledown.sort(arrBubbleDesc,n); //Sort
    cout << "Array Bubbled Down (Descending): ";
    print(arrBubbleDesc, n); //Print sorted array
    cout << endl;

    return 0;
}
