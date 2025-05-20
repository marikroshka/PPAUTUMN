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
    sort(v.begin(), v.end());
    vector <int> res;
    res.push_back(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i] != v[i - 1]){
            res.push_back(v[i]);
        }
    }
    do {
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
        
    }
    while(next_permutation(res.begin(),res.end()));
    
    
}