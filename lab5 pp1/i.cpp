#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++){
        sum+=s[i];
    }
    if(sum>300){
        cout<<"It is tasty!";
    }
    else{
        cout<<"Oh, no!";
    }
}