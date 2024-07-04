#include<iostream>
using namespace std;
int main() {
    int n, sum=0;
    //Taking input from the user
    cout << "How many numbers you wan to add? ";
    cin >> n;
    //Calculating the sum
    sum = n*(n+1)/2;
    //Printing the sum
    cout << "The sum of the first 4" << n << " numbers is: " << sum;
}

/*
How many numbers you wan to add? 4
The sum of the first 44 numbers is: 10
*/