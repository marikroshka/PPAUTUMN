#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxCount = 0;
    int count[1001] = {0}; 

    // 1 2 2 4 4 1 2 3 3 4 5
    
    //  count
    //  [
    //     0 - 0
    //     1 - 2
    //     2 - 3
    //     3 - 2
    //     4 - 3
    //     5 - 1
    //     999 - 0
    //  ]




    for(int i = 0; i < size; i++) {
        count[arr[i]]++;
        if (count[arr[i]] > maxCount) {
            maxCount = count[arr[i]];
        }
    }

    for(int i = 1000; i >= 0; i--) { 
        if (count[i] == maxCount) {
            cout << i << " ";
        }
    }

    cout << endl; 
    return 0;
}