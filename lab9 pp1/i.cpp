#include <bits/stdc++.h>
using namespace std;
bool equal(vector<int>& v){
    int target = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == target) return true;
    }
    return false;
    
}
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector <int> unique;
    for (int i = 0; i < v.size(); i++)
    {
        if(find(v.begin(), v.end(), v[i] == v.end()) unique.push_back(v[i]));
    }
    
    if(equal(v)){
        cout << v[0];
        return 0;
    }

    if(is_sorted(unique.rbegin(), unique.rend())){
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        
    }
    
    do{
        for(int elem : unique){
            cout << elem << " ";
        }
    }
    while(next_permutation(unique.begin(), unique.end()));

    
}