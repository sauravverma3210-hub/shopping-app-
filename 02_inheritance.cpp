# include<iostream>
using namespace std;
class employee{
    public:
    int age;
    string name;


};
class employee1:private employee{
    public:
    void getdata(){
        cout<<"enter the value of age:";
        cin>>age;
        cout<<"enter name:";
        cin>>name;


    }
    void displaydata(){
        cout<<"age is:"<<age<<endl;
        cout<<"name is:"<<name<<endl;

    }



};
int main(){
    employee1 s1;
    s1.getdata();
    s1.displaydata();
    return 0;
}