#include <iostream>
using namespace std;
int main() {
    int x = 2, y = 3;
    cout << "Enter two integers: ";
    cin >> x >> y;
    // Check if the input was successful
    if (!cin) {
        cout << "Invalid input!" << endl;
        return 1;
    }
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}