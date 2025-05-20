// Problem Z: 74435. Star triangle.
// Write a program that generates triangle made of [*].

// Input format
// The first line contains one integer n (1 <= n <= 100 ) — number of rows.

// Output format
// Triangle with n rows.

// Examples
// Input
// 5
// Output
// [*]
// [*][*]
// [*][*][*]
// [*][*][*][*]
// [*][*][*][*][*]

#include<iostream>


using namespace std;


int main()
{

    int n;
    cin >> n;


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "[*]";
        }
        cout << endl;
        
    }


    return 0;
}