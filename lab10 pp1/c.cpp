#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <string,string> mp;
    for (int i = 0; i < n; i++)
    {
        string word,translation;
        cin>>word>>translation;
        mp[word] = translation;
    }

    string target;
    cin>>target;
    mp.erase(target);
    map <string,string> :: iterator it;
    for(it = mp.begin(); it!= mp.end(); it++){
        cout << it->first<< " " << it->second << endl;
    }
    
}