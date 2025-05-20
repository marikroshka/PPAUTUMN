// Problem Z: 187707. Ali
// Can you help Ali to write function with next logic: if input string contains only one symbol 1 then it returns true, if input contains only one symbol 0 function returns false. In other cases return given string as is.

// You have to implement function string strToBool(string str).
#include <bits/stdc++.h>
using namespace std;

string strToBool(string str){

    for( int i = 0; i < str.length(); i++){
        if (str == "1" ){
            return "true";
        }
        else if( str == "0"){
            return "false";
        }
        else{return str;}
    }
    
 }

int main (){

    string str;
    cin >> str;
    cout<<strToBool(str);

 }