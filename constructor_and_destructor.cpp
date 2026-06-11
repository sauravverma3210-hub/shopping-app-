#include<iostream>
using namespace std;
class saurav{
    public:
    saurav(){
        cout<<"constructor called\n";

    }
    ~saurav(){
        cout<<"destructor called:\n";
    }

};
int main(){
    saurav singh;
    saurav s3;
    saurav kumsr;
}