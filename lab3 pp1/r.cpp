#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n; 
    cin >> n;

    int arr[n]; 

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    sort(arr, arr + n);

    
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " "; 
    }
    cout << endl; // 

    return 0;
}






 // #include <iostream>
#include <algorithm> // For sort and reverse
//using namespace std;

//int main() {
    //int n; // Size of the array
    //cin >> n;

    //int arr[100000]; // Declare an array with a maximum size of 100,000

    // Input the elements of the array
    //for (int i = 0; i < n; i++) {
      //  cin >> arr[i];
    //}

    // Sort the array
    //sort(arr, arr + n);

    // Reverse the array using std::reverse
    //reverse(arr, arr + n);
//
    // Output the elements of the reversed sorted array
    //for (int i = 0; i < n; i++) {
       // cout << arr[i] << " ";
    //}
    //cout << endl; // Newline at the end of output

    //return 0;
//}
