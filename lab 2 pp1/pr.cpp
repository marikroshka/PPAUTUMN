#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main () {

    string word;

    cout << "Enter word: ";

    cin >> word;

    for (int k= 0; k < word.length(); k++) {

        bitset<8> binary (word [k]);

        string binary_str = binary.to_string();
        cout << "initial code for <" << word [k] << "> :" <<binary_str;

        for (int i = binary_str.length () - 1; i>=0; i = i - 1) {

            cout << binary_str [i];

        }

    cout << " " << endl;

    return 0;

    }










    return 0;
}