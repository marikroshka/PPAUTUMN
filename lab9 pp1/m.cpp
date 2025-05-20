#include <bits/stdc++.h>
using namespace std;
int count(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
    
}
int main(){
    int n;
    cin >> n;
    vector <int> result(count(n));
    for (int i = 1; i <= n; i++)
    {
        fill(result.begin() + count(i-1), result.begin() + count(i), i);

    }
    for(int elem : result){
        cout << elem << " ";
    }
    

}