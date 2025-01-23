#include <iostream>
using namespace std;
const int Arr = 10; // Maximum size for matrices
void transposeMatrix(int mat[][Arr], int rows, int cols) { int transposedMat[Arr][Arr];
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) { transposedMat[j][i] = mat[i][j];
}
}
cout << "Transpose of the matrix:" << endl; for (int i = 0; i < cols; ++i) {
for (int j = 0; j < rows; ++j) {
cout << transposedMat[i][j] << " ";
}
cout << endl;
}
}
int main() {
int rows, cols;
cout << "Enter number of rows and columns for the matrix: "; cin >> rows >> cols;
int matrix[Arr][Arr];
cout << "Enter elements for the matrix:" << endl; for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cin >> matrix[i][j];
}
}
cout << "Original matrix:" << endl; for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) { cout << matrix[i][j] << " ";
}
cout << endl;
}
transposeMatrix(matrix, rows, cols); 
return 0;
}
