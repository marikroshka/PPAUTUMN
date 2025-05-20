// Problem I: 188131. Tsunami.
// Scientists have reported that an earthquake in the sea will soon occur near Paradis Island. This could trigger a large tsunami that could damage the island. However, we know that if the tsunami height is an even number, then it should go in the opposite direction, towards Marley. Draw tsunami moving in the desired direction.

// Input format
// You are given integer 
//  - the height of tsunami.

// Output format
// Draw the tsunami.

// Examples
// Input
// 5
// Output
// ....#
// ...##
// ..###
// .####
// #####

#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    if(n % 2!= 0){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n - i; j++){
                cout << ".";
            }
            for(int k = 1;k <= i; k++){
                cout << "#" ;
            }
            cout << endl;
        }
    }
    else if(n % 2 == 0){
        for(int i = 1; i <= n; i++){
            for(int k = 1; k <= i; k++){
                cout << "#";
            }
            for(int j = 1;j <= n - i;j++){
                cout << ".";
            }
            
            cout << endl;
        }
    }
}