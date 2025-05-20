#include <bits/stdc++.h>
using namespace std;
bool comparator(const pair<string, float>& a, const pair<string, float>& b) {
    if (a.second != b.second)
        return a.second > b.second; 
    return a.first < b.first;       
}
int main() {
    int n;
    cin >> n;
    map<string, pair<float, int>> mp;

    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;

        mp[name].first += score;
        mp[name].second++;
    }

    vector<pair<string, float>> v;
    for (const auto& elem : mp) {
       float sc = elem.second.first / elem.second.second; 
        v.emplace_back(elem.first, sc); 
    }
    sort(v.begin(), v.end(),comparator);

    for (const auto& entry : v) {
        cout << entry.first << ": " << fixed << setprecision(3) << entry.second << endl;
    }

    

    // cout << entry.first << " " << fixed << setprecision(3) << sc << endl;
    return 0;
}
