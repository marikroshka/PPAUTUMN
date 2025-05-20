// Problem W: 187706. Missing Group.
// Given a sequence of 
//  integer numbers, where each number is the ID of the person in the team. There are some missing IDs in the sequence which has to start with 
//  and end with 
// .

// You have to implement function int findNthNumber(int arr[], int X) or int findNthNumber(int X) to find the 
//  missing person ID in ascending order of the missing IDs.

// Input format
// The first line of input contains an array of integer numbers 
//  with 
//  elements, where 
//  and 
// . In the second line, given one integer number - 
// . 
// .

// Output format
// Find the 
//  missing person. If it’s impossible to find — print -1.

// Examples
// Input
// 3 2 4 7 11
// 10
// Output
// 15
#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> v;
    int number;
    while ( cin >> number){
        v.push.back(number)
    }
    int index = v.back();
    v.pop_back();
    bool ishere[1001] = {false};
    for( int i = 0; i < v.size(); i++){
        if( v[i] >=0 && v[i] <= 1000){
            ishere[v[i]] = true;
        }
    }
    int missingc= 0;
    for ( int i = 1; i <=1000; i++){
        if(!v[i]){
            missingc++;
            if( missingc ==x){
                cout << i;
                return 0;
            }
        }
    }
}

