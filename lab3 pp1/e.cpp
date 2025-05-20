#include <iostream>
using namespace std;
int main () {

    int n;
    cin >> n;

    if ( n <= 26 && n > 0) {
        cout << char ( n + 64) << " " << char (n + 96);
    }

    else {
        cout << "No such letter!";
    }




    return 0;
}