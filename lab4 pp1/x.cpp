// Problem X: 74427. The second.
// Given a two-dimensional array n x n. Find the second largest number in array. If all elements are equal, output 0.

// Input format
// The first line contains one integer n (1 <= n <= 100000 ) — array size. Remaining lines contain n rows with n integers a[i][j] (-1000000000 <= a[i][j] <= 1000000000 ) — elements of array.

// Output format
// One number, second maximal number in array.

// Examples
// Input
// 4
// -1 7 3 2
// 9 2 4 1
// 8 2 -6 4
// 1 4 9 4
// Output
// 8

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
    int max2 = arr[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            
            int element = arr[i][j];

            if (element > max) 
            {
                max2 = max;
                max = element;
            } else if (element > max2 && element < max) {

                max2 = element;
            }
        }
    }

    if (max2 == max) {
        cout << 0 << endl;
    } else {
        cout << max2 << endl;
    }

    return 0;
}