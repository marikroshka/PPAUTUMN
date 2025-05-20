#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    long long n;
    cin>>n;
    
    for(long long i = 0; i <= n; i++){
        cout<<fixed << setprecision(0)<<powl(i, i)<<" ";
    }
} 