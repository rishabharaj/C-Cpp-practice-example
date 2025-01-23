#include <iostream>
#include <cmath> // For the pow function
using namespace std;
int main() {
    cout << "Three-digit Armstrong numbers are:\n";
    
    for (int number = 100; number < 1000; ++number) {
        int sum = 0;
        int temp = number;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }

        if (sum == number) {
            cout << number << "\n";
        }
    }

    return 0;
}
