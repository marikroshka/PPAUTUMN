// Problem K: 74820.Nearly Equal
// Let’s call two strings 
//  and 
//  nearly equal, if amount of every letter in 
//  and 
//  is equal. You need to answer, is two strings are nearly equal.

// Input format
// First line contains two strings 
//  and 
// .

// Output format
// Output YES, if given condition is true, otherwise output NO.

// Examples
// Input
// abcde aafd
// Output
// NO

#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
   

    string l; 
    cin >> n >> l;

    for (int i = 0; i < n.length (); i++){
        for ( int j = 0; j < l.length (); j++);
    }

    if (n. length () != l.length ()){
        cout << "NO";

    }
    else {cout << "YES";}

    return 0;
}