#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;
    int a[rows][cols], b[rows][cols], sum[rows][cols];
    cout << "Enter elements of first matrix: ";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> a[i][j];
    cout << "Enter elements of second matrix: ";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> b[i][j];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];
    cout << "Sum of the two matrices is: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}


/*

Output
Enter the number of rows and columns: 2 2
Enter elements of first matrix: 2 4 5 6
Enter elements of second matrix: 3 5 6 1
Sum of the two matrices is: 
5 9 
11 7 

*/