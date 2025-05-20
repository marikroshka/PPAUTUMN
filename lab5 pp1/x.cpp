// Problem X: 73921.sum
// You’re given integer N, you need to answer, is the sum of digits in odd positions is equal to sum of digits in even positions.

// Input format
// First line contain integer N.

// Output format
// Output "YES" if given condition is true, otherwise print "NO"(without quotes).

// Examples
// Input
// 123
// Output
// NO

#include <iostream> 
#include <string> 
using namespace std; 
int main(){ 
    string s; 
    cin>>s; 
    int sumofoddpositions = 0; 
    int sumofevenpositions = 0; 
    for(int i=0;i<s.length();i++){ 
        if(i%2==0){ 
            sumofevenpositions += (s[i] - '0'); 
        } 
        else{ 
            sumofoddpositions += (s[i] - '0'); 
        } 
    } 
    if(sumofevenpositions == sumofoddpositions){ 
        cout<<"YES"; 
    } 
    else{ 
        cout<<"NO"; 
    } 
}