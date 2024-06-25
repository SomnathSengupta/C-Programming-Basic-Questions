#include<iostream>
using namespace std;
int main()
{
//user input 
    int n;
    cout<<"Enter the no of rows: ";
    cin>>n;

//Outer loop is for row 

for(int i=1;i<=n;i++)
{
// Inner loop is for Column
    for(int j=1;j<=i;j++)
    {
    // Printing *
        cout<<"*";
    }
    //Next line
    cout<<endl;
}
}
/*
Enter the no of rows: 4
*
**
***
****
*/
