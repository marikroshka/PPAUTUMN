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
    int request;
    cin>>request;
    vector <int> result;
    for (int i = 0; i < request; i++)
    {
        int banknote;
        cin>>banknote;
        result.push_back(mp[banknote]);
    }
    for( int elem : result){
        cout << elem << endl;
        
    }
    
    
}