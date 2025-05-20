// Problem R: 74477. Don't wanna be perfect.
// If an element is a perfect square, replace it with its root.

// Input format
// The first line contains two integers n (1 <= n <= 100000 ) and m (1 <= m <= 100000) — array size. Remaining lines contain n rows with m integers a[i][j] (1 <= a[i][j] <= 1000000000) — elements of array.

// Output format
// Array with some replaced elements.

// Examples
// Input
// 3 3
// 16 7 8
// 9 5 6
// 3 4 8
// Output
// 4 7 8 
// 3 5 6 
// 3 2 8 

#include <iostream>  
#include<cmath>


using namespace std; 
 
int main() 
{ 
    int n, m;
 
    cin >> n >> m;


    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a = sqrt(arr[i][j]);
            if (a * a == arr[i][j]) {  
                arr[i][j] = a;        
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

     
 
 
    return 0; 
}