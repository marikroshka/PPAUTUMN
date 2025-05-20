#include <iostream>
using namespace std;

int main() {
    char (n);
    cin >> n; 
    
    if (char(n) <= 90) {
    cout << char (n + 32);
    }
    
    else cout << char (n - 32);
    return 0;
}
