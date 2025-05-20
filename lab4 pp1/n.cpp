// Problem N: 74503. Main diagonal.
// The main diagonal of a matrix consists of those elements that lie on the diagonal that runs from top left to bottom right.

// Return the maximum value of the element on this diagonal and its coordinates. If there same maximum elements it takes coordinates of the first one.

// Input format
// The first line contains integer 
//  (
// )(size of matrix 
// ). Remaining lines contain integers — elements of matrix.

// Output format
// Integer(maximum value) and its coordinates.

// Examples
// Input
// 3
// -1 5 6
// 2 -5 5
// 5 0 -6
// Output
// Maximum element is: -1 with coordinates: 1;1

#include <iostream>
using namespace std;

int main() {
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
            if(i == j)
            {
                if(arr[i][j] > max)
                {
                    max = arr[i][j];
                    posX = i;
                    posY = j;
                }
            }
        }
    }

    cout << "Maximum element is: " << max;
    cout << " with coordinates: " << posX + 1 << ';' << posY + 1;



    return 0;

}