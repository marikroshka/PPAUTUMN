// Problem M: 74856.Order
// You’re given string 
// , you need to output, is that string increasing in alphabetical order. String increasing in alphabetical order, if for every position 
//  in alphabet, we can’t find such character that meets before position 
//  and appears in alphabet after letter in position 
// .

// Input format
// First line contains string 
// .

// Output format
// Output YES, if the given condition is true otherwise output NO.

// Examples
// Input
// abc
// Output
// YES

#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string s;
    cin >> s;

    

    for (int i = 1; i < s.size(); i++) {
        if (s[i] < s[i - 1]) 
        {
            cout << "NO";
            return 0;
        }
    }

   cout << "YES" << endl;

    return 0;
}