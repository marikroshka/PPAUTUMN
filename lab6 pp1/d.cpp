// Problem D: 74449. Books
// Each book in the library has its unique ID number. IDs are stored in an array 
//  with size 
// . Alikhan wants to borrow a book with an ID of 
// , therefore he is curious whether the library has this book. Let’s help him by writing a function!

// Input format
// The first line contains a single integer — 
// , 
//  — number of books in the library.

// The second line contains 
//  elements of 
//  — 
// , 
//  — IDs of the books available in the library.

// The third line contains a single integer — 
// , 
//  — ID of the book Alikhan wants to borrow.

// Output format
// If the library has this book print “Yes”, otherwise — “No”.

// Examples
// Input
// 2
// 4 5
// 4
// Output
// Yes
#include <iostream>
using namespace std;

bool iselinarr( int n, int arr[], int target) {
    for ( int i = 0; i < n; i++) {
        if( arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main () {

    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    if(iselinarr(n,arr,target)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}