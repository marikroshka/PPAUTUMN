#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> v(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>v2[i];
    }
    
    v.erase(unique(v.begin(), v.end()), v.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());
    vector <int> merged;
    int i = 0; 
    int j = 0;
    while( i < v.size() || j < v2.size()){
        if(i < v.size()) merged.push_back(v[i++]);
        if(j < v2.size()) merged.push_back(v2[j++]);
    }
    merged.erase(unique(merged.begin(), merged.end()), merged.end());
    for(int elem : merged){
        cout << elem << " ";
    }

}