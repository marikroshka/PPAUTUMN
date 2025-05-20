// Problem J: 186903. Workout
// Asman has always loved movement. Therefore, even in mathematics, he always tried to turn something over, take away, divide, displace something. And so he decided to flip the two-dimensional matrix. Transpose it and enjoy the beauty...

// Input format
// You are given 
// (1= n <= 50), 
// (1= m <= 50) - size of the array. 1 <= every elements in array <= 100. Next 
//  lines contains 
//  integers each, elements of the array.

// Output format
// Transpose the matrix and print the answer.(matrices are square, that is, the number of columns is equal to the number of rows.)

// Examples
// Input
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output
// 1 4 7 
// 2 5 8 
// 3 6 9 

#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}