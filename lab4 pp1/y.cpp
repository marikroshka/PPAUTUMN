// spiral-2
// Return all elements of the matrix in spiral order, given a matrix of 
//  elements. Numbers start increasing around the corner matrix(
// ) then goes inside up to the middle element making spiral shape.

// Input format
// The first line contains integer 
//  (
// ). Remaining lines contain integers 
//  (
// ) — elements of matrix.

// Output format
// Spiral matrix.

// Examples
// Input
// 3
// Output
// 1 2 3
// 8 9 4
// 7 6 5

#include<iostream>


using namespace std;


int main()
{

    int n;
    cin >> n;

    int Alinamatrix[n][n];
    
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while(top <= bottom && left <= right)
    {
        //Traverse the top row 

        for(int i = left; i <= right; i++)
        {
            Alinamatrix[top][i]  = num++;
        }
        ++top;

        //Traverse the right column 

        for(int i = top; i <= bottom; i++)
        {
            Alinamatrix[i][right] = num++;
        }
        --right;

        //Traverse the bottom row
        for(int i = right; i >= left; i--)
        {
            Alinamatrix[bottom][i] = num++;
        }
        --bottom;

        //Traverse the left column
        for(int i = bottom; i >= top; i--)
        {
            Alinamatrix[i][left] = num++;
        }
        ++left;
    }


    //Printing Matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << Alinamatrix[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}