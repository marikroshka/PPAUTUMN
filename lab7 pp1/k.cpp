#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){

    int n, numberof;
    cin>> n >> numberof;
    set <int> inXcoordinate;
    set <int> inYcoordinate;
    vector <int> free;
    vector <int> answer;
    for (int i = 0; i < numberof; i++)
    {
        int x,y;
        cin>>x>>y;
        inXcoordinate.insert(x);
        inYcoordinate.insert(y);
        int frees = (n - inXcoordinate.size()) * (n - inYcoordinate.size());
        free.push_back(frees);
    }

    for (int element : free){
        cout << element << " ";
    }
    

    return 0;
}