// Problem T: 105203. Matrix none square.
// You are given a matrix containing n rows and m columns, each cell contains zero or one. We call such a matrix cool if it does not have a single 2 by 2 square filled entirely with zeros or whole ones.

// You have to determine is given matrix cool or not.

// Input format
// In first line given n, m - size of matrix. 1 <= n,m <= 100.

// In the next n lines, on each there are m numbers which are 1 or 0.

// Output format
// Print YES, if given matrix is cool, otherwise print NO.

// Examples
// Input
// 1 1
// 0
// Output
// YES


#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    bool square=false;
    int arr[n][m];
    for (int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];}
    }
    for (int i=1; i<n;i++){
        for(int j=1; j<m;j++){
            if(arr[i-1][j-1]==arr[i][j]&&arr[i-1][j]==arr[i][j]&&arr[i][j-1]==arr[i][j]){
                    square=true;
            }
        }
    }

        if(square){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }

    
    return 0;
}