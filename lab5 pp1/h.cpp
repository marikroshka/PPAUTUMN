// Problem H: 194709. See the truth.
// People talk to each other without noticing the lies in their words. Daniil can see lies, in every word. Digits appear in words if this word is not truth. Help other people see only the truth in words. Add this function to your program

// Input format
// Sentence in one line

// Output format
// Each line contains a word that does not have numbers. In the order of their appearance

// Examples
// Input
// he is awesome y0u ar3 aw3some t00
// Output
// he
// is
// awesome

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    string word = "";
    for (int i = 0; i <= sentence.length(); ++i) {
        if (i < sentence.length() && sentence[i] != ' ') {
            word += sentence[i];
        } else {
            bool has_digit = false;
            for (char c : word) {
                if (isdigit(c)) {
                    has_digit = true;
                    break;
                }
            }
            if (!has_digit && !word.empty()) {
                cout << word << endl;
            }
            word = "";
        }
    }

    return 0;
}