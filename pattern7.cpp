#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of rows in the upper half of the diamond:";
    cin>>n;

    //Upper half of the diamond
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n-i; s++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //Lower half of the diamond
    for (int i = n-1; i >= 1; i--)
    {
        for (int s = 1; s <= n-i; s++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
 return 0;
}

/*Output

Enter the no of rows in the upper half of the diamond:4
   *   
  ***  
 ***** 
*******
 ***** 
  ***  
   *

*/