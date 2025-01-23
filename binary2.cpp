#include <iostream>
using namespace std;

// Recursive function to convert decimal to binary
int decimalToBinaryRecursive(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 2) + 10 * decimalToBinaryRecursive(n / 2);
}

// Recursive function to convert decimal to octal
int decimalToOctalRecursive(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 8) + 10 * decimalToOctalRecursive(n / 8);
}

// Recursive function to convert decimal to hexadecimal
string decimalToHexadecimalRecursive(int n) {
    if (n == 0) {
        return "";
    }
    int remainder = n % 16;
    string hexDigit;
    if (remainder < 10) {
        hexDigit = to_string(remainder);
    } else {
        hexDigit = 'A' + (remainder - 10);
    }
    return decimalToHexadecimalRecursive(n / 16) + hexDigit;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    // Handle the edge case where the input number is 0
    if (n == 0) {
        cout << "Binary: 0" << endl;
        cout << "Octal: 0" << endl;
        cout << "Hexadecimal: 0" << endl;
    } else {
        int binary = decimalToBinaryRecursive(n);
        int octal = decimalToOctalRecursive(n);
        string hexadecimal = decimalToHexadecimalRecursive(n);

        cout << "Binary: " << binary << endl;
        cout << "Octal: " << octal << endl;
        cout << "Hexadecimal: " << hexadecimal << endl;
    }

    return 0;
}
