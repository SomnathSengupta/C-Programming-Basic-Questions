#include <iostream>
using namespace std;


int main() {

    //String initialization and declaration
    string str1,str2,str3;
    cin>>str1>>str2;

    //Concatenating the user inputted strings
    str3=str1+str2;                 

    //Printing the concatenated string
    cout<<str3<<endl; 

    return 0;
}

/*Test Input:
    abcd ef
  Output:    
    abcdef */