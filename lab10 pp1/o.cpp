#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    set<int> s(v.begin(),v.end()) ;
    set<int>::iterator it;
    int counter = 1;
    for(it = s.begin();it!=s.end();it++){
        cout<<counter <<" "<<*it<<endl;
        counter++;
    }
}