// Problem N: 73916.Palindromes
// You’re given string 
// , you need to print, is this string palindrome or not.

// Input format
// First line contain string 
// .

// Output format
// Print YES ,if this string is palindrome, otherwise print NO.

// Examples
// Input
// abba
// Output
// YES

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    string s1 = s;

    reverse(s1.begin(), s1.end());

    if (s1 == s) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}