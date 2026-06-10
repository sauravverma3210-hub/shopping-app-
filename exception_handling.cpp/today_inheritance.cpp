# include<iostream>
using namespace std;
class Animal{
public:
    Animal(){
        cout<<"Animal makes sound\n";
    }

};
class Dog:public Animal{
public:
    Dog(){
        cout<<"Dog barks\n";
    }

};
class Jarmansapeherd:public Dog{
    public:
    Jarmansapeherd(){
        cout<<"this dog is a kind of jarmansaperd\n";
    }

};
int main(){
    Dog d1;
    Animal a1;
    Jarmansapeherd j1;
    return 0;

}