#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector <int> :: iterator it= unique(v.begin(), v.end());
    v.erase(it, v.end());
    for ( int elem : v){
        cout << elem << " ";
    }
    
}