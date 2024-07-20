#include<iostream>
using namespace std;
void merge(int* arr, int n, int* left, int nL, int* right, int nR) {
    int i = 0, j = 0, k = 0;
    while (i < nL && j < nR) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
            k++;
        }
        else {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    while (i < nL) {
        arr[k] = left[i];
            i++;
            k++;
    }

    while (j < nR) {
        arr[k] = right[j];
            j++;
            k++;
    }
}
void mergeSort(int* arr, int n) {
    if (n < 2) 
        return;
    int mid = n/2; //Calculating the mid

    //Creating left and right sub arrays
    int left[mid];
    int right[n - mid];

    //Putting the elements in left subarray
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    //Putting the elements in right subarray
    for (int i = mid; i < n; i++) {
        right[i - mid] = arr[i];
    }

    mergeSort(left, mid);
    mergeSort(right, n - mid);
    merge(arr, n, left, mid, right, n - mid);

}
int main() {
    int arr[7] = {30, 8, 5, 2, 1, 3, 7};
    int n = 7;

    mergeSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}



/*Output
1 2 3 5 7 8 30    */ 
