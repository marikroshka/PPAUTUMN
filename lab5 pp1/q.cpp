// Problem Q: 187690. Clear string.
// You are given string containing any kind of symbol, you have to clear them from symbols that are not letters.

// Input format
// Given a string. String length N 
// .

// Output format
// Output String containing only letters.

// Examples
// Input
// asdA10!*e
// Output
// asdAe

#include <iostream>
using namespace std;
int main () {

    string n;

    cin >> n;

    for ( int i= 0; i < n.length (); i++){

        if ( n [i]>= 'a' && n [i]<='z' && n [i] >= 'A' && n[i]<= 'Z'){
                cout << char (n[i]);
            }
        }
        
    









    return 0;
}