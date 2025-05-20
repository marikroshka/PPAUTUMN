// Problem S: Attendance pliz
// Askar Agay, due to the fact that few students remain in practice, decided to take an attendance. He has a list of students who came to practice for November. Askar agay decided to add +1 points to all students who was in practice at least 3 three different days. Keep in mind that Askar Agay could take attendance on the same day several times!

// Input format
// You are given list of attendance with n rows. Each row consist of student name, and day of November. It means student was in practice on that day.

// Output format
// Print all students name, and if student was in practice at least 3 times print +1, otherwise print NO BONUS.
#include <bits/stdc++.h>
#include <map>
#include <set>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, set<int>> mp;
    for(int i = 0; i<n; i++ ){
        string name;
        int day;
        cin >> name >> day;
        mp[name].insert(day);
    }
    map <string, set<int>> :: iterator it;
    for(it = mp.begin(); it!= mp.end(); it++ ){
        string name = it->first;
        set<int> day = it->second;
        if( day.size() >= 3){
            cout << name << " +1"<< endl;
        }
        else {
            cout <<name << " NO BONUS" << endl;
        }
    }



    return 0;
}