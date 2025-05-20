// Problem G: 74715. Remove vowels
// Given a string 
// . You have to write a function that removes all vowels from the string.

// Input format
// Line contains string 
 

// Output format
// Output the string without vowel letters.

// Examples
// Input
// S0mething is coming UP. So I need 2 go now.
// Output
// S0mthng s cmng P. S  nd 2 g nw.
#include<iostream>
#include<string>
using namespace std;

bool isvowel( char x) {
    
    if (x == 'a' || x == 'o' || x == 'e' || x == 'i' || x == 'A' || x == 'O' || x == 'E' || x == 'I' || x == 'u'|| x == 'U'){
        return true;
        }
        return false;
    }
    string skipVowels( string s) {
        string answer = "";
        for ( int i = 0; i < s.length(); i++){
            if (!isvowel (s[i])){
                answer+=s[i];
            }
        }
        return answer;
    }

int main () {
    string s;
    getline(cin,s);
    cout << skipVowels(s);
}