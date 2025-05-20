// Problem U: 188321. Ninja.
// Boris and his friends met a real Ninja! The ninja showed the children how to skillfully cut various fruits with his sword. Now he wants to show the children the art of words - the oldest ninja technique. The main task of this technique is to cut an unnecessary letter from a word. Try to write a program to make life easier for a ninja

// Input format
// The first line of input contains a single lowercase Latin letter 
//  — letter that should not be used in a word.

// The second line of input contains string 
//  — a word that consists of only lowercase Latin letters.

// It is guaranteed that the letter 
//  appears in 
//  at least once and there are other letters than 
//  in 
// .

// Examples
// Input
// a
// apple
// Output
// pple

#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch;
    string s;

    cin >> ch;
    cin >> s;

    string result;

    for (char c : s) {
        if (c != ch) {
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}