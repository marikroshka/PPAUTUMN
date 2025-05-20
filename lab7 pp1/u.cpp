#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    set<string> available;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        available.insert(s);
    }
    cin >> m;
    vector<pair<string, string>> v;
    for (int i = 0; i < m; i++)
    {
        string one, two;
        cin >> one >> two;
        v.push_back(make_pair(one, two));
    }
    string target;
    cin >> target;
    set<string> answer;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first == target && available.count(v[i].second))
        {
            answer.insert(v[i].second);
        }
        else if(v[i].second == target && available.count(v[i].first))
        {
            answer.insert(v[i].first);
        }
    }
    cout << answer.size() << endl;
    
    vector<string> products;
    for (string element : answer)
    {
        products.push_back(element);
    }
    sort(products.begin(), products.end());
    for (int i = 0; i < products.size(); i++)
    {
        cout << products[i] << " ";
    }

    return 0;
}