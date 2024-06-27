#include<iostream>
using namespace std;

void binarySearch(int* arr, int n, int key) {
  int low = 0, high = n - 1;
  while (low <= high) {

    //Calculating the mid

    int mid = low + (high - low) / 2; 

    if (arr[mid] == key) {
      cout << key << " is at " << mid << " index";
      return;
    }

    else if (key > arr[mid]) {

    //Resetting the low

      low = mid + 1; 
    }

    else {

     //Resetting the high

      high = mid - 1; 
    }
  }
  //Element not found

  cout << "Element not found";
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;

  //Taking Input
  int key;
  cout << "Enter the element: ";
  cin >> key;

  //Function Calling 

  binarySearch(arr, n, key);

  return 0;
}

// Output
/* 
Enter the element: 3
3 is at 2 index

*/