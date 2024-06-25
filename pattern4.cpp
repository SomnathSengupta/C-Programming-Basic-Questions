#include<iostream>
using namespace std;
int main()
{
    int count =65;
//user input 
    int n;
    cout << "Enter the no of rows: ";
    cin>>n;

//Outer loop is for row 

for(int i=n;i>=1;i--)
{
// Inner loop is for Column
    for(int j=1;j<=i;j++)
    {
    // Printing 
        cout<<(char)count;
        count =count+2;
    }
    //Next line
    cout<<endl;
}
}

/*
Enter the no of rows: 4
ACEG
IKM
OQ
S

*/
