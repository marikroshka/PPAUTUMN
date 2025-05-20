
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    vector <int> vec(n);

    while ( cin >> n && n!=0){
        vec.push_back(n);
    }

    int x = vec.size();
    int half = x/2;

    for(int i = 0; i < half; i++){
        cout << (vec[i] + vec[x-1-i]) << " ";
    }

    if( x %2 !=0){
        cout << vec[half];
    }
    cout << endl;

    return 0;
}

    