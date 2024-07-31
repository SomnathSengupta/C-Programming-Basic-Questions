#include<bits/stdc++.h>
using namespace std;
int partition(int *arr, int start, int end) {
    //Selcting the 1st element as pivort element:
    int pivot = arr[start];
    
    //Calculating the pivot index and doing the operation
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }
    
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);
    
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        
        while (arr[j] > pivot) {
            j--;
        }
        
        if (i < pivotIndex && j > pivotIndex) 
            swap(arr[i++], arr[j--]);
    }
    
    //Returning pivot index
    return pivotIndex;
}
void quickSort(int *arr, int start, int end) {
    //Base Condition:
    if (start >= end) 
        return;
    
    //Fetching the pivort index:
    int pivotIndex = partition(arr, start, end);
    
    //Doing Quick Sort on left Array:
    quickSort(arr, start, pivotIndex - 1);
    
    //Doing Quick Sort on right Array:
    quickSort(arr, pivotIndex + 1, end);
}

int main() {
    //Declaring the Array and conting its size:
    int arr[] = {3, 2, 4, 6, 1, 5, 0, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //Calling the quicksort function
    quickSort(arr, 0, n - 1);
    
    //Printing the sorted array:
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// Sorted Array: 0 1 2 3 4 5 6 10 
