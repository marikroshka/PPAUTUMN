#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool wrong = false;
    for (int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i])){
            wrong = true;
        }
    }
    if(wrong){
        cout << "Wrong username";
    }
    else cout << "Valid username";
    
}