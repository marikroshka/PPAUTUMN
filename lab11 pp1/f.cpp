#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int counter = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int n = char(s[i] - '0');
        if(n%2 ==0){
            counter++;
        }
    }
    cout<<counter;
    
}