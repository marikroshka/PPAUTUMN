// Problem F: 74819.Digits
// You’re given string 
// , you need to answer, is the amount of every digits in this string is equal.

// Input format
// First line contains string 
// .

// Output format
// Output YES, if conidition is true, otherwise output NO.

// Examples
// Input
// 112233
// Output
// YES

#include<iostream>


using namespace std;


int main()
{

    string s;
    cin >> s;


    int freq[10] = {0};


    for(char c : s)
    {
       freq[c -'0']++; 
    }

    int count = 0;
    for(int i = 0; i < 10;i++)
    {
        if(freq[i] > 0)
        {
            count = freq[i];
            break;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        if(freq[i] > 0 && freq[i] !=  count)
        {
            cout << "NO" ;
            return 0;
        }
    }

    cout << "YES";


    return 0;
}