// Problem S: 189327. Dimash that's too bad.
// Dimash hacked the database and he got all the email addresses to send out spam. But Dimash’s program works differently.
// The program should only receive logins from @gmail.com
// Help the young hacker get the logins. Help him do it!!!

// Input format
//  – num of words 
// .
//  strings 
//  in each line.

// Output format
// Clear mails in each line.

// Examples
// Input

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string email;
        cin >> email;

        if (email.find("@gmail.com") != string::npos) {
            string login = email.substr(0, email.find('@'));
            cout << login << endl;
        }
    }

    return 0;
}