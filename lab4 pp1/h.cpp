// Problem H: 187425. Squid game.
// Let’s change the rules for the squid game a bit. The winner of this game is the one who has the biggest number of total points earned during the game rounds. You are given an m x n integer matrix points where points[i][j] is the number of points the 
//  player has in the 
//  round. Your task is to print the winner’s number of points - the maximum number of gained points. Note, that there can be few winners only if they have an equal number of total points.

// Input format
// First two numbers - 
//  and 
//  - dimensions of a 2d array, where 

// next m x n numbers are elements of the array 
// .

// Output format
// Print single integer number - the number of points the winner earned during the game.

// Examples
// Input
// 3
// 3
// 2 8 7
// 7 1 3
// 1 9 5
// Output
// 17

#include <iostream>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int max = 0;
    int row = 0;

    for(int i=0; i < n;i++){
        int sum = 0;
        for(int j = 0; j < m;j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max = sum;
        }
    }
    cout<<max;
}