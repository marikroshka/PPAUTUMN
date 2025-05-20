#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> name;
    vector <int> grades;
    for (int i = 0; i < n; i++)
    {
        string s;
        int a;
        cin >> s >> a;
        name.push_back(s);
        grades.push_back(a);
    }
    sort(name.begin(), name.end());
    sort(grades.begin(), grades.end());

    for (int i = 0; i < n; i++)
    {
        cout << name[i] << " " << grades[i] << endl;
    }
    
    
}