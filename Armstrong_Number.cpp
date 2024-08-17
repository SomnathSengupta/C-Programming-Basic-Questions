#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (round(result) == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    return 0;
}

/*

Output-
Enter an integer: 153
153 is an Armstrong number.

*/