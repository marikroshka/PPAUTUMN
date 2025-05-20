// Submit a solution for R-187532. First and last occurrence.
// Time limit:	1 s
// Real time limit:	5 s
// Memory limit:	256M
// Problem R: 187532. First and last occurrence.
// Given a string s and letter t. If s contains the letter t only once, print its index. If it occurs two or more times, print the index of its first and last occurrence. If the letter t does not appear in the given line, do not print anything.

// Input format
// Given two strings s
// , t 
// .

// Output format
// Print the result.

// Examples

#include <iostream> 
#include <string> 
using namespace std; 
int main(){ 
    string s; 
    char t; 
    cin>>s>>t; 
 
    int start, count=0, end=0; 
    for(int i=0;i<s.length();i++){ 
        if(s[i]==t && count==0){ 
            start = i; 
            count++; 
        } 
        else if(s[i] == t){ 
            end=i; 
        } 
    } 
    cout<<start<<" "; 
    if(end!=0){ 
        cout<<end; 
    } 
     
}