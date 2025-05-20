#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string n = s;
    reverse(n.begin(), n.end());
    if(s == n){
        cout << "Yes";
    }
    else cout << "No";
}