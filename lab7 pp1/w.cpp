#include<iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <string,int> mp; // bugs
    for (int i = 0; i < n; i++)
    {
        string weak;
        string name;
        cin>>name>>weak;
        mp[weak]++;
    }
    int m;
    cin>>m;
    map <string, int> h; //hunter
    for (int i = 0; i < m; i++)
    {
        string weak;
        string nam;
        int num;
        cin>>nam>>weak>>num;
        h[weak] +=num;
    }
    map<string,int> ::iterator it;
    int count = 0;
    for(it = mp.begin(); it !=mp.end(); it++){
        if(mp[it->first] > h[it->first]){
            count+= mp[it->first]-h[it->first];
        }
    }
    cout << "Bugs left: " << count << endl;




    return 0;
}