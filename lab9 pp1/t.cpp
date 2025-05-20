#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int m;
    cin >> m;
    vector <int> vec(m);
    for (int i = 0; i < m; i++)
    {
        cin>>vec[i];
    }
    vector<int> result(n + m);

    merge(v.begin(), v.end(), vec.begin(), vec.end(), result.begin());

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
    
    
