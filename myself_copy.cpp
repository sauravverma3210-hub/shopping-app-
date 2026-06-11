#include<iostream>
using namespace std;
class student{
    public:
    float marks;
    student(float m){ // parameterized constructor
        marks=m;
    }
    student(const student &s1){
        marks=s1.marks;
    }

};
int main(){
    student s2(76.86);
    student s3=s2;// copy constructor called 
    cout<<"s2 marks:"<<s2.marks<<endl;
    cout<<"s3 marks:"<<s3.marks<<endl;
    return 0;

}