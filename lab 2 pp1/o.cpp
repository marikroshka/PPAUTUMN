#include<iostream>


using namespace std;


int main()
{
    int a, b, c;
    int costA, costB, costC;
    int dengi;

    cin >> a >> b >> c >> costA >> costB >> costC >> dengi;

    a*costA + b*costB + c*costC <= dengi ? cout << "Yes" : cout << "No";

    return 0;



}
