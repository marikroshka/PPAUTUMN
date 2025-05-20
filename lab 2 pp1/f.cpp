#include <iostream> 

using namespace std; 


int main(){ 

    int n; 

    cin>>n; 

    if(n%2==1){ 

        cout<<"Super"; 
    } 

    else if(n%2==0){ 
        if(n>=2 && n<=5 || n>20){ 

            cout<<"Not Super"; 
        } 
        else if(n>=6 && n<=20){ 

            cout<<"Super"; 
        } 
    } 

    return 0;
}