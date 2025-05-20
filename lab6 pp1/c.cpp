// Problem C: 74865. How many elements are the same?
// Given two arrays 
//  and 
// , both of size 
// , write a function to count how many pairs of equal elements are present in these two arrays. In other words, the function needs to find how many pairs of elements (
// , 
// ) are equal, where 
//  and 
//  are indexes. However, each element can only be used in one pair — once an element is paired it cannot be used again for another pair.

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
// A single integer — number of pairs of equal elements in arrays 
//  and 
// .

// Examples
// Input
// 6
// 4 3 1 2 4 1
// 3 1 1 5 4 4
// Output
// 5
#include <bits/stdc++.h>

using namespace std;

void rir(int n, int arr1[], int arr2[]){

    int counter1[1001] = {0};
    int counter2[1001] = {0};
    for( int i = 0; i <n; i++){
        cin>> arr1[i];
        counter1[arr1[i]]++;
    }
     for( int i = 0; i <n; i++){
        cin>> arr2[i];
        counter2[arr2[i]]++;
    }
    int count = 0;
    for(int i = 0; i< 1001; i++){
        count+=min(counter1[i], counter2[i]);
    }
    cout << count;
}


int main () {

    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    
    rir(n, arr1, arr2);
}