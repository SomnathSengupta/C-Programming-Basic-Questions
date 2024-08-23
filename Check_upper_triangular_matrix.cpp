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
    bool isUpperTriangular = true;
    cout << "Enter elements of matrix: ";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    for(int i = 1; i < rows; i++)
        for(int j = 0; j < i; j++)
            if(matrix[i][j] != 0)
                isUpperTriangular = false;
    if(isUpperTriangular)
        cout << "Matrix is an Upper Triangular matrix." << endl;
    else
        cout << "Matrix is not an Upper Triangular matrix." << endl;
    return 0;
}
