#include <iostream>
using namespace std;


string reverseString(string s) {
    
    if (s.empty()) {
        return "";
    }
    
    return reverseString(s.substr(1)) + s[0];
}

int main() {
    string s;
    cin >> s;  
    
    string reversed = reverseString(s);  
    
    cout << reversed << endl;  
    
    return 0;
}
