#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int n = char(s[i] - '0') / 2;
        sum+=n;
    }
    cout << sum;
} 