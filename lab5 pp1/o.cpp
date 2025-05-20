// Problem O: 74222.Segment
// You’re given string 
// , and two integers 
// . You need to output substring 
// . Numeration of characters in 
//  starts from 0. Guaranteed that 
//  can’t be out of the border of string.

// Input format
// First line contain string 
// , and two integers 
// .

// Output format
// Output answer for the problem.

// Examples
// Input
// abcde 0 4
// Output
// abcde

#include<iostream>
#include<string>
using namespace std;

int main (){

    string s;
    int ot;
    int con;
    cin >> s >> ot >> con;
    int a = s.size();

    for (int i =ot; i <= con; i++){

        cout << s[i];
    }

    return 0;
}