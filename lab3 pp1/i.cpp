#include <iostream>

using namespace std;

int main () {

    int n;

    cin >> n;

    int arr [n];


    for (int  i = 0; i < n; i++) {
        cin >> arr [i];
    }

    int min_element = arr[0];
    int max_element = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
        if (arr[i] > max_element) {
            max_element = arr[i];
        }

         
    }

    for ( int i = 0; i<n; i++) {

        if ( arr [i]== max_element) {
            arr [i] = min_element;

            
        }
    }

    for (int i= 0; i< n; i++) {

        cout << arr[i] << " ";
    }
    




    return 0;
}