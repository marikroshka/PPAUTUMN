#include <bits/stdc++.h>
using namespace std;
string DecToBin(int number){
    string Binary = "";
    while(number > 0){
        Binary = to_string(number % 2) + Binary;
        number /= 2;
    }
    return Binary;
}
int main (){
    int n;
    cin >> n;
    vector<int> numbers;
    while(n--){
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    for(int number : numbers)
        cout << DecToBin(number) << '\n';

}