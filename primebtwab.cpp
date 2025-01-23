#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) { cout<<num<<" is not prime number"<<endl;
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {cout<<num<<" is not prime number"<<endl;
            return false;
        }
    }
    cout<< num<<" is prime number " << endl;
    return true;
}

int main() {
    cout << "Prime numbers between 50 and 100 are:" << endl;
    for (int i = 50; i <= 100; ++i) {
        if (isPrime(i)) {
          //  cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
