#include <iostream>
using namespace std;
#include "BubbleSort/bubblesort.h"
#include "sortingAlgorithm.h"
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[] = {64, 34, 25, 12, 22, 11, 96};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    BubbleUp bubbleup;
    BubbleDown bubbledown;

    cout << "Original Array: ";
    print(arr1, n);

    bubbleup.sort(arr1,n);
    cout << "Array Bubbled Up (Ascending): ";
    print(arr1, n);
    cout << endl;

    int arr2[] = {64, 34, 25, 12, 22, 11, 96};

    cout << "Original Array: ";
    print(arr2, n);

    bubbledown.sort(arr2,n);
    cout << "Array Bubbled Down (Descending): ";
    print(arr2, n);
    cout << endl;

    return 0;
}
