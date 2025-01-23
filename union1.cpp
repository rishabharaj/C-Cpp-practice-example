#include <iostream>
using namespace std;

// Union declaration
union Values {
    int intValue  = 10;
    float floatValue ;
};

int main() {
    Values v;
    
    // Assigning value to union member
    v.intValue;
    v.floatValue= 5.5 ; // dono ko ek sath assign kroge to upar wale ki garbage value aayegi

    // Accessing and printing union member
    cout << "Integer value: " << v.intValue << endl;

    // Assigning new value to union member
    // v.floatValue= 5.5 ; (agar isko yha likho to garbage value nhi aayegi)
    // Accessing and printing union member
    cout << "Float value: " << v.floatValue << endl;

    return 0;
}
