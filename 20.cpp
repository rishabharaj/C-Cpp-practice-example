#include <iostream> 
using namespace std;
const int Size = 10; 
void multiplyMatrices(int mat1[][Size], int mat2[][Size], int result[][Size],
int row1, int col1, int row2, int col2) {
if (col1 != row2) {
cout << "Matrices cannot be multiplied. Invalid dimensions." << endl; return; }
for (int i = 0; i < row1; ++i) { for (int j = 0; j < col2; ++j) { result[i][j] = 0;
for (int k = 0; k < col1; ++k) {
result[i][j] += mat1[i][k] * mat2[k][j]; }
}
}
}
int main() {
int row1, col1, row2, col2;
cout << "Enter number of rows and columns for first matrix: "; cin >> row1 >> col1;
cout << "Enter number of rows and columns for second matrix: ";
cin >> row2 >> col2; if (col1 != row2) {
cout << "Matrices cannot be multiplied. Invalid dimensions." << endl;
return 1; }
int mat1[Size][Size], mat2[Size][Size], result[Size][Size]; cout << "Enter elements for first matrix:" << endl;
for (int i = 0; i < row1; ++i) { for (int j = 0; j < col1; ++j) { cin >> mat1[i][j]; }
}
cout << "Enter elements for second matrix:" << endl; for (int i = 0; i < row2; ++i) {
for (int j = 0; j < col2; ++j) {
cin >> mat2[i][j]; }
}
multiplyMatrices(mat1, mat2, result, row1, col1, row2, col2); cout << "Resultant matrix after multiplication:" << endl;
for (int i = 0; i < row1; ++i) {
for (int j = 0; j < col2; ++j) { cout << result[i][j] << " "; }
 

cout << endl; }
return 0;
 }
