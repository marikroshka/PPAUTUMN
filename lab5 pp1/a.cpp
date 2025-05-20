// Problem A: 73765.From small to capital
// You’re given string 
// , you need to change all small letters to capital letters.

// Input format
// First line consist of string 
// .

// Output format
// Output answer for the problem.

// Examples
// Input
// aaBBaa
// Output
// AABBAA

#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;  

    
    for (int i = 0; i < n.length(); i++) {
        
        if (n[i] >= 'a' && n[i] <= 'z') {
            cout << char(n[i] - 32);  
        } else {
            cout << n[i];  
        }
    }

    cout << endl;  
    return 0;
}

       
    
   








    return 0;
}