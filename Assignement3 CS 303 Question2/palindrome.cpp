#include <iostream>
#include <string>
#include "palindrome.h"
using namespace std;

bool Recursive(string input) {
    string letter;
    if (input.size() < 3) {
        return true;
    }
    for (int i = 1; i < input.size() - 3; i++) {
        letter += input[i];
    }
    if ((input[0] == input[input.size() - 1]) and Recursive(letter))
        return true;
    return false;
}
