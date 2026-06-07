#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void input() {
        cin >> name >> roll >> marks;
    }

    void display() {
        cout << name << " " << roll << " " << marks << endl;
    }
};

int main() {
    Student s[3];

    for(int i=0;i<3;i++) s[i].input();
    for(int i=0;i<3;i++) s[i].display();
}