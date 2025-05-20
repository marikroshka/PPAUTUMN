#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    cin >> str;

    stack<char> st;  

    // Traverse the string
    for (char c : str) {
        if (!st.empty() && st.top() == c) {
            
            st.pop();
        } else {
            
            st.push(c);
        }
    }

    
    if (st.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}