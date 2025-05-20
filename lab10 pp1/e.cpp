#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    map <int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    int max = 0;
    map <int,int> :: iterator it;
    for( it = mp.begin(); it!= mp.end();it++){
        if( it->second > max) max = it->second;
    }
    if( max <= (n+1)/2 ) cout << "Possible";
    else cout << "Impossible";

    
}