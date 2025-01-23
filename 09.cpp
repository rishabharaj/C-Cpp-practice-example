#include <iostream>
using namespace std;
// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n1, n2;
    std::cout << "Enter two numbers to find prime numbers in the range: ";
    std::cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++) {
        if (isPrime(i)) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
