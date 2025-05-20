#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;  // Ввод года

    // Проверка условий високосного года
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
