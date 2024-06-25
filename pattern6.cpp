#include<iostream>
using namespace std;
int main()
{
    //User input  n  
    int n,m;
    cin >>n>>m;
    for (int row=1;row<=n;row++){
    
        for (int col=1;col<=m;col++){
        
            if ((row==1||row==n)||(col==1||col==m)){
            
                // Printing "*"
                cout <<"*";
            }
            else {
                // Printing Space 
                cout << " ";
            }
        }
        // Changing line 
        cout <<endl;
    }
}
// OUTPUT:
/*
*****
*   *
*   *
*****
*/