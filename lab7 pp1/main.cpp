

#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
using namespace std;

// bool compare(pair<int,int>& a, pair<int,int>& b ){
//     if( a.second == b.second) return a.first < b.first;
//     return a.second > b.second;
// }
// int main(){
//     int n;
//     cin >> n;
//     vector <int> v(n);
//     map <int,int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         cin>> v[i];
//         mp[v[i]]++;
//     }
//     vector <pair<int,int>> result;
//     map<int,int>  :: iterator it;
//     for( it = mp.begin(); it != mp.end(); it++){
//         result.push_back(make_pair(it->first, it->second));
//     }
//     sort(result.begin(), result.end(),compare);
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout<< result[i].first << endl;
//     }
    
    
//     return 0;
// }

//    int main(){
//     int n;
//     cin >> n;
//     vector <string> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int count = 0;
//     string s ;
//     cin >> s;
//     for (int i = 0; i < n; i++)
//     {
//         if(s.find(v[i]) != string :: npos){
//             count++;
//         }
//     }
//     cout << count;

// int main(){
//     int n;
//     cin >> n;
//     for(int i = 2; i <=n; i++){
//         if(n % 1 ==0){
//             cout << i;
//             return 0;
//         }
//     }
// }
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    sort(v.begin(), v.end());
    cout << v[x-1];

}
    
   
    
    

    
    
    
    


   }