#include <iostream>
using namespace std;

int main() {
  
    int n;

    cin >> n;

    int actualsum=0;
    int expectedsum = n*(n+1) /2;

    for( int i = 0; i < n; i++){
        int sku;
        cin >> sku;
        actualsum+=sku;
    }
    cout << expectedsum - actualsum;

    return 0;
}