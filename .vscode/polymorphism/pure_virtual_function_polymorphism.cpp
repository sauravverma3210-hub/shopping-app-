#include<iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;   // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog Barks" << endl;
    }
};
class cat:public Animal{
    public:
    void sound(){
        cout<<"cat mewww:\n";
    }
    

};

int main() {
    Dog d;
    d.sound();
    cat c;
    c.sound();
    return 0;
}