#include<iostream>  
using namespace std;
struct Complex { float real; float imag; };
Complex addComplex(const Complex &c1, const Complex &c2) {
Complex sum;
sum.real = c1.real + c2.real; sum.imag = c1.imag + c2.imag; return sum;
}
int main() { 
Complex num1, num2, result;
cout << "Enter real and imaginary parts of first complex number:" << endl;
cout << "Real part: ";
cin >> num1.real;
cout << "Imaginary part: "; cin >> num1.imag;
cout << "Enter real and imaginary parts of second complex number: " << endl;
cout << "Real part: "; cin >> num2.real;
cout << "Imaginary part: ";
cin >> num2.imag;
result = addComplex(num1, num2);
cout << "Sum of the complex numbers: " << result.real << " + " <<result.imag << "i"; cout<< endl;
return 0;
}