# include<iostream>
# include<string>

using namespace std;
class saurav{
    public:
    string name="monu";
    float marks=1818;
    int rollno;



};
int main(){
    saurav s1;
    s1.name="sauravkumarsingh";
    s1.marks=76.87;
    s1.rollno=46;
    cout<<"name is:"<<s1.name<<endl;
    cout<<"marks is:"<<s1.marks<<endl;
    cout<<"rollno is:"<<s1.rollno<<endl;
    saurav s2;
    cout<<"name is:"<<s2.name<<endl;
    s2.marks=76;
    cout<<"marks is:"<<s2.marks<<endl;
    return 0;


}
