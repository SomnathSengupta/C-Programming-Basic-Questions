#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    float result = 0.0;
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
    return round(result) == num;
}

int main() {
    int low, high;
    cout << "Enter the range (low high): ";
    cin >> low >> high;
    cout << "Armstrong numbers between " << low << " and " << high << " are: ";
    for (int i = low; i <= high; i++) {
        if (isArmstrong(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
