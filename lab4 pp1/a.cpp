// // Problem A: 143757. Cocktail max and min.
// // Lets do mix with maxima and minima elements from array.

// // Input format
// // The first line contains integers N, M where 
// //  . Your task is to rearrange array of integers.

// // Output format
// // Output changed 2D array, check Notes.

// // Examples
// // Input
// // 3 4
// // 0 1 2 3
// // 4 5 6 7
// // 8 9 10 11
// // Output
// // 11 0 10 1 
// // 9 2 8 3 
// // 7 4 6 5 

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     int a[n * m];  
//     int b[n][m];   


//     for (int i = 0; i < n * m; i++) {
//         cin >> a[i];
//     }

//     sort(a, a + n * m);

//     int left = 0;           
//     int right = n * m - 1;   

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if ((i * m + j) % 2 == 0) {
//                 b[i][j] = a[right];  
//                 right--;
//             } else {
//                 b[i][j] = a[left];   
//                 left++;
//             }
//         }
//     }


//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << b[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;
int main () {

    int n, m;
    cin >> n >> m;
    int ar[n*m];

    int br[n][m];

    for (int i = 0; i < n*m; i++)
    {
        cin >> ar[i];
    }

    sort (ar,ar + n*m);

    
    int left = 0;
    int right = n * m -1;

    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++) 
        {
            if ((i * m + j) % 2 == 0) 
            {
                br[i][j] = ar[right];
                right--;
            }
            else 
            {
                br[i][j] = ar[left];
                left++;
            }
        }
    }
    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++) 
        {
            cout << br[i][j];
        }
        cout << endl;
    }









    return 0;
}