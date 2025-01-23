#include<iostream> 
using namespace std;
int main() { 
const int SIZE = 5;
int arr[SIZE] = {10, 20, 30, 40, 50};
int *ptr = arr;
cout << "Elements of the array accessed using pointers:" << endl;
for (int i = 0; i < SIZE; ++i) {
cout << "Element at position" << i << ": " << *ptr << endl; ptr++; // Move the pointer to the next element
}
return  0;
}
