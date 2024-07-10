#include <iostream>
using namespace std;

// Function to compute GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // Note: (a * b) / gcd(a, b) can overflow for large a and b
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Compute LCM
    int result = lcm(num1, num2);

    // Output the LCM
    cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}


//Output
/*

Enter two numbers: 5 4
LCM of 5 and 4 is: 20


*/