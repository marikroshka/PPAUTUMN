// Problem E: 187464. Perfect matrix or not?
// Check whether the given matrix is perfect or not and print the result. We call the matrix perfect if and only if it is symmetric over the main diagonal. The main diagonal is the one that goes from the upper left corner of the two-dimensional array to the lower right.

// Input format
// The first line is integer number n
//  - the number of rows and columns in the array a
// . Next, there are n lines, n numbers each, which are the elements of the array.

// Output format
// If the array is perfect print Perfect., otherwise print Not perfect.

// Examples
// Input
// 3
// 0 1 2
// 1 5 3
// 2 3 4
// Output
// Perfect.

#include <iostream>
using namespace std;

int main(){
    int n;

    cin >>n;

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> arr[i][j];
           
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
              if(arr[i][j] != arr[j][i]){
                cout << "Not perfect."<< endl;
                return 0;
            }
        }
    }
    cout << "Perfect." << endl;




   return 0; 
}