// Problem O: 74500. Minimum numbers.
// Find the sum of the smallest elements of each column of the matrix and their coordinates. If there same min elements in column program takes coordinates of the first one.

// Input format
// The first line contains two integers 
//  (
// ) and 
//  (
// ) — array size. Remaining lines contain 
//  rows with 
//  integers — elements of matrix.

// Output format
// Coordinates of each smallest element in each column and their sum.

// Examples
// Input
// 2 3
// -1 2 3
// -2 -4 2
// Output
// coordinates of min elements: 
// 2;1
// 2;2
// 2;3

// Their sum:
// -4

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

    int sum = 0;

    
    cout << "coordinates of min elements: " << endl;
    for (int j = 0; j < m; j++) 
    {
        int min = arr[0][j];
        int posX = 0;
        int posY = j;
        for (int i = 0; i < n; i++)
        {
         if(arr[i][j] < min) 
         {
            min = arr[i][j];
            posX = i;
            posY = j;
         }   
        }
        cout << posX + 1 << ';' << posY + 1 << endl;
        sum += min;

    }

    cout << endl;
    cout << "Their sum:" << endl;
    cout << sum;

    return 0;
}