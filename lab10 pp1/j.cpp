#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    map<int,int>::iterator it;
    for(it = mp.begin(); it!= mp.end();it++){
        if( it->first == v[1]){
            cout<<it->second;
        }
    }
}