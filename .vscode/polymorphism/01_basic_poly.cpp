#include<iostream>
using namespace std;
class area
{
    public:
    void Area(float r)
    {
        cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }
    void Area(float l,float b)
    {
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }
};
int main(){
    area a1;
    a1.Area(5.0);
    a1.Area(4.0,6.0);
    area a2;
    a2.Area(8.0,8.0);
    
    return 0;
}