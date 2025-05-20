// Problem V: 192647. Secret message.
// Imagine that one day you decided to write down all your secrets in a notebook, but you don’t want anybody else to know about your secrets, so you should make it understandable only for you. So you’re given a string s
// , you need to change every letter in a given string with the letter following it in the alphabet.

// Input format
// You’re given a string s.

// Output format
// Print formatted string.

// Examples
// Input
// Good luck
// Output
// Hppe mvdl

#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s); 
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] == 'z') ? 'a' : s[i] + 1; 
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (s[i] == 'Z') ? 'A' : s[i] + 1; 
        }
      
    }

    cout << s << endl; 
    return 0;
}