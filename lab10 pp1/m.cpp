#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string login,password;
        cin>>login>>password;
        mp[login]++;
    }
    map<string,int>::iterator it;
    for(it = mp.begin();it!=mp.end();it++){
        if(it->second > 3){
            cout<<it->first <<" is hacked"<<endl;
        }
        else cout<<it->first<<" is valid"<<endl;
    }
}