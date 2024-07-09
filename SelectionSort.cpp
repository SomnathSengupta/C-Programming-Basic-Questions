#include<bits/stdc++.h>
using namespace std;

void selectionSort(int* arr, int n) {
    for (int i = 0; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            if (arr[i] > arr[j]) 
            // Swapping the values 
                swap(arr[i], arr[j]);
        }
    }
}
int main() {
    //Taking the array size
    int n; 
    cout << "Enter the array size: ";
    cin >> n;
// Making the array 
    int arr[n];
    cout << "Enter the values:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
// Calling the main function 
    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

/*
Enter the array size: 6
Enter the values:12 8 9 10 7 6
6 7 8 9 10 12

*/