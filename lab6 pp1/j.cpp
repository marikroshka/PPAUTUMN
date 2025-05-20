// Problem J: 74630. Find the maximum
// Write a function for finding the maximum of 4 numbers.

// Input format
// You are given 4 numbers 
 
// .

// Output format
// Output the maximum of 4 numbers.

// Examples
// Input
// -10 4 5 3
// Output
// 5



#include<iostream>
using namespace std;

int maxim( int a, int b, int c, int d){
    int max = a;
    if ( b> max) max = b;
    if ( c > max) max = c;
    if ( d > max) max = d;
    return max;
    }
    



int main () {
    int a,b,c,d;
    cin >> a >> b>>c>>d;
    cout << maxim(a,b,c,d);
} 



