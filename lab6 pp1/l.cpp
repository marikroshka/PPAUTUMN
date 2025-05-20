// Problem L: 74784. Valid string --- 2
// Given a string 
// , you need to write a function that validates the string. Valid string is the one that contains 
//  or more consecutive digits.

// Input format
// One line, containing the string 
 
//  and the integer 
 
// .

// Output format
// Print “Valid” (without quotes) if the string is valid, otherwise “Not valid”.

// Examples
// Input
// som3thing4 2
// Output
// Not valid

#include<iostream>
using namespace std;

bool isvalid( string s, int x) {
    int count = 0;
    for ( int i = 0; i < s.length(); i++) {
        if (isdigit (s[i])){
            count++;
            if ( count == x){
                return true;
        }
        
            
    }
    else {
            count = 0;
        }
    }
    return false;
}
        
        
    
   



int main () {
    string s;
    cin >> s;
    int x;
    cin >> x;
    if(isvalid(s,x)){
        cout << "Valid";
    }
    else{
        cout << "Not valid";
    }
}