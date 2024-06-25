#include<iostream>
using namespace std;
int main()
{
    int previous1=0,previous2=1,current,n;
    cout<<"Enter the no of terms you  want:";
    cin>>n;
    cout<<previous1<<" ";
    cout<<previous2<<" ";

    for (int i = 0; i < (n-2); i++)
    {
        current=previous1+previous2;
        previous1=previous2;
        previous2=current;
        cout<<current<<" ";
        
    }
    
 return 0;
}

/*
Output

Enter the no of terms you  want:7
0 1 1 2 3 5 8

*/