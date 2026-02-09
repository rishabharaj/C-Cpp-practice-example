// structure is a user defined data type which 
//can hold different types of data members. It is used to group related data together.
#include <iostream>
#include <string>
using namespace std;

struct {
    int myInt;
    string myString;
} myStruct1, myStruct2, myStruct3;

int main() {
    myStruct1.myInt = 1;
    myStruct1.myString = "Hello";

    myStruct2.myInt = 2;
    myStruct2.myString = "World";

    myStruct3.myInt = 3;
    myStruct3.myString = "C++";

    cout << "Struct 1: " << myStruct1.myInt << ", " << myStruct1.myString << endl;
    cout << "Struct 2: " << myStruct2.myInt << ", " << myStruct2.myString << endl;
    cout << "Struct 3: " << myStruct3.myInt << ", " << myStruct3.myString << endl;

    return 0;
}
