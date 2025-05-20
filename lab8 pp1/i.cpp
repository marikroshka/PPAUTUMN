#include <bits/stdc++.h>
#include <set>
#include <vector>
using namespace std;

int main(){

//     int n;
//     cin>>n;
//     vector <string> vec(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>vec[i];
//     }
//     set <string> name;
//     for( string element : vec){
//         if ( name.find(element) == name.end()){
//             name.insert(element);
//             cout << "new user added" << endl;
//         }
//         else {
//             cout << "user already exists" << endl;
//         }
//     }

    int n;
    cin>>n;
    
    map <string,bool> mp;
    for( int i = 0; i < n; i++){
        string s;
        cin>>s;
        if(!mp[s]){
            cout << "new user added" << endl;
            mp[s] = true;
        }
        else{
            cout << "user already exists" << endl;
        }
    }
    



    return 0;
}