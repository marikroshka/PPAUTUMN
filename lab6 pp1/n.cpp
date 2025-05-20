// Problem N: 74714. Array transpose
// Given an array of 
//  x 
//  elements. Write a function that transposes the array.

// Input format
// First line contains two integers 
//  and 
 
// . The next 
//  lines contain 
//  integers 
 
//  each.

// Output format
// Output the transposed array.

// Examples
// Input
// 2 3
// 1 2 3
// 4 5 6
// Output
// 1 4 
// 2 5 
// 3 6 
#include <bits/stdc++.h>
using namespace std;

void array( int n, int m, int arr[]){
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> arr[i][j];
    }
}
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<< arr[j][i]<<" ";
    }
    cout<< endl;
    }
}

int main (){
int n, m;
cin >> n >> m;
int arr [n][m];
array(n,m,arr[]);
}