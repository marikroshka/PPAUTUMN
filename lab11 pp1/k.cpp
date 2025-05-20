#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int n = char(s[i] - '0');
        if(n > max){
            max = n;
        }
    }
    cout << max;
    
}