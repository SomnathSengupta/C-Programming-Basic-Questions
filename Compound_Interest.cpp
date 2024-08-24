#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal, rate, time, compoundInterest;
    cout << "Enter principal, rate, and time: ";
    cin >> principal >> rate >> time;
    compoundInterest = principal * pow((1 + rate/100), time) - principal;
    cout << "Compound Interest: " << compoundInterest << endl;
    return 0;
}
