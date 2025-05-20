#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toKinary(int n, int k) {
    if (n == 0) {
        return "0";  
    }

    string result = "";
    while (n > 0) {
        int remainder = n % k;
        if (remainder < 10) {
            result += (remainder + '0');  
        } else {
            result += (remainder - 10 + 'A');  
        }
        n /= k; 
    }

    reverse(result.begin(), result.end());  
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;  
    cout << toKinary(n, k) << endl;  
    return 0;
}
