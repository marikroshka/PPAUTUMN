#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s;
}
/*
#include <bits/stdc++.h> 
#include <string>
#include <algorithm>
int main(){
    int n;
    cin >> n;
    vector <int> v;

    for (int i = 0; i < n; i++)
    {   int c;
        cin >> c;
        v.push_back(c);
    }


    
}
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    map <int,int> mp;
    while(cin>>n){
        mp[n]++;
    }
    map <int,int> ::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it->second ==2){
            cout << it->first << " " << it->first << " ";
        }
    }
}
*/
