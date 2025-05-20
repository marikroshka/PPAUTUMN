#include <iostream>


using namespace std;

int main() {
    
    int n;

    cin >> n;  // Ввод числа

    if (n == 0) {
        cout << "None" << endl;
    } else if (n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}
