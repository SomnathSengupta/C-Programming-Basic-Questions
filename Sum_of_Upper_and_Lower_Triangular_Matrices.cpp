#include <iostream>
using namespace std;

int main() {
    int rows, cols, sumUpper = 0, sumLower = 0;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;
    if(rows != cols) {
        cout << "Matrix is not square!" << endl;
        return 0;
    }
    int matrix[rows][cols];
    cout << "Enter elements of matrix: ";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i < j)
                sumUpper += matrix[i][j];
            else if(i > j)
                sumLower += matrix[i][j];
        }
    }
    cout << "Sum of Upper Triangular matrix: " << sumUpper << endl;
    cout << "Sum of Lower Triangular matrix: " << sumLower << endl;
    return 0;
}
