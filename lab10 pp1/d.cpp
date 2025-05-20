#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map <string,int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string name;
        int score;
        cin>>name>>score;
        mp[name] +=score;
        mp[name].count++;
    }
    // map <string,int> :: iterator it;
    // for(it=mp.begin(); it!= mp.end(); it++){

    // }
    cout << count;

    

}