#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;  

    vector<int> times(n);
    for (int i = 0; i < n; i++) {
        cin >> times[i];  
    }
    sort(times.begin(), times.end());
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(times[i + 1] - times[i]) <= t) {
            cout << "cheater" << endl;  
            return 0;
        }
    }

    cout << "no" << endl;  
    return 0;
}
