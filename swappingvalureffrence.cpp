#include <iostream>
using namespace std;

// Function to swap two variables using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two variables using call by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Before swapping - x: " << x << ", y: " << y << endl;

    // Call the function with values of x and y
    swapByValue(x, y);

    cout << "After swapping by value - x: " << x << ", y: " << y << endl;

    // Call the function with references of x and y
    swapByReference(x, y);

    cout << "After swapping by reference - x: " << x << ", y: " << y << endl;

    return 0;
}