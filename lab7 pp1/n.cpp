#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set <int> vector;
    

    for( int i = 0; i<n; i++){
        int l;
        cin>>l;
        vector.insert(l);
        
    }
    if(vector.size() == n){
        cout<< "YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }





    return 0;
}