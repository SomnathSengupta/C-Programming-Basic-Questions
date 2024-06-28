#include <iostream>
using namespace std;

// Function to find the GCD of two numbers using the Euclidean algorithm
int findGCD(int number1, int number2) {
    // Loop until one of the numbers becomes zero
    while (number2 != 0) {
        // Store the remainder of number1 divided by number2
        int remainder = number1 % number2;
        // Update number1 to number2 and number2 to the remainder
        number1 = number2;
        number2 = remainder;
    }
    // When number2 becomes zero, number1 will be the GCD
    return number1;
}

int main() {
    int num1, num2;
    
    // Taking input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Calling the findGCD function and storing the result
    int gcd = findGCD(num1, num2);
    
    // Printing the result
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    
    return 0;
}


//Output
/*

Enter the first number: 6
Enter the second number: 12
The GCD of 6 and 12 is: 6


*/