#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int array[] = {1, 2, 3, 4, 2, 5, 2, 6, 7, 2, 3, 3}; // Example array
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array

    unordered_map<int, int> elementCount; // Map to store the frequency of each element
    // Iterate through the array and count the occurrences of each element
    for (int i = 0; i < size; i++) {
        elementCount[array[i]]++;
    }

    int uniqueElements = 0; // Counter for unique elements
    vector<int> reoccurringElements; // Vector to store reoccurring elements

    // Check the frequency of each element
    for (const auto& pair : elementCount) {
        if (pair.second == 1) {
            uniqueElements++; // Increment unique element counter
        } else {
            reoccurringElements.push_back(pair.first); // Add reoccurring element to the vector
        }
    }

    // Print the results
    cout << "Unique elements count: " << uniqueElements << endl;
    cout << "Reoccurring elements: ";
    for (int element : reoccurringElements) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
