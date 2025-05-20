#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;

    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mp[num] = 1; 
    }

    
    int maxKey = INT_MIN;
    for (const auto& pair : mp) {
        maxKey = max(maxKey, pair.first); 
    }

    cout << maxKey << endl;
    return 0;
}