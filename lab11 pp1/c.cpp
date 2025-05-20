#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int x;
    cin>>x;
    bool ishere = false;
    for (int i = 0; i < n; i++)
    {
        if(v[i] ==x){
            ishere = true;
        }
    }
    if(ishere){
        cout << "Yes";
    }
    else cout << "No";
    
    
}