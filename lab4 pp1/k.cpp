// Problem K: 74505. Christmas tree.
// Help Arman to print image of christmas tree in the screen.

// Input format
// Given integer 
//  (
// ), which is height of tree.

// Output format
// Image of tree with stars.

// Examples
// Input
// 6
// Output
// .....*.....
// ....***....
// ...*****...
// ..*******..
// .*********.
// ***********

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n - i;j++){
            cout << ".";
        }
        for(int k = 1; k <= i * 2 - 1;k++){
            cout << "*" ;
        }
        for(int j = 1; j <= n - i; j++){
            cout << ".";
        }
        cout << endl;
        
    }
}