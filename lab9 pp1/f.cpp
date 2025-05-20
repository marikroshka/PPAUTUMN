#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int days;
    cin >> days;
    map<string, int> mp;
    int total = 0;
    for (int i = 0; i < days; i++)
    {
        int rows;
        cin >> rows;
        for (int j = 0; j < rows; j++)
        {
            string city;
            int students;
            cin >> city >> students;
            mp[city] += students;
            total += students;
        }
        
    }
    vector <pair<string,double>> v;
    map<string, int> :: iterator it;
    for( it = mp.begin(); it!= mp.end(); it++){
        double num = it->second;
        double operation = (num/total) * 100;
        v.emplace_back(it->first, operation);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i< v.size(); i++){
        cout<< v[i].first << " " <<v[i].second<<endl;
    }
    
    
}