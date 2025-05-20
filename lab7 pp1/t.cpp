// Nurbol tries to hack Aslan’s steam account every week. But Aslan is a very lazy person and he has a simple algorithm for new passwords. He just takes a number in which all digits are different. And that number is the smallest number between l and r(l and r inclusive). Help Nurbol find the password if he knows the numbers l and r. If there are no such number, Nurbol just says: “Understandable, have a great day”. Continuation of the story, will be on the final exam:)

// Input format
// Integers l and r. (1000<=l<=r<=100000).

// Output format
// Integer - password. Or “Understandable, have a great day” without quotes.

// Examples
// Input
// 1000 1030
// Output
// 1023
#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool isUnique( int number){
    set <int> unique;
    int counter = 0;
    while(number>0){
        unique.insert(number%10);
        number/=10;
        counter++;
    }
    if(counter == unique.size()){
        return true;
    }
    return false;
}

int main(){
    int left, right;
    cin>>left>>right;
    for(int i = left; i<=right; i++){
        if(isUnique(i)){
            cout<<i;
            return 0;
        }
        
    }
    cout << "Understandable, have a great day";
    
    
}
