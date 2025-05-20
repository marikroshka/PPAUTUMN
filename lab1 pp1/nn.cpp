#include <iostream>
using namespace std;

int main() {
    int n, d, i=2;

    cin >> n >> d;
    int rabbits=n;
 
    while (i <= d){
       
        rabbits += 2*i*n;
        i++;
    }
    cout << rabbits;

    return 0;
}