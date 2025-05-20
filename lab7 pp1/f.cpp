#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> heights(n);
    for(int i =0;i<n; i++){
        cin>>heights[i];
    }

    int q; //сколько интервалов будет
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int l,r; // интервал начало и конец
        cin>>l>>r;
        int visiblecount=0; 
        int maxheight=0;
        vector <int> counter;
        for (int j = l; j <= r; j++)
        {
            if(heights[j] > maxheight){
                visiblecount++;
                maxheight=heights[j];
                
            }
        }
        counter.push_back(visiblecount);
        
    }
    for (int element : counter)
        {
            cout << element << endl;
        }
    
    



    return 0;
}