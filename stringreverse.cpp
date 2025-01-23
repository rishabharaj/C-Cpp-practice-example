#include <iostream>
#include <string>
using namespace std;
void printReverse(string word) {
    for (int i = word.length() - 1; i >= 0; i--) {
        cout << word[i];
    }
}
int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int i = 0, j = word.length() - 1;
    while (i < j && word[i] == word[j]) {
        i++;
        j--;
    }
    if (i >= j) {
        cout << word<< " is a palindrome.";
    } else {
        cout << word << " is not palindrome." << endl;
        cout << "Reverse of " << word << " is ";
        printReverse(word);
    }
    return 0;
}