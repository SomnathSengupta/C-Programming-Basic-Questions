#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;
    if(rows != cols) {
        cout << "Matrix is not square!" << endl;
        return 0;
    }
    int matrix[rows][cols];
    bool isLowerTriangular = true;
    cout << "Enter elements of matrix: ";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    for(int i = 0; i < rows - 1; i++)
        for(int j = i + 1; j < cols; j++)
            if(matrix[i][j] != 0)
                isLowerTriangular = false;
    if(isLowerTriangular)
        cout << "Matrix is a Lower Triangular matrix." << endl;
    else
        cout << "Matrix is not a Lower Triangular matrix." << endl;
    return 0;
}
