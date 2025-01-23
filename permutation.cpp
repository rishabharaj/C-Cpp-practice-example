#include <iostream>
using namespace std;

void permute(char* a, int l, int r) {
    if (l == r) {
        for (int i = 0; i <= r; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = l; i <= r; i++) {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]); // backtrack
        }
    }
}

int main() {
    char a[] = {'P','R','I','A'};
    int n = sizeof(a) / sizeof(a[0]);
    permute(a, 0, n - 1);
    return 0;
}