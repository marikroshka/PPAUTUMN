// Problem G: 187065. Queen's move
// You are given the position of queen on the chessboard. Print the chessboard in the following format:

// cell of the queen should be marked with ‘1’

// cells that the queen beats should be marked with ‘2’

// all other cells should contain ‘*’

// If the queen’s coordinates are not valid, print “Impossible”. Valid coordinate lies in range 
// .

// Input format
// The only line of input contains two integers 
//  and 
// , position of the queen 

// Output format
// Print the chessboard in the format specified above, or “Impossible” if the coordinates are not valid.

// Examples
// Input
// 2 2
// Output
// 2 * 2 * 2 * * * 
// * 2 2 2 * * * * 
// 2 2 1 2 2 2 2 2 
// * 2 2 2 * * * * 
// 2 * 2 * 2 * * * 
// * * 2 * * 2 * * 
// * * 2 * * * 2 * 
// * * 2 * * * * 2 

#include <iostream>

using namespace std;
int main(){
    
    int x,y;
    cin >> x >> y;
    char arr[8][8];
    if(x > 7 or y > 7){
        
        cout << "Impossible";
        return 0;
    }
    else
    {
        for(int i = 0; i < 8;i++){
            for(int j = 0;j < 8; j++){
                if(i == x and j == y){
                    arr[i][j] = '1';
                }
                else if(i == x or j == y or (i - j == x - y) or (i + j == x + y)){
                    arr[i][j] = '2';
                }
                else{
                    arr[i][j] = '*';
                }
            }
        }
    }
    for(int i = 0;i < 8; i++){
        for(int j = 0;j < 8; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}