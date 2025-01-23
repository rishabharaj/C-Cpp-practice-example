#include<iostream>
#include<string> 
#include<sstream>
using namespace std;
int countWords(const string &str) {
    stringstream ss(str);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}
int main() {
string inputString;
cout << "Enter a multi-word string: "; getline(cin, inputString);
int wordCount = countWords(inputString);
cout << "Number of words in the string: " << wordCount << endl;
return 0;
}