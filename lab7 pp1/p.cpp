// Problem P: 149523. Random pair generator.
// You’re testing a random generator of pair of numbers. When the generator generates some pair of numbers, you have to answer how many times the sum of the this pair was repeated previously by the machine.

// Input format
// The first line of input contains one integer 
 
// . The next 
//  lines contains two numbers 
 
// , elements of the pairs that were generated.

// Output format
// For each pair of numbers you should print how many times the sum of pairs was occurred before in separate line.

// Examples
// Input
// 4
// 1 1
// 2 3
// 4 5
// 6 7
// Output
// 0
// 0
// 0
// 0
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> sum_count; // To store counts of each sum encountered
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int sum = a + b;

        // Output how many times this sum has occurred before
        cout << sum_count[sum] << endl;

        // Increment the count of this sum in the map
        sum_count[sum]++;
    }

    return 0;
}
