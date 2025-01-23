#include<iostream>
using namespace std;

int main() {
    int row;
    cin >> row;
    for (int i = 1; i <= row; ++i) { // loop for each row
            // each row me space ya character ke liye do different loop

        for (int j = 1; j < i; ++j) { // left base triangle agar print na ho
            cout << "0";              // righ base triangle agar print ho
        }                             // left & large bottom base agar only yhi loop chale 
        for (int j = i; j <= row; ++j) { // row times print krega
            cout << "1";        // pre & post space print symetrical -equilateral
        }                   // do charc ke wajah se symetrical hai warna lower or upper half triangle
        cout << endl;
    }
    return 0;
}