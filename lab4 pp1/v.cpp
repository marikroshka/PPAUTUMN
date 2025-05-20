// Problem V: 74502. Primes.
// A prime number (or a prime) is a natural number greater than 
//  that cannot be formed by multiplying two smaller natural numbers.

// Find all prime numbers from 
//  to 
//  using a nested for loop.

// Input format
// Integer 
//  (
// ).

// Output format
// All prime numbers

// Examples
// Input
// 50
// Output
// 2 is prime
// 3 is prime
// 5 is prime
// 7 is prime
// 11 is prime
// 13 is prime
// 17 is prime
// 19 is prime
// 23 is prime
// 29 is prime
// 31 is prime
// 37 is prime
// 41 is prime
// 43 is prime
// 47 is prime

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; ++i) {
        bool is_prime = true;

        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;  
            }
        }

        if (is_prime) {
            cout << i << " is prime" << endl;
        }
    }

    return 0;
}
