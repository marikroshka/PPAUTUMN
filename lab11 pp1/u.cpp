#include <iostream>
#include <string>
using namespace std;

int main() {
    string binaryString;
    cin >> binaryString;

    int decimalValue = 0;
    for (char bit : binaryString) {
        decimalValue = decimalValue * 2 + (bit - '0'); 
    }

    // Output the result
    cout << decimalValue << endl;
    return 0;
}
