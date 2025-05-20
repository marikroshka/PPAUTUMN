#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    int arr[a];
    
    
    for ( int i = 0; i < a; i++) {
        cin >> arr [i];
    }
    
    int max_value = arr[0];
    
    for ( int i =1; i < a; i++) {    
        if ( arr[i] > max_value) {
            max_value = arr [i];
        }
     }
    cout << max_value << endl;
   
    return 0;
}
