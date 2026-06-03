# include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"class student:\n";
    }
    int age;

};
class saurav:public student{
    public:
    saurav(){
        cout<<"class derieved:\n";
    }
    void setdata(){
        cout<<"enter age:";
        cin>>age;
    }
    void displaydata(){
        cout<<"age is:"<<age<<endl;

    }

};
int main(){
    // student s1;
    saurav s1;
    s1.setdata();
    s1.displaydata();
    return 0;
}