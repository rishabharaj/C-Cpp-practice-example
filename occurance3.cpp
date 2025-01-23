#include <iostream>
using namespace std;

int main() {
    int array2[] = {1, 2, 3, 4, 2, 5, 2, 6, 7, 2, 3, 3}; // Example array
    int array[]={1,2,3,5,6,8,2,9,4,7,8,1,2,4,5};
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array

    int frequency[100] = {0}; // Frequency array to count occurrences (assuming elements are in the range 0-99)

    // Count occurrences of each element
    for (int i = 0; i < size; i++) {
        frequency[array[i]]++;
    }

    // Arrays to store unique and reoccurring elements
    int uniqueElements[100];
    int reoccurringElements[100];
    int uniqueCount = 0;
    int reoccurringCount = 0;

    // Identify unique and reoccurring elements
    for (int i = 0; i < 100; i++) {
        if (frequency[i] == 1) {
            uniqueElements[uniqueCount++] = i;
        } else if (frequency[i] > 1) {
            reoccurringElements[reoccurringCount++] = i;
        }
    }

    // Print unique elements and their count
    cout << "Unique elements count: " << uniqueCount << endl;
    cout << "Unique elements: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << uniqueElements[i] << " ";
    }
    cout << endl;

    // Print reoccurring elements and their count
    cout << "Reoccurring elements and their counts:" << endl;
    for (int i = 0; i < reoccurringCount; i++) {
        cout << reoccurringElements[i] << " occurs " << frequency[reoccurringElements[i]] << " times" << endl;
    }

    return 0;
}
