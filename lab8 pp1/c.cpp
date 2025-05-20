#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    map <int,int> mp;
    vector <int> vec(n);
    for (int i = 0; i < n; i++)
    {
        mp.insert(i);
    }
    int count = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++){
            if(v[i] == v[j]){
                count++;
                if(count >=2){
                counter++;
            }
            }
            
            
        }
        
    }
    cout<< counter;
    
    cout<< endl;
}