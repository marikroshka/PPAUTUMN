#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    string result = "";

    for (char c : S) {

        char shifted = 'A' + (c - 'A' + N) % 26;
        result += shifted;
    }

    cout << result << endl;

    return 0;
}
