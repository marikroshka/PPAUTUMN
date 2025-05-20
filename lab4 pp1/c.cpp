// Problem C: 187091. Minesweeper
// You are preparing mine field for the Minesweeper game. You know coordinates of the bombs, and you have to fill the field in the following way:

// cells with the mine should contain “*”

// other cells should contain the number of mines in the 
//  by 
//  neighborhood if there are any, and “.” otherwise

// Input format
// The first line contains two integers 
//  and 
// , the size of mine field 
// . Next line contains an integer 
 
// , number of mines on the field. Each of the next 
//  lines contains two integers 
//  and 
// , coordinates of mine 
// .

// Output format
// Print the minefield in the format specified above. Field cells should be separated by space from each other.

// Examples
// Input
// 5 5
// 2
// 0 0
// 1 1
// Output
// * 2 1 . . 
// 2 * 1 . . 
// 1 1 1 . . 
// . . . . . 
// . . . . . 

#include <iostream>
using namespace std;

int main() {
    int n, m, count;
    cin >> n >> m;
    char arr[n][m]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = '.';
        }
    }
    cin >> count;
    for (int i = 0; i < count; i++) {
        int x, y;
        cin >> x >> y;
        arr[x][y] = '*'; 
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '*') continue; 
            int mineCount = 0;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int nx = i + dx;
                    int ny = j + dy;
                    if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[nx][ny] == '*') {
                        mineCount++;
                    }
                }
            }
            if (mineCount > 0) {
                arr[i][j] = mineCount + '0';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}