#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

bool check( char a, char b){
    int num = (a - '0') * 10 + ( b - '0');
    int root = sqrt(num);
    return root*root == num;
}

int main() {
    string n;
    cin >> n;
    stack <char> st;
    for (int i = 0; i < n.length(); i++)
    {
        if(!st.empty() && check(st.top(), n[i])){
            st.pop();
        }
        else{
            st.push(n[i]);
        }
    }
    if(st.empty()) cout << "Stack is empty";
    else {
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }
    
    
    return 0;
}