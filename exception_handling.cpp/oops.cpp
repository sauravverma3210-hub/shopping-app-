# include<iostream>
using namespace std;
class cricket{
    public:
    string name;
    string role;
    float speed;
    void inputdata(string s,string b,float f){
      name=s;
      role=b;
      speed=f;
    //   cout<<"enter cricketer name:";
    //   cin>>name;
    //   cout<<"enter their role in team";
    //   cin>>role;
    //   cout<<"enter his speed while fielding";
    //   cin>>speed;
    }
    void displaydata(){
        cout<<"name is:"<<name<<endl;
        cout<<"role is:"<<role<<endl;
        cout<<"speed is while fielding:"<<speed<<endl;

    }

};
int main(){
    cricket c1;
    cricket c2;
    c1.inputdata("saurav","batter",76.98);
    cout<<"name is:"<<c1.name<<endl;
    cout<<"role is:"<<c1.role<<endl;
    cout<<"his speed while fielding is:"<<c1.speed<<endl;
    c2.inputdata("bittu","batter",75);
    c2.displaydata();

    return 0;
}