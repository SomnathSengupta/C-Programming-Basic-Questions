/*

Interpolation Search

Time-complexity: O(log(log(n))) (Average case) 
                 O(1) (Best case)
                 O(n) (Worst case)

Space-complexity: O(1)


Condition: 

The array should be sorted in uniform order

Formula:

Pos = low + [ (key-arr[low])*(high-low) / (arr[high]-arr[low]) ]

low --> the index from where you want to start the search
high --> the index from where you want to end the search
key --> the element you want to search

*/
#include<iostream>
using namespace std;

int interpolationSearch(int* arr, int low, int high, int key) {
  if (low <= high && key >= arr[low] && key <= arr[high]) {

      int pos = low +  (key-arr[low])*(high-low) / (arr[high]-arr[low]); //Calculating the position

      if (arr[pos] == key) {
          return pos;
      }

      else if (key < arr[pos]) {
        return interpolationSearch(arr, low, pos-1, key);
      }

      else {
        return interpolationSearch(arr, pos+1, high, key);
      }

  }
  return -1; //If the element is not found
}
int main()
{
  int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
  int n = sizeof(arr)/sizeof(arr[0]);

  //Taking input from the user
  int key;
  cout << "Enter the element you want to search: ";
  cin >> key;

  //Calling the interpolationSearch function
  int res = interpolationSearch(arr, 0, n-1, key);

  //Printing the result
  if (res != -1) {
    cout << "Element found at index: " << res;
  }
  else {
    cout << "Element not found";
  }
  return 0;
}

/*
Enter the element you want to search: 20
Element found at index: 6
*/
