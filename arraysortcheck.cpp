#include<iostream>
using namespace std;

int isArraySortedOrder(int arr[], int n) {
    if(n==1) return 1; // Base case: single element is sorted
    
    return (arr[n-1] < arr[n-2]) ? 0 : isArraySortedOrder(arr, n-1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(isArraySortedOrder(arr, n))
        cout << "Array is sorted in non-decreasing order." << endl;
    else
        cout << "Array is not sorted." << endl;
    return 0;
}
