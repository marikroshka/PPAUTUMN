#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    int x;
    cin >> n >> x;
    vector <int> vec(n);
    int sum = 0;

    for ( int i = 0; i < n; i++){
        cin >> vec[i];
    }
    for ( int i = 0; i<n; i++){
        sum+=vec[i];
        
    }
    int c = abs((sum/n) - x);
    cout << c;
    











    return 0;
}