#include <iostream>
#include <string>
#include "palindrome.h"
using namespace std;

int main() {
    string word;
    char choice;
    string newword;
    while (1) {
    cout << "Enter the word you want to check: " << endl;
    cin >> word;
        if (Recursive(word)) {
            cout << "The word is a palindrome" << endl;
        }     
        else {
            cout << "The word is not a Palindrome." << endl;         
        }
        cout << " Do you want to check another one? " << endl;
        cin >> choice;
        if (choice == 'Y' || choice == 'y') {
            continue;
        }
        else {
            break;
        }
    }
    return 0;
}

