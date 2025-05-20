// Director of school number 3 wants to congratulate all girls. That’s why he need know what percentage of all pupils are girls? Let’s help him. Write a function which will find the percentage of girls in school.

// Input format
// In the first line of the input givens two integers 
//  and 
 
//  — total number of pupils and number of girls.

// Output format
// Output percentage of girls with 1000 accuracy.

// Examples
// Input
// 100 20
// Output
// 20

#include <iostream>
using namespace std;

void pup( double n, double m){
    double res = (m/n) * 100;
    cout << res;
}

int main (){
    double n,m;
    cin>> n >>m;
    pup(n,m);
    
}