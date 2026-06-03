# include<iostream>
using namespace std;
class base{
    public:
     virtual void  sound(){
        cout<<"saurav singh";
    }


};
class derieved:public base{
    public:
    void sound(){
        cout<<"son of ravindra singh\n";

    }

};
int main(){
    base *ptr;
    derieved d1;
    ptr=&d1;
    ptr->sound();
    return 0;


}
