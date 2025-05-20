// Problem G: 74816.Equality
// Given two strings 
//  and 
// , check this two strings for equality.

// Input format
// First line of the input contains two string, 
//  and 
// .

// Output format
// Output YES, if this two strings are equal, otherwise output NO.

// Examples
// Input
// aa ab
// Output
// NO

#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
   

    string l; 
    cin >> n >> l;

    if ( n == l) {
        cout << "YES"<< endl;
    }
    else {cout << "NO" << endl;
    }

    return 0;
}