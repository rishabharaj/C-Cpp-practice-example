#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int ans = 0;
    int i = 0;

    while (n != 0) {
        int bit = n & 1;  // 1 mean  one bit hai ya nhi hai to 1 nahi to 0
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;  // divide with one bit or say ki ek bit se kam krdo
        i++;
    }
    cout << "Answer is " << ans << endl;
}
