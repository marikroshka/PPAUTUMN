// Problem M: 74633. Reverse the array
// You are given an array of 
//  elements. Write a function for printing given array in reverse order.

// Input format
// The first line contains an integer 
 
// . The second line contains 
//  numbers 
//  (elements of the array) 
// .

// Output format
// Output the array in reverse order.

// Examples
// Input
// 3
// 1 2 3
// Output
// 3 2 1 

#include<iostream>
#include<algorithm>
using namespace std;

void arr( int arr1[], int n){
    for ( int i = 0; i < n; i++){
        cin>> arr1[i];
    }

    reverse( arr1, arr1 + n);

    for( int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    }

    
}

int main (){
    int n;
    cin >> n;
    int arr1[n];
    arr( arr1, n);
}