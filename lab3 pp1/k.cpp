#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
   
    int n1,n2;
    cin >> n1 >> n2;
   
    int arr[n];

 
    int b; 
    int c; 
 
    for(int i =1; i <= n; i++){
        cin >> arr[i];
    }
 
    for(int i = 1; i<= n; i++){
        if(i == n1){
            b = arr[i];
        }
        else if(i == n2){
            c = arr[i];
        }
    }
 
    for(int i = 1; i <= n; i++){
        if(i == n1){
            cout << c << " ";
            continue;
        }
        else if(i == n2){
            cout << b << " ";
            continue;
        }
        else{
            cout << arr[i] << " ";
        }
    }
 
 
 
 
 
}