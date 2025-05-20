// Problem L: 74439. To drop or not to drop?
// Help Aisultan choose which discipline to drop, so he will have a good GPA. Each row represents one subject with its grades. Pick one subject with the minimal total grades. If two or more subjects’ grades are equal, pick the first one.

// Input format
// The first line contains two integers n (2 <= n <= 10 ) and m (1 <= m <= 10 ) — number of subjects and grades respectively. Remaining lines contain n rows with m integers a[i][j] (0 <= a[i][j] <= 100 ) — elements of array.

// Output format
// Single integer, index of row.

// Examples
// Input
// 3 4
// 0 78 2 3
// 9 7 32 6
// 67 3 29 2
// Output
// 2

#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int a[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int minsumrow = 0;
    int minsum = 0;
    
    for (int j = 0; j < m; j++) {
        minsum += a[0][j];
    }

    for (int i = 1; i < n; i++) {
        int rowsum = 0;
        for (int j = 0; j < m; j++) {
            rowsum += a[i][j];
        }
        if (rowsum < minsum) {
            minsum = rowsum;
            minsumrow = i;
        }
    }

    cout << minsumrow + 1 << endl;

    return 0;
}