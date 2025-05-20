// Problem W: 73912.Substring
// You’re given to strings, 
//  and 
// ,you need to check is the string t substring of string s.

// Input format
// In the first line of input, two strings, 
//  and 
// .

// Output format
// Output "YES", if t is the substring of s, otherwise output "NO"(without quotes).

// Examples
// Input
// dabbad abba
// Output
// YES

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;


    //s.find(t) где s это строка, в которой мы ищем строку в скобках (t)
    if (s.find(t) != string::npos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}