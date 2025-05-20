// You are given one letter of English alphabet, write a function which will convert only lowercase letters to uppercase.
#include <iostream>
using namespace std;

void letter( char a){
    if(a >= 'a' && a <= 'z' ){
        char b = toupper(a);
        cout << b;
    }
    else cout << a;
    
}

int main (){
    char a;
    cin >> a;
    letter(a);
}