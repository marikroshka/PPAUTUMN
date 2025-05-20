#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
// #define pb push_back
// bool checkPalindrome(vector<int> n)
// {
//     for (int i = 0; i <= n.size()/2; i++)
//     {
//         if (n[i]!= n[n.size()-1-i]) return false;
//     }
//     return true;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>d(n); 
//     vector<vector<int> >permutations;
//     for(int i=0; i<n; i++){
//         cin>>d[i];
//     }
//     sort(d.begin(), d.end());
//     do{
//         permutations.pb(d);
//     }
//     while(next_permutation(d.begin(), d.end()));

//     for (int i = 1; i < permutations.size(); i++)
//     {
//        if ((checkPalindrome(permutations[i])))
//        {
//             for (int j = 0; j < permutations[i].size(); j++) cout << permutations[i][j] << " " ;
//             return 0;
//        }
       
//     }
//     cout << "Impossible";
    
// }
bool palin(vector <int>& v){
    vector <int> x = v;
    reverse(x.begin(), x.end()) return true;
    if( x == v) return true;
    return false; 
}
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    do{
        if(palin(v)){
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            return 0;
            
        }
    }
    while(next_permutation(v.begin(), v.end()));
    cout << "Impossible";
    
}