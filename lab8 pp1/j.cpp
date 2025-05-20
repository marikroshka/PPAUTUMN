#include <iostream>
#include<set>
#include <map>

using namespace std;

int main() 
{

    int n;
    cin >> n;
    string s;
    int score;
    map<string, int> m;

    for ( int i = 0; i < n; i++) {
        cin >> s >> score;
        m[s] += score;
    }

    for ( map<string, int> :: iterator it = m.begin(); it != m.end(); it++) {
        cout << it -> first  << " " << it -> second << endl;
    }
    return 0;
}