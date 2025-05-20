// Problem R: Common characters
// You are given a list of strings A. Print all characters that appears in all strings

// Input format
// In the first line given n - number of strings.

// In the next n lines given elements of array.

// Output format
// Print all single common characters, if there are no common characters print NO COMMON CHARACTERS
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector <string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>> v[i];
    }
    set <char> s(v[0].begin(), v[0].end());
    for (int i = 1; i < n; i++)
    {
        set <char> answer;
        for(char letter : v[i]){
            if(s.find(letter) != s.end()){
                answer.insert(letter);
            }
        }
        s = answer;
    }
    if(s.empty()) cout << "NO COMMON CHARACTERS";
    else{
        for(char element : s){
            cout << element << " ";
        }
    }
    




    return 0;
}