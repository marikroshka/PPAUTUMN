#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

    int n;

    cin >> n;

    set<string> uniqueSurnames;

    string surname;

    for (int i = 0; i < n; i++)
    {
        cin >> surname;
        uniqueSurnames.insert(surname);
    }

    cout << uniqueSurnames.size() << endl;
}
