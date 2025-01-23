#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursively calculate factorial
    }
}

int main() {
    int num;
    cout << "Enter a number to find factorial: ";
    cin >> num;

    // Check for negative input
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate and print factorial
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
