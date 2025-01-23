#include <stdio.h>

int findLargest(int arr[], int size);

int main() {
    int arr[] = {10, 5, 7, 21, 15, 4, 9, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = findLargest(arr, size);
    printf("size of array = %d\n",size);
    printf("The largest number in the array is: %d\n", largest);
    
    return 0;
}

int findLargest(int arr[], int size) {
    int max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}
