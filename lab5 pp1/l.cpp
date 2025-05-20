// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    int m;
    
    cin >> n>> m;
    int arr [n][m];
    
    
    
    for (int i=0; i <n; i++) {
        for (int j=0; j < m; j++){
            cin >> arr [i][j];
        }
    }
    
    int max = 0;
    
    
    for (int i=0; i <n; i++) {
        int sum = 0;
        for (int j=0; j < m; i++){
            sum+= arr [i][j];
            if (arr [i] [j]>max){
                sum = max;
           }
        }
    }
   
    
    cout << max;
    
    return 0;
}