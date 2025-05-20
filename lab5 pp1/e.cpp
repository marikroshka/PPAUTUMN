// Problem E: 341700. Dec to Hex.
// Boris studies various number systems at school. He was given a homework assignment in which a decimal number is given as an input, he needs to convert the given decimal number to the equivalent hexadecimal number i.e. convert a number with a base value of 10 to a base value of 16. Help Boris write a program that solves this problem

// Hexadecimal numbers use 16 values to represent a number. The numbers 0 through 9 are represented by the numbers 0-9, and 10-15 are represented by the characters A through F.

// Input format
// You are given integer 
// .

// Output format
// Print hex number of 
// .

// Examples
// Input
// 10
// Output
// A

#include<iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;

    string s = "";

    while(n > 0)
    {
        int remainder = n % 16;
        if(remainder < 10)
        {
            s = char(remainder + '0') + s;
        }
        else
        {
            s = char(remainder - 10 + 'A') + s;
        }
        n /= 16;
    }

    cout << s;

}