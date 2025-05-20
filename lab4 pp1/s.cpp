// Problem S: 74437. Position of maximum.
// Given a two-dimensional array n x n. Write a program, which finds position of maximum element in array. If maximums are two or more you should output position of the first one.

// Input format
// The first line contains two integers n (1 <= n <= 1000000000 ) and m (1 <= m <= 1000000000) — array size. Remaining lines contain n rows with m integers (-1000000000 <= a[i][j] <= 1000000000 ) — elements of array.

// Output format
// Two integers - row and column indexes (start with 1), position of maximum in array.

// Examples
// Input
// 3
// 0 -1 2
// 4 8 4
// -3 8 0
// Output
// 2 2

#include <iostream>  
using namespace std; 
 
int main() 
{ 
    int n; 
 
    cin >> n;

    int arr[n][n];


    for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }


    int max = arr[0][0];
    int posX = 0;
    int posY = 0;

     for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(arr[i][j] > max) 
                {
                    max = arr[i][j];
                    posX = i;
                    posY = j;
                }
            }
        }

    cout << posX + 1 << " " << posY + 1;

     
 
 
    return 0; 
}