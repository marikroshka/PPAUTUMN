// Problem B: 74862. Difference between two arrays
// You have two arrays, 
//  and 
// , both have an equal size — 
// . Your task is to write a function which will create a new array 
//  with 
//  elements 
// , where 
//  = 
//  - 
// .

// Input format
// The first line contains a single integer — 
// , 
//  — size of the arrays.

// The second line contains 
//  elements 
//  of 
// , 
// .

// The third line contains 
//  elements 
//  of 
// , 
// .

// Output format
// All elements of the array 
// .

// Examples
// Input
// 3
// 6 2 1
// 10 4 2
// Output
// 4 2 1 
#include <iostream>
#include <cmath>
using namespace std;

void diff(int n, int arr1[], int arr2[]) {
    for (int i = 0; i <n; i++){
        cout << abs(arr1[i] - arr2[i]) << " ";
    }
}

int main () {

    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i<n; i++){
        cin >> arr1[i];
    }
    for (int i=0; i<n; i++){
        cin >> arr2[i];
    }
    diff(n, arr1, arr2);
    





    
}