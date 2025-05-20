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
#include<bits/stdc++.h>
using namespace std;

string tohex(int n){
    string answer= "";
    string symb= "0123456789ABCDEF";

    while(n >0){
        answer +=symb[n%16];
        n/=16;
    }
    reverse(answer.begin(), answer.end());
    return answer;
}

int main (){
    int n;
    cin>>n;
    cout<< tohex(n);
}