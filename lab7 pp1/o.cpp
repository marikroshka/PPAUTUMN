#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <int> array(n);
    for(int i = 0; i<n;i++){
        cin>>array[i];
    }

    set<int> uniqueSum;

    for (int i = 0; i < n - 1; i++)
    {
        int sum = array[i] + array[i+1];
        uniqueSum.insert(sum);
    }
    
    cout << uniqueSum.size()<<endl;

    return 0;
}