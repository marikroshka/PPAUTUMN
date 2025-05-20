#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    map <string,int> students;
    map <string, int> rep;

    for (int i = 0; i < n; i++)
    {
        string name;
        int score;
        cin>>name>>score;
        students[name] += score;
        rep[name]++;
    }

    for( auto i : students){
        double avg = double(students[i.first])/double(rep[i.first]);
        cout << i.first << ": ";
        printf("%.3f", avg);
         cout << endl;
    }
    

    return 0;
}