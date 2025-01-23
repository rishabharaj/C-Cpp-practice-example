#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

int main() {
    // Given array values
    int arr[] = {22, 9, 7, 54, 10, 55, 75, 63};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int maxElement = numeric_limits<int>::min(); // Initialize maxElement with minimum possible value
    int maxPosition = -1; // Initialize maxPosition with an invalid value

    // Finding maximum element and its position
    for (int i = 0; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxPosition = i;
        }
    }

    if (maxPosition != -1) {
        cout << "Maximum element: " << maxElement << endl;
        cout << "Position: " << maxPosition << endl;
    } else {
        cout << "No elements provided." << endl;
    }

    return 0;
}

