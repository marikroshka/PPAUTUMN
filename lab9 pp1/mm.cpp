#include <bits/stdc++.h>
using namespace std;

struct student{
    string stud;
    double score;
    student(){}
    student(string name, double gpa){
        this->stud = name;
        this->score = gpa;
    }
    void print(){
        cout << this->stud << " " << this->score;
    }
};

int main() {
    
    string name;
    double gpa;
    cin >> name >> gpa;
    student s1(name,gpa);
    
    s1.print();
    return 0;
}
