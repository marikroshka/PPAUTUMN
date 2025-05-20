// Problem W: 74504. 2nd diagonal.
// The secondary diagonal of a matrix consists of those elements that lie on the diagonal that runs from top right to bottom left.

// Return the sum of elements that lie on it.

// Input format
// The first line contains integer 
//  (
// ). Remaining lines contain integers — elements of matrix.

// Output format
// Integer - sum.

// Examples
// Input
// 3
// -1 0 5
// 5 -2 5
// -3 5 6
// Output
// 0

#include<iostream>

using namespace std;


int main()
{

    int n;
    cin >> n;

    int arr[n][n];


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j  < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < n; ++i) 
    {
        sum += arr[i][n - 1 - i];
    }

    cout << sum;

    return 0;
}