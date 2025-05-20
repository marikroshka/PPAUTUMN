#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    int l = -1;
    for ( int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort( arr, arr+n);
    for( int i = 0; i <n; i+=2){
        if( i == n-1 || arr[i] != arr[i+1]){
            int l = arr[i];
            break;
        }

        
     }
     if( l != -1){
        cout << l << endl;
     }
     return 0;
}
    
    
    
    
