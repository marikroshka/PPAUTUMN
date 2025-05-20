// Problem U: Pyramid
// You are given a two-dimensional array of size N x N. Your task is to calculate the sum of all numbers except for the outermost(it means first and last) columns, rows and diagonals. And display a two-dimensional array replacing the outermost columns, rows and diagonals with ’*’.

// Input format
// The program receives one number n as input, which are the number of rows and columns in the array. Then the input stream contains n lines containing n numbers each, which are array elements.

// Output format
// The program should print the resulting array, allocating exactly 3 characters to the output of each number. In the next line print sum.

// Examples
// Input
// 9
// 0 3 0 5 0 6 0 3 5
// 1 0 1 1 1 1 1 5 0
// 0 0 0 1 1 1 3 0 5
// 3 0 0 0 1 2 0 0 0
// 4 6 7 0 2 0 0 0 6
// 0 0 0 1 0 0 0 0 0
// 0 0 0 5 0 2 0 0 0
// 0 0 0 0 2 1 1 0 0
// 0 0 0 0 0 0 0 0 0
// Output
//   *  *  *  *  *  *  *  *  *
//   *  *  1  1  1  1  1  *  *
//   *  0  *  1  1  1  *  0  *
//   *  0  0  *  1  *  0  0  *
//   *  6  7  0  *  0  0  0  *
//   *  0  0  *  0  *  0  0  *
//   *  0  *  5  0  2  *  0  *
//   *  *  0  0  2  1  1  *  *
//   *  *  *  *  *  *  *  *  *
// 33


#include <iostream> 
using namespace std; 
int main(){ 
    int n; 
    cin>>n; 
    string arr[n][n]; 
    for(int i = 0;i < n;i++){ 
        for(int j = 0;j < n;j++){ 
            cin >> arr[i][j]; 
        } 
    } 
    int sum = 0;  
    for(int i = 0; i < n;i++){ 
        for(int j = 0;j < n; j++){ 
            if(i == j or i+j == n - 1 or i == 0 or j == 0 or j == n - 1 or i == n - 1){ 
                arr[i][j] = '*'; 
            } 
            else{ 
                sum += stoi(arr[i][j]); 
            } 
        } 
    } 
    for(int i = 0; i < n; i++){ 
        for(int j = 0;j < n; j++){ 
            cout << arr[i][j] << "  ";  
        } 
        cout << endl; 
    } 
    cout << sum; 
}