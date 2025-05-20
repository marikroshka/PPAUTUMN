// Problem X: 194007. Is usual number?
// You’re given a single integer number n, and you need to determine whether this number is usual or not. We call the number usual if the prime factors of this number are limited to 2, 3 and 5. If the given number is usual, print Yes; otherwise, print No.

// Important: Solve the problem by implementing a function:

bool isUsual(int num)
#include<bits/stdc++.h>
using namespace std;

bool isUsual(int number){
    while (number % 2 == 0){
        number /=2;
    }
    while (number % 3 == 0){
        number /=3;
    }
    while (number % 5 == 0){
        number /=5;
    }
    if (number == 1){
        return true;
    }
    return false;
}

int main (){
    int n;
    cin>>n;
    if (isUsual(n)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}