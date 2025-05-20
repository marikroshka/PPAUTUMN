// Problem P: 74868.Shift
// You’re given string 
// , you need to shift all characters in 
//  to the next character in alphabetical order. If our character is ’z’ change it for ’a’.

// Input format
// First line contains string 
// .

// Output format
// Output answer for the problem.

// Examples
// Input
// abba
// Output
// bccb 

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] < 'z') {
            s[i]++;
        } else if (s[i] == 'z') {
            s[i] = 'a';
        }
    }

    cout << s << endl;

    return 0;
}