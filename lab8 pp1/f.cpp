#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack <char> st;
    for(char basket : s){
        if(basket == '('){
            st.push(basket);
        }
        else if(!st.empty() && basket == ')'){
            st.pop();
        }
        else{
            cout<< "NO";
            return 0;
        }
    }
    if(st.empty()){
        cout<< "YES";
    }
    else{
        cout<< "NO";
    }
}