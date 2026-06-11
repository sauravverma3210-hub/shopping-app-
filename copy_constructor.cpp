#include <iostream>
using namespace std;

class Student
{
public:
    int id;

    // Parameterized Constructor
    Student(int x)
    {
        id = x;
    }

    // Copy Constructor
    Student(const Student &s1)
    {
        id = s1.id;
        cout << "Copy Constructor Called" << endl;
    }
};

int main()
{
    Student s1(101);
    Student s2 = s1;   // Copy constructor called

    cout << "s1 ID = " << s1.id << endl;
    cout << "s2 ID = " << s2.id << endl;

    return 0;
}