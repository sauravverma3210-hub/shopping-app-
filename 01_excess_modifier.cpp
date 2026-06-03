#include<iostream>
using namespace std;
class student{
    private:
    string name;
    float marks;
    int rollno;
public:
void setdata(){
    cout<<"enter name";
    cin>>name;
    cout<<"enter marks:";
    cin>>marks;
    cout<<"enter rollno";
    cin>>rollno;


}
void displaydata(){
    cout<<"name is:"<<name<<endl;
    cout<<"marks is:"<<marks<<endl;
    cout<<"roll no is:"<<rollno<<endl;

}


};
int main(){
    student s1;
    s1.setdata();
    s1.displaydata();
    return 0;
}