// Problem O: 74861. Lucky ticket
// Do you use public transportation? Probably, you paid for the fare and received ticket with number. Lucky ticket is ticket with number, where sum of all numeral is divided by last numeral. For example, 754 is lucky, because the remainder of dividing 7+5+4 by 4 is 0. Write the function which check the number for luck.

// Input format
// In the first line of the input file there is a natural number 
// , 
//  — ticket number.

// Output format
// If the ticket is lucky "Yes" otherwise "No".

// Examples
// Input
// 123123
// Output
// Yes
#include <bits/stdc++.h> 
using namespace std; 
bool islucky(string s){ 
    int sum = 0; 
    for(int i=0;i<s.length(); i++){ 
        sum+=s[i]-'0'; 
    } 
    if(sum%(s[s.length()-1]-'0')==0){ 
        return true; 
    } 
    return false; 
} 
int main(){ 
    string s; 
    cin>>s; 
    if(islucky(s)){ 
        cout<<"Yes"; 
    } 
    else{ 
        cout<<"No"; 
    } 
}