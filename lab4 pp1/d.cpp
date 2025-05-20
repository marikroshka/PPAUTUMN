// Problem D: 187698. Diagonal x.
// You are given int n the size of table, you have to create multiplication table and output diagonal x*y

// Input format
// Input integer N where 
// .

// Output format
// Output 2d-array where 1 row and column iterated to N and diagonal are result of multiplication

// Examples
// Input
// 5
// Output
// 0 1 2 3 4 
// 1 1 0 0 0 
// 2 0 4 0 0 
// 3 0 0 9 0 
// 4 0 0 0 16 

#include<iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0)
            {
                cout << j <<  " ";
            }
            else if(j == 0)
            {
                cout << i << " ";
            }
            else if( i == j) cout << i * j << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }




    return 0;
}