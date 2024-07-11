#include<bits/stdc++.h>
using namespace std;
// Function 
void bubblesort(int*arr,int n) {
    for (int i =1;i<=n-1;i++) {
        for (int j=0;j<=n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
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
    bubblesort(arr,n);
    for(int i=0; i<=n-1;i++) {
    
    cout<<arr[i]<<" ";
    }
return 0;
}


/*
Enter the array size: 6
Enter the values:12 8 9 10 7 6
6 7 8 9 10 12

*/