// Problem K: 74632. Find the sum of all digits
// You are given a number 
// . Write a function for finding the sum of all digits of number 
// .

// Input format
// Input contains positive number 
 
// .

// Output format
// Output the sum of all digits.

// Examples
// Input
// 11
// Output
// 2
#include <iostream>
using namespace std;

int summary( string n){
    int sum = 0;
    for( int i = 0; i < n.length(); i++){
        sum+= n[i] - '0';
        
    }
    return sum;
}

int main () {
    string n;
    cin >> n;
    cout << summary(n);
}