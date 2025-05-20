#include <iostream>
#include <vector>
#include <algorithm> 
#include <numeric>   

using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    int g = gcd(A, B);

    vector<int> divisors;
    for (int i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            divisors.push_back(i);        
            if (i != g / i)               
                divisors.push_back(g / i); 
        }
    }

    sort(divisors.begin(), divisors.end());

    cout << divisors[divisors.size() - K] << endl;

    return 0;
}
