#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
    
    unordered_set <int> vec;

    int num;

    while (cin >> num){
        vec.insert(num);
    }

    cout << vec.size() << endl;

}

