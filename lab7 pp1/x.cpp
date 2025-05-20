#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    set <string> first;
    for (int i = 0; i < n; i++)
    {
        string n;
        cin>>n;
        first.insert(n);
    }
    int m;
    cin>>m;
    set <string> second;
    for (int i = 0; i < m; i++)
    {
        string n;
        cin>>n;
        second.insert(n);
    }

    vector <string> missed;
    for( string nick : first){
        if( second.find(nick) == second.end()){
            missed.push_back(nick);
        }
    }
    for( string nick : second){
        if( first.find(nick) == first.end()){
            missed.push_back(nick);
        }
    }

    sort( missed.begin(), missed.end());
    for(string l : missed){
        cout << l<< endl;
    }
    
    
    


    return 0;
}