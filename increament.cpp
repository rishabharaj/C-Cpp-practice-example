#include <iostream>
using namespace std;

int main() {
    int num = 5;
    
    // Post-increment: num++ (value of num is used, then incremented)
    int result_post = num++;
    
    // Pre-increment: ++num (num is incremented, then its value is used)
    int result_pre = ++num;
    
    cout << "Original value of num: 5" << endl;
    cout << "Result after post-increment (num++): " << result_post << endl;
    cout << "Value of num after post-increment: " << num << endl;
    cout << "Result after pre-increment (++num): " << result_pre << endl;
    cout << "Value of num after pre-increment: " << num << endl;
    
    return 0;
}
