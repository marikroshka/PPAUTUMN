// Problem I: 74713. Capital Even
// Given a string 
// . You need to write a function that takes the string and turn lowercase letters on even positions to capital letters.

// Input format
// Line contains string 
//  without whitespaces. 
// .

// Output format
// Output the string after manipulations.

// Examples
// Input
// somestring
// Output
// SoMeStRiNg
#include<iostream>
using namespace std;

string func( string s) {
    
    for ( int i = 0; i< s.length(); i++){
            if( i % 2 == 0){
            s[i]=toupper(s[i]);
            }
        }
        return s;

    }


int main (){
    string s;
    cin >> s;
    
    cout << func(s);
}