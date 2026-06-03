#include<iostream>
using namespace std;
class dadaji{
    public:
    dadaji(){
        cout<<"out first generation:"<<endl;
    }

};
class papaji:public dadaji{
    public:
    papaji(){
        cout<<"our second generation after dadaji:"<<endl;
    }

};
class sonji:public papaji{
    public:
    sonji(){
        cout<<"our present generation now it's his resnposibility to expend our wans:"<<endl;
    }

};
int main(){
    sonji saurav;
    sonji monu;
    papaji avinashsingh;
    dadaji chotedada;
    return 0;

}