// Problem D: 74871. Copyandpaste
// You’re given two strings 
//  and 
// . You need to answer, can we take string 
//  by copy and pasting string 
// .

// Input format
// First line contains two strings, 
//  and 
// .

// Output format
// Output YES, if the given condition is true, otherwise output NO.

// Examples
// Input
// abc abcabcabc
// Output
// YES

#include<iostream>

using namespace std;

int main()
{

    string subss, str;
    cin >> subss >> str;

    //subs = abc
    //str abcabcabc

    if(str.size() % subss.size() == 0)
    {
        string s3 = "";
        int repeatings = str.size() / subss.size();

        for(int i = 0; i < repeatings; i++)
        {
            s3 += subss;  
        }

        if(s3 == str) cout << "YES" << endl;

        else cout << "NO";
    }
    else cout << "NO";


    return 0;
}