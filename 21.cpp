#include <iostream>
using namespace std;
int findLargestElement(int arr[], int size) { int largest = arr[0];
for (int i = 1; i < size; ++i) {
if (arr[i] > largest) { largest = arr[i];
}
}
return largest;
}
int findSmallestElement(int arr[], int size) { int smallest = arr[0];
for (int i = 1; i < size; ++i) { if (arr[i] < smallest) { smallest = arr[i];
}
}
return smallest;
}
int main() { int size;
cout << "Enter the size of the array: ";
cin >> size;
if (size <= 0) {
cout << "Please enter a valid size for the array." << endl; return 1;
}
int arr[size];
cout << "Enter elements of the array:" << endl; 
for (int i = 0; i < size; ++i) {
cin >> arr[i];
}
int largest = findLargestElement(arr, size); int smallest = findSmallestElement(arr, size);
cout << "The largest element in the array is: " << largest << endl;
cout << "The smallest element in the array is: " << smallest << endl;
return 0;
}
