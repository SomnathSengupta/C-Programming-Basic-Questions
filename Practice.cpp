#include<iostream>
using namespace std;
int main()
{
  int row;
  cout << "Enter the number of rows: ";
  cin >> row;

  for (int i = 1; i <= row; i++) {
    //printing the space
    for (int sp = 1; sp <= row - i; sp++) {
      cout << " ";
    }
    //printing the star
    for (int j = 1; j <= 2*i - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}

  
