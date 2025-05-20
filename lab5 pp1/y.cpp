// Problem Y: 74852.Vowel letters
// You’re given string 
//  consisting of small letters, output amount of vowel letters. In english vowel letters are a, e, i, o, and u. (letter ’y’ is sometimes vowel, but in this problem we don’t take it for the answer)

// Input format
// First line contains string 
// .

// Output format
// Output answer for the problem.

// Examples
// Input
// aeiuo
// Output
// 5

#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    int vowelCount = 0;

    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || 
            input[i] == 'o' || input[i] == 'u') {
            vowelCount++;
        }
    }

    cout << vowelCount << endl;

    return 0;
}