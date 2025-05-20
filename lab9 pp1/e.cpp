#include <bits/stdc++.h>
using namespace std;
bool compare(vector<int>& a, vector<int>& b){
    int sumofA= accumulate(a.begin(),a.end(),0);
    int sumofB= accumulate(b.begin(),b.end(),0);
    if(sumofA != sumofB) return sumofA < sumofB;
    if (a.size() != b.size()) return a.size() < b.size();
    return a <b;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        v[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            cin>>v[i][j];
        }
        
    }
    sort (v.begin(), v.end(),compare);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
        
    }
    
}