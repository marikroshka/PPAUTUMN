// Problem T: 393937. NOC.
// Togzhan worries about her Number of Candies — NOC, integer 
// . To stay positive, her NOC should be higher than the integer part of the average NOC of all other students. NOCs of other students are given as an array 
//  with size 
// . It is necessary to determine how much the Togzhan’s NOC differs from the integer part of the average NOC of other students. Write a function to help Togzhan stay positive!

// Input format
// In the first line you’re given an integer number 
//  — size of the array, followed by an integer 
//  — Togzhan’s NOC, where 
//  and 
// . In the second line you’re given a sequence of 
//  numbers — NOCs of other students.

// Output format
// On one line output the answer to the problem, the absolute difference of Togzhan’s NOC and other student’s NOC.

// Examples
// Input
// 4 3
// 1 3 7 6
// Output
// 1
#include <bits/stdc++.h>
using namespace std;

void noc( int n, int m, int arr[]){
    
    int sum = 0;
    for ( int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for ( int i = 0; i < n; i++){
        sum+=arr[i];
    }
    int avg = abs((sum/n) - m);
    cout << avg;
}

int main (){
    int n, m;
    cin >> n >> m;
    int arr[n];
    noc(n,m,arr);
}