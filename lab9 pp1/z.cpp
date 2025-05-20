// #include <iostream>
// #include <vector>
// #include <tuple>
// #include <algorithm>


// using namespace std;

// bool time(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
//     return tie(get<0>(a), get<1>(a), get<2>(a)) < tie(get<0>(b), get<1>(b), get<2>(b));
// }
// template <typename T>
// void bubbleSort(vector<T>& arr, bool (*comp)(const T&, const T&)) {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - 1 - i; j++) {
//             if (!comp(arr[j], arr[j + 1])) {
//                 // Если элементы в неправильном порядке, меняем их местами
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }



// int main() {
//     vector<tuple<int, int, int>> v;
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         v.emplace_back(a, b, c);
//     }

    
//     bubbleSort(v, time);
    
//     for (int i = 0; i < v.size(); i++) {
//         cout << get<0>(v[i]) << " " << get<1>(v[i]) << " " << get<2>(v[i]) << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool compareTimes(pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    if (a.second.first != b.second.first) {
        return a.second.first < b.second.first; 
    }
    return a.second.second < b.second.second; 
}
void bubbleSort(vector<pair<int, pair<int, int>>>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (!compareTimes(v[j], v[j + 1])) {
                swap(v[j], v[j + 1]); 
            }
        }
    }
}
int main(){
    vector<pair<int,pair<int,int> > > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int hours,minutes,seconds;
        cin>>hours>>minutes>>seconds;
        v.push_back(make_pair(hours, make_pair(minutes,seconds)));
    }
    bubbleSort(v);
    for(int i=0;i<n;i++){
        cout<< v[i].first <<" " << v[i].second.first<<" "<<v[i].second.second<<endl;
    }
}