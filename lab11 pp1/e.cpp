#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(long long number){
    while(number % 2 == 0) number /= 2;
    return number == 1;
}
int main(){
    int number;
    cin >> number;
    cout << ((isPowerOfTwo(number) ? "Yes" : "No"));
}