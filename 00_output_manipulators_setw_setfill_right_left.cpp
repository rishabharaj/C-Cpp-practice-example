#include <iostream>
#include <iomanip> // for setw, setfill, left, right
using namespace std;

int main() {
    int a = 123;
    int b = 45;

    cout << "Default (right-aligned by default):" << endl;
    cout << setw(10) << a << endl;
    cout << setw(10) << b << endl;

    cout << "\nUsing setfill('*') and setw(10):" << endl;
    cout << setfill('*') << setw(10) << a << endl;
    cout << setfill('*') << setw(10) << b << endl;

    cout << "\nUsing left alignment:" << endl;
    cout << left << setw(10) << a << " <-- Left aligned" << endl;
    cout << left << setw(10) << b << " <-- Left aligned" << endl;

    cout << "\nUsing right alignment again:" << endl;
    cout << right << setw(10) << a << " <-- Right aligned" << endl;
    cout << right << setw(10) << b << " <-- Right aligned" << endl;

    return 0;
}
