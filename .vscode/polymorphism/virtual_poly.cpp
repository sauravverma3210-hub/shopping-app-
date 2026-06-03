# include<iostream>
using namespace std;
class animal{
    public:
    virtual void sound(){
        cout<<"animal speaks:\n";
    }

};
class dog:public animal{
    public:
    void sound(){
        cout<<"animal speaks like dog barks:";
    }

};
int main(){
    animal *a;
    dog d1;
    a=&d1;
    a->sound();
    return 0;
}