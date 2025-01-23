#include <stdio.h>
#include <stdbool.h>  // Include header for boolean data type

int main() {
    // Declare variables with appropriate data types
    int aNumber = 10;
    long aBigNumber = 3211145;
    long long aReallyBigNumber = 425632238789;
    float inches = 33.0;
    float feet = 2.5;
    float yards = 1780;
    double length = 1.0, width = 2.0, height = 10.0;
    bool isItRaining = false;

    // Print the variables and their data types
    printf("aNumber (int): %d\n", aNumber);
    printf("aBigNumber (long): %ld\n", aBigNumber);
    printf("aReallyBigNumber (long long): %lld\n", aReallyBigNumber);
    printf("inches (float): %.1f\n", inches);
    printf("feet (float): %.1f\n", feet);
    printf("yards (float): %.1f\n", yards);
    printf("length (double): %.1lf\n", length);
    printf("width (double): %.1lf\n", width);
    printf("height (double): %.1lf\n", height);
    printf("isItRaining (boolean): %d\n", isItRaining);

    // Perform calculations using the variables
    double volume = length * width * height;
    printf("Volume: %.1lf\n", volume);

    // Convert inches to feet and yards
    float feet_from_inches = inches / feet;
    float yards_from_inches = inches / yards;
    printf("Inches in feet: %.1f\n", feet_from_inches);
    printf("Inches in yards: %.1f\n", yards_from_inches);

    // Check if a number is even or odd
    if (aNumber % 2 == 0) {
        printf("aNumber is even.\n");
    } else {
        printf("aNumber is odd.\n");
    }

    // Calculate the area of a rectangle
    double area = length * width;
    printf("Area of rectangle: %.1lf\n", area);

    // Check if a boolean value is True or False
    if (isItRaining) {
        printf("It is raining.\n");
    } else {
        printf("It is not raining.\n");
    }

    return 0;
}
