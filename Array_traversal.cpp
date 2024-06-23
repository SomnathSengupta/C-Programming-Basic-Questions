#include<iostream>
using namespace std;
int main()
{
    //Array initialization
    int arr[5] ;

    //Array declaration
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }  

    //Printing Array elements
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }  

 return 0;
}

/* Test Input
    3 4 5 1 2
    Output
    3 4 5 1 2   */