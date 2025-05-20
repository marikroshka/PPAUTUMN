/*The element of the array is called a 
, if there was no same element in the array before.

For every element of the array, print “YES” if it is newbie, and “NO” otherwise.

Input format
The first line of input contains an integer 
 
. Next line contains 
 integers - elements of the array 
 
.

Output format
For every element of the array, print “YES” if it is newbie, and “NO” otherwise.

Examples
Input
6
1 4 10 4 1 9
Output
YES
YES
YES
NO
NO
YES */
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector <int> vector(n);
    for( int i =0; i<n; i++){
        cin >> vector[i];
    }
    
    for( int i = 0; i < n; i++){
        
        bool isnew = true;
        for ( int j = 0; j < i; j++){
            if(vector[j] == vector[i]){
                isnew = false;
                break;
            }
        }
        if (isnew){
            cout << "YES" << endl;
         }
        else {
            cout << "NO"<< endl;
        }
    }


    return 0;
}