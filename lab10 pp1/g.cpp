#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    map<string,int> mp;
    vector<string> cheaters;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        if(mp[v[i]] == 2){
            cheaters.push_back(v[i]);
        }
    }
    if(cheaters.empty()){
        cout<<"Understandable, have a great day";
        return 0;
    } 
    for(string cheater : cheaters){
        cout<<cheater <<endl;
    }
}