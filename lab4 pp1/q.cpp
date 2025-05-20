// Problem Q: 74429. Negative
// Given a two-dimensional array of size n x m (n rows, m columns). Write a program, which outputs count of negative numbers in array.

// Input format
// The first line contains two integers n (1 <= n <= 100000 ) and m (1 <= n <= 100000 ) — array size. Remaining lines contain n rows with m integers a[i][j] (-100000 <= a[i][j] <= 100000 ) — elements of array.

// Output format
// Single integer, negative numbers count.

// Examples
// Input
// 3 4
// -1 0 2 3
// 5 8 20 -12
// 7 8 -4 9
// Output
// 3

#include<iostream>


using namespace std;


int main()
{

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> arr[i][j];
        }
    }


    int cnt = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if( arr[i][j] < 0) cnt++;
        }
    }
    

    cout << cnt;

    return 0;
}
