// Problem C: 74857.Amount of character
// You’re given string 
// , character 
//  and number 
// . In this task you need to answer is the amount of 
//  in the string 
//  is equal to 
// .

// Input format
// First line contains string 
// ,character 
// , and number 
// .

// Output format
// Output YES, if the given condition is true, otherwise output NO.

// Examples
// Input
// aaa a 3
// Output
// YES

#include <iostream>
using namespace std;
int main () {
    string n;
    

    int num ;
    
    char l;

    int counti = 0;
    
    cin >> n >> l >> num;

    for ( int i = 0; i < n.length (); i++) {
    
        if (  n[i] == l) {
            counti++;
            
        }
        
    }
    
    if ( counti== num)
        {
            cout << "YES" << endl;
        }
        
        else 
        {
            cout << "NO" << endl;
            
        }



    return 0;
}



    