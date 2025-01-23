#include <iostream>
#include <cmath>
using namespace std;


void isPrime(int num,int n) {
    for(num; num<=n;num++){
    if (num < 2) {
        cout << num << " is not a prime number" << endl;
        return;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            cout << num << " is not a prime number" << endl;
            return;
        }
    }
    cout << num << " is a prime number" << endl;}
}

int main() {
    int num;
    int n;
    cout << "Enter a number: ";
    cin >> num>>n;

    isPrime(num,n);

    return 0;
}
