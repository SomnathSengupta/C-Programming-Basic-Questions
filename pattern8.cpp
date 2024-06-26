#include <iostream>
using namespace std;
int main()
{
    // User input 
    int n;
    cin >> n;
    //Outer loop for row 
    for (int i=1;i<=n;i++) {
    
    //Loop for space 
        for (int sp=1;sp<=n-i;sp++) {

            cout <<" ";
        }
        // Inner loop for column
        for (int j=1; j<=i;j++) {

            //Printing *
            cout <<"*";
        }
        cout <<endl;
    }
}

/*

   *
  **
 ***
****


*/

