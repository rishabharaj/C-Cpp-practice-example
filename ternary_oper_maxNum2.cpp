#include <iostream>
using namespace std;
int main() 
{    int A = 39, B = 10, C = 23, D = 45;
    cin>>A>>B>>C>>D;
    // Evaluate largest of four using ternary operator
    int maxNum = (A > B) ? 
                 ((A > C) ? 
                  ((A > D) ? A : D) : 
                  ((C > D) ? C : D)) : 
                 ((B > C) ? 
                  ((B > D) ? B : D) : 
                  ((C > D) ? C : D));
    cout << "\nLargest number is " << maxNum << endl;
    return 0;
}