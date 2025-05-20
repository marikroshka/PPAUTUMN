// Problem Q: Who is the best?
// You are given list of students name and their points. Askar Agay wants to find out who scored the most points by percentage. Askar Agay is busy with the NEERC final, he asks you to help him.

// Input format
// You are given list of students name, and points student earned.

// Output format
// Print students name and by points scored as a percentage of total points in descending order.

// Examples
// Input
// 10
// Nurzhan 30
// Gaziz 20
// Aldiyar 25
// Mikhail 10
// Ali 10
// Mikhail 5
// Nurzhan 5
// Temur 28
// Gaziz 2
// Aldiyar 5
// Output
// Nurzhan 25%
// Aldiyar 21.4286%
// Temur 20%
// Gaziz 15.7143%
// Mikhail 10.7143%
// Ali 7.14286%
#include <iostream> 
#include <vector> 
#include <string> 
#include <map> 
#include <algorithm> 
using namespace std; 
bool compareByPoints(pair<string,double>& a, pair<string,double>& b){ 
    if(a.second == b.second){ 
        return a.first > b.first; 
    } 
    return a.second>b.second; 
} 
int main(){ 
    int n; 
    cin>>n; 
    double total = 0; 
    map<string,double> mp; 
    for(int i=0;i<n;i++){ 
        string name; 
        double points; 
        cin>>name>>points; 
        total+=points; 
        mp[name] += points; 
    } 
    vector<pair<string,double>> v; 
    map<string,double>:: iterator it; 
    for(it=mp.begin();it!=mp.end();it++){ 
        double percentage = (it->second / total) * 100.0; 
        v.push_back(make_pair(it->first,percentage)); 
    } 
    sort(v.begin(),v.end(),compareByPoints); 
    for(int i=0;i<v.size();i++){ 
        cout<<v[i].first<<" "<<v[i].second<<"%"<<endl; 
    } 
}