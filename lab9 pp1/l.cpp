#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// bool isPrime(int a) {
//     int num = abs(a);
//     if (num <= 1) return false;
//     for (int i = 2; i <= sqrt(num); i++)
//         if (num % i == 0)  
//             return false;
//     return true;
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> l(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> l[i];
//     }
//     int count = count_if(l.begin(), l.end(), isPrime);
//     cout << count;
//     return 0;
// }
bool isPrime(int n) {
    if( n == 1 || n == -1 || n == 0) return false;
    n = abs(n);
    for(int i =2; i <=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    int count = count_if(l.begin(), l.end(), isPrime);
    cout << count;
    return 0;
}