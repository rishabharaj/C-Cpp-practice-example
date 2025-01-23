
#include<iostream> 
using namespace std;

int sumofN(int n) { 
if (n == 0) {
return 0;
} 
else {
return n + sumofN(n - 1);
}
}
int main() {
int n;
cout << "Enter the natural number: "; cin >> n;
int sum= sumofN(n);
cout << "Sumof first " << n << " natural numbers is: " << sum<< endl; 
return 0;
}
