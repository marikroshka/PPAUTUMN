#include <bits/stdc++.h>
#include <set>
using namespace std;

bool isStrong(string s)
{
    bool isUpper = false;
    bool isDigit = false;
    bool isLower = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            isLower = true;
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            isUpper = true;
        }

        if (s[i] >= '0' && s[i] <= '9')
        {
            isDigit = true;
        }
        if (isLower && isUpper && isDigit)
        {
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    set <string> passwords;
    for( int i = 0; i < n; i++){
        string x;
        cin >> x;
        if(isStrong(x)){
            passwords.insert(x);
        }
    }
    cout << passwords.size() << endl;
    
    for (string str : passwords) {
        cout << str << "\n";
    }

    return 0;
}