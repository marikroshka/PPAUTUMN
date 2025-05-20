// Problem F: 195870. Puzzle.
// Boris wants to play a puzzle. He has a square of size 
//  x 
// , all the cells of which are filled with different numbers. He needs to find the maximum number in each row and fill that row with that number.

// Input format
// First line contains integer 
// , 
//  - size of square. Each next 
//  line contains 
//  different numbers, 
// .

// Output format
// Print new square.

// Examples
// Input
// 3
// 1 2 3
// 7 23 1
// 19 4 8
// Output
// 3 3 3 
// 23 23 23 
// 19 19 19 

#include <iostream>


using namespace std;
int main(){
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

    for(int i = 0; i < n; i++)
    {
        int max = arr[i][0];

        for(int j = 1; j < n; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];

            }
            
        }
        
    

    for(int j = 0; j < n; j++)
    {
        cout << max << " ";
    }
    cout << endl;
}

    return 0;
}
