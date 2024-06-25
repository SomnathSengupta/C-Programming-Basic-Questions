#include <iostream>
using namespace std ;
int main()
{
    //User input
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    //Outer loop for row
    for (int i = 1;i <= n; i++) {
        // Loop for space 
        for (int s = 1;s <= n-i; s++){
            cout << " ";
        }
        // Inner Loop for column
        for (int j = 1; j <= 2*i - 1; j++){
            // Printing *
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n-i; s++) {
            cout << " ";
        }

        for (int j = 1; j <= 2*i - 1; j++){
            cout << "*";
        }
        // Printing the next line 
        cout << endl;
    }
}
/*
   Enter the no of rows: 4
   *
  ***
 *****
*******
 *****
  ***
   *
*/
