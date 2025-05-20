// Problem F: 74718. Valid string
// Given a string 
// . You need to write a function that validates the string. Valid string is the string that contains 
//  or more digits.

// Input format
// Line contains string 
 
//  and integer 
 
// .

// Output format
// Print "YES" (without quotes) if the string is valid, otherwise "NO".

// Examples
// Input
// som3thing4 2
// Output
// YES
#include <bits/stdc++.h>
using namespace std;

bool validString(string n, int count){
    int cnt = 0;
    for(int i = 0; i < n.length(); i++){
        if(isdigit(n[i])){
            cnt++;
        }
    }
    if(count <= cnt){
        return true;
    }
    return false;
}

int main(){
    string n;
    cin >> n;

    int count;
    cin >> count;

    if(validString(n, count)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}