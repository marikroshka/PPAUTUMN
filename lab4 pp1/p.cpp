// Problem P: 74434. Multiplication table.
// Write a program that prints an n x n multiplication table.

// Input format
// The first line contains one integer n (2 < n <= 100) — array size.

// Output format
// Two-dimensional array. Separate numbers with one space.

// Examples
// Input
// 3
// Output
// 0 1 2 
// 1 1 2 
// 2 2 4 

#include<iostream>


using namespace std;


int main()
{

    int n;
    cin >> n;



    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if(j == 0)
            {
                cout << i << " ";
            }
            else if(i == 0)
            {
                cout << j << " ";
            }
            else cout << i * j << " ";
        
        }
        cout << endl;
    }

   

    return 0;
}