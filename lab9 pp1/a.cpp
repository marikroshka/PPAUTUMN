#include <map>
#include <bits/stdc++.h>
using namespace std;
bool compare(pair<string,int>&a,pair<string,int>&b ){
    if(a.second == b.second) return a.first < b.first;
    return a.second>b.second;
}
int main(){
    string s;
    vector <pair<string,int>> v;
    map <string,int> mp;
    while(cin>>s){
        mp[s]++;
    }
    map <string,int> :: iterator it;
    for(it = mp.begin(); it!= mp.end(); it++){
        v.emplace_back(it->first,it->second);
    }
    sort(v.begin(), v.end(), compare);
    for( int i = 0; i < v.size(); i++){
        cout << v[i].first << " : " << v[i].second << endl;
    }
}