// A group of junior programmers are attending an advanced programming camp, where they learn very difficult algorithms and programming techniques! Near the center in which the camp is held, is a professional bakery which makes tasty pastries and pizza. It is called ’Bonabity’... or ’Ponapety’... or ’Ponabity’... Actually no one knows how to spell this name in English, even the bakery owner doesn’t, and the legends say that Arabs always confuse between ’b’ and ’p’, and also between ’i’ and ’e’, so ’b’ for them is just the same as ’p’, and ’i’ for them is just the same as ’e’, they also don’t care about letters’ cases (uppercase and lowercase for a certain letter are similar). For example, the words ’Ponabity’ and ’bonabety’ are considered the same. You are given two words including only upper case and lower case English letters, and you have to determine whether the two words are similar in Arabic.

// Input format
// The input consists of several test cases. The first line of the input contains a single integer T, the number of the test cases. Each of the following T lines represents a test case and contains two space-separated strings (each one consists of only upper case and lower case English letters and its length will not exceed 100 characters).

// Output format
// For each test case print a single line: ’Yes’ if the words are similar in Arabic and ’No’ otherwise.

// Examples
// Input
// 4
// Ponabity bonabety
// barbie barpee
// abcabc apcap
// abc apcd
// Output
// Yes
// Yes
// No
// No
#include<bits/stdc++.h>
using namespace std;

string filter( string s){
    string answer = "";
    for ( int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
        }
    for ( int i = 0; i < s.length(); i++){
        if (s[i] == 'b'){
            s[i] = 'p';
        }
        if (s[i] == 'i'){
            s[i] = 'e';
        }
    }
    answer +=s;
    return answer;
}


int main(){
    int n;
    cin >> n;
    while ( n >0){
        string s1,s2;
        cin >> s1 >> s2;
        if( filter(s1) == filter(s2)){
            cout << "Yes" << endl;
        }
        else { 
            cout << "No" << endl;
            }
        n--;
    }
}