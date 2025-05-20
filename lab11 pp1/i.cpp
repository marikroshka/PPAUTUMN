#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    while(cin>> n && n != 0){
        sum+=n;
    }
    cout << sum;
}