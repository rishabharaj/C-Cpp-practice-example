#include <iostream>
#include <string>
using namespace std;

// Function declarations
string ltrim(const string &);
string rtrim(const string &);

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 9) {
        string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        cout << rtrim(ltrim(words[n - 1])) << endl;
    } else {
        cout << "Greater than 9" << endl;
    }

    return 0;
}

// Function to trim whitespace from the left side of a string
string ltrim(const string &s) {
    size_t start = s.find_first_not_of(" \t\n\r\f\v");
    return (start == string::npos) ? "" : s.substr(start);
}

// Function to trim whitespace from the right side of a string
string rtrim(const string &s) {
    size_t end = s.find_last_not_of(" \t\n\r\f\v");
    return (end == string::npos) ? "" : s.substr(0, end + 1);
}
