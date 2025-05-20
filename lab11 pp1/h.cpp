#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1) return 0; 
    if (n == 2) return 1; 

    int prev1 = 0, prev2 = 1; 
    int current;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2; 
        prev1 = prev2;           
        prev2 = current;
    }

    return current;
}

int main() {
    int n;
    cin >> n; 

    cout << fibonacci(n) << endl; 
    return 0;
}
