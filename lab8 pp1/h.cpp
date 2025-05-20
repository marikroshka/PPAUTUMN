#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    vector<int> array{};
    int n, numbers;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> numbers;
        array.push_back(numbers);
    }

    // size = array.size();
    sort(array.begin(), array.end());

    set <int> s(array.begin(), array.end());
    int counter = 0;
    for( int element : s){
        if(s.count(element) == s.end()){
            counter++;
        }
        if( counter >= 1){
            s.erase(element);
            cout << element;
        }
    }

    
}

//g++ -std=c++11 name_file.cpp -o name_object