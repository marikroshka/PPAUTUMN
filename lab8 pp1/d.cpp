#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n >> m;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>> v[i];
    }  
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] == m){
            counter++;
        }
    }
    cout << counter << endl;
    
    return 0;
}