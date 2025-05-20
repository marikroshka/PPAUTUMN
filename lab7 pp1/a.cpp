// magine you are a warehouse manager responsible for tracking inventory levels. Each item in the warehouse has a unique SKU (stock keeping unit) number. Every day, you or an employee conducts an inventory check, recording the SKU numbers of the items in stock. However, due to human error or unexpected occurrences, one item’s SKU number might be missing from the inventory record. Your task is to identify the missing SKU number. Use a vector.

// Input format
// The first line of input contains an integer 
// , size of the list 
// . Next line contains 
//  unique integers, values of the list 
// .

// Output format
// Print the missing SKU number.

// Examples
// Input
// 3
// 1 0 3
// Output
// 2
/*#include <iostream>
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
} */

#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n;

    cin >> n;

    vector<int> arr(n);
    for ( int i =0; i < n; i++){
        cin >> arr[i];
    }
    int sumup = 0;
    int sumofvector = 0;
    for ( int i = 0; i <=n; i++){
        sumup+=i;
    }
    for ( int i = 0; i < arr.size(); i++){
        sumofvector+=arr[i];
    }

    cout << sumup - sumofvector;
}