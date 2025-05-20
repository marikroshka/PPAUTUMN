#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    int arr[n]; 
    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    
    int max_value = arr[0];
    int max_index = 0; 
    
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_value) { 
            max_value = arr[i];   
            max_index = i;        
        }
    }
    
    
    cout << max_index + 1 << endl;
    
    return 0;
}
