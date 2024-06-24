#include<iostream>
using namespace std;
int main()
{
//user input 
    int n;
    cin>>n;

//Outer loop is for row 

for(int i=1;i<=n;i++)
{
// Inner loop is for Column
    for(int j=65;j<=65+i-1;j++)
    {
    // Printing 
        cout<<(char)j;
    }
    //Next line
    cout<<endl;
}
}