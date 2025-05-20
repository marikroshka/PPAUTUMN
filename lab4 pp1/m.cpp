// Problem M: 187206. Soldiers.
// There was one legend about fighting between odd and even nation. They split up because of character named zero. Zero was single and bored so one day he made a plan to make conflict between ODDs and EVENs. Zero said to ODDs: EVENs said that they are stronger than ODDs. EVENs heard that ODDs are preparing for war, by sorting their soldiers from EVENs nation. Write a program that prints an n x n matrix where every row is bigger in rank and the rank is odd.

// Input format
// The first line contains one integer n where 
// . — array size

// Output format
// Two-dimensional array. Separate numbers with one space.

// Examples
// Input
// 5
// Output
// 1 1 1 1 1 
// 3 3 3 3 3 
// 5 5 5 5 5 
// 7 7 7 7 7 
// 9 9 9 9 9 

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    int oddNumber = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << oddNumber << " ";
        }
        cout << endl;
        oddNumber += 2;
    }

    return 0;
}