#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: if n is 0 or 1, return n
    }
    // Recursive case: return the sum of the previous two Fibonacci numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series up to 100 using recursion
void printFibonacciSeries(int n, int limit) {
    int fib = fibonacci(n);
    if (fib <= limit) {
        cout << fib << " ";
        printFibonacciSeries(n + 1, limit);
    }
}
int main() {
    cout << "Fibonacci series up to 100:" << endl;
    printFibonacciSeries(0, 100);
    cout << endl;
    return 0;
}
