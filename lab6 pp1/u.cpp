#include <bits/stdc++.h>
using namespace std;
int maxgcd(int n, int arr[]){
    int result = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            int curr = __gcd(arr[i],arr[j]);
            result = max(curr, result);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<maxgcd(n,arr);
}