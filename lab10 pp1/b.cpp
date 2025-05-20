#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin>>number;
        mp[number]++;
    }
    int max = 0;
    int min_value = INT_MAX;
    map<int,int> ::iterator it;
    for(it= mp.begin(); it!= mp.end(); it++){
        if(it->second > max){
            max = it->second;
            min_value = it->first;
        }
        else if (it->second == max) {
            min_value= min(min_value, it->first); 
        }
    }
    
    cout << min_value;
    
}