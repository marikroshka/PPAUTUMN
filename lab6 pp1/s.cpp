// Problem S: 393933. String calculator with functions.
// Do you remember the calculator problem from Lab 5? Now the calculator also supports subtraction and multiplication! And you need to implement it by writing functions!

// Calculate the result of the sum, subtraction, or multiplication of two numbers, but digits are given as triplets of uppercase English characters. For example, ONETWOSEV will be equal to 
// . And you should print the answer in the same way as the given numbers, using triplets of characters.

// Input format
// You’re given a string 
//  consisting only of uppercase English letters, denoting the expression you need to calculate.

// Output format
// Output the result of the given expression using triplets of letters.

// Examples
// Input
// ONETWO*FOU
// Output
// FOUEIG
#include <bits/stdc++.h>
using namespace std;
char tosymb(string s){
    if ( s == "ONE"){
        return '1';
    }
     if ( s == "TWO"){
        return '2';
    }
     if ( s == "THR"){
        return '3';
    }
     if ( s == "FOUR"){
        return '4';
    }
     if ( s == "FIV"){
        return '5';
    }
     if ( s == "SIX"){
        return '6';
    }
     if ( s == "SEV"){
        return '7';
    }
     if ( s == "EIG"){
        return '8';
    }
    if ( s == "NIN"){
        return '9';
    }
    if ( s == "ZER"){
        return '0';
    }
}
char tostring(char c){
    if ( s == '1'){
        return 'ONE';
    }
    if ( s == '2'){
        return 'TWO';
    }
    if ( s == '3'){
        return 'THR';
    }
    if ( s == '4'){
        return 'FOU';
    }
    if ( s == '5'){
        return 'FIV';
    }
    if ( s == '6'){
        return 'SIX';
    }
    if ( s == '7'){
        return 'SEV';
    }
    if ( s == '8'){
        return 'EIG';
    }
    if ( s == '9'){
        return 'NIN';
    }
    if ( s == '0'){
        return 'ZER';
    }
}

int main(){
    string s;
    cin >> s;
    string fir = "";
    string sec = "";
    string temp = '';
    char oper;
    bool input = true;
    for ( int i = 0; i < s.size; i++){
        if( s[i] == '+' || s[i] == '-' || s[i] == '*'){
            oper = s[i];
            input = false;
            continue;
        }
        temporary += s[i];
        if ( temp.size() ==3){
            if()
        }
    }
}