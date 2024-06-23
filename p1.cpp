#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Reading input from STDIN. Printing output to STDOUT */ 
    string str1,str2,str3;
    cin>>str1>>str2;

    //Printing 
    cout<<str1.size()<<" "<<str2.size()<<endl;
    
    //Concatenating the user inputed strings
    str3=str1+str2;

    //Printing 
    cout<<str3<<endl;
    swap(str1[0],str2[0]);  /*I am using swap function from algorithm header 
                             but you can also use a third variable*/

    cout<<str1<<" "<<str2;
    return 0;
}

/*Test Input:
    abcd ef
    4 2
  Output:    
    abcdef 
    ebcd af*/
