// Problem H: 74803. Valid number
// Given a number 
// . Write a function for checking if this number is valid. Valid number is the number that consists of even digits only.

// Input format
// Line contains 
 
// .

// Output format
// If number is valid, print "Valid" (without quotes), otherwise "Not valid".

// Examples
// Input
// 1111
// Output
// Not valid
#include<iostream>
using namespace std;

bool iseven(int n){
    while(n>0){
        if((n%10)%2 != 0){
            return false;
        }
        n/=10;
    } 
    return true;
}

int main () {
   int x;
   cin>>x;
   if(iseven(x)){
    cout<<"Valid";
   }
   else{
    cout<<"Not valid";
   }
}