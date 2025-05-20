// Problem T: 186818. Longest pattern
// You are given a string consisting of lowercase latin letters. Find the longest substring consisting from one letter. If there is multiple such substrings, take the first one. You should print the letter from which the substring consists, and its’ length.

// Input format
// The only line of input contains a string consisting of lowercase latin letters 
 
// .

// Output format
// Print the letter from which the found substring consists, and its’ length separated by a space.

// Examples
// Input
// helloooaaaaeee
// Output
// a 4

#include <iostream> 
#include <string> 
using namespace std; 
 
int main() { 
    string s; 
    cin >> s; 
    char longestChar = s[0];  
    int maxLength = 1;        
    int currentLength = 1;     
    for (size_t i = 1; i < s.length(); i++) { 
        if (s[i] == s[i - 1]) { 
            currentLength++;  
        } else { 
             
            if (currentLength > maxLength) { 
                maxLength = currentLength; 
                longestChar = s[i - 1];  
            } 
            currentLength = 1;  
        } 
    } 
    if (currentLength > maxLength) { 
        maxLength = currentLength; 
        longestChar = s[s.length() - 1]; 
    } 
    cout << longestChar << " " << maxLength; 
 
}