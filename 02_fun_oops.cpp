# include<iostream>
# include<string>

using namespace std;
class saurav{
    private:
    string name;
    float marks;
    int rollno;
    public:
void getdata(){
    // name=n;
    // marks=m;
    // rollno=r;
    cout<<"enter the name of a string type"<<endl;
    cin>>name;
    cout<<"enter the marks"<<endl;
    cin>>marks;
    cout<<"enter the roll no of the given person:"<<endl;
    cin>>rollno;


}
void displaydata(){
    cout<<"name is:"<<name<<endl;
    cout<<"marks is:"<<marks<<endl;
    cout<<"roll no is:"<<rollno<<endl;
}



};
int main(){
    saurav s1;
    s1.getdata();
    s1.displaydata();
    saurav s2;
    s2.getdata();
    s2.displaydata();
    

    
    

    // s1.name="sauravkumarsingh";
    // s1.marks=76.87;
    // s1.rollno=46;
    // cout<<"name is:"<<s1.name<<endl;
    // cout<<"marks is:"<<s1.marks<<endl;
    // cout<<"rollno is:"<<s1.rollno<<endl;
    // saurav s2;
    // cout<<"name is:"<<s2.name<<endl;
    // s2.marks=76;
    // cout<<"marks is:"<<s2.marks<<endl;
    return 0;


}
