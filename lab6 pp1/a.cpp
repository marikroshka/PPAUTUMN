// Problem A: 74446. A+B
// You are given two integers, 
//  and 
// . Write a function which will return a single integer, sum of 
//  and 
// .

// Input format
// The only line of the input contains integers 
//  and 
//  (
// ).

// Output format
// Sum of 
//  and 
// .

// Examples
// Input
// 7 8
// Output
// 15


#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
    
}
