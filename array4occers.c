#include <stdio.h>

int countOccurrences(int arr[], int size, int x);

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2, 5, 6, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 2; // The number to find occurrences of
    
    int occurrences = countOccurrences(arr, size, x);
    
    printf("Number %d occurs %d times in the array.\n", x, occurrences);
    
    return 0;
}

int countOccurrences(int arr[], int size, int x) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    
    return count;
}
