#include<iostream>
using namespace std;
class complex
{
    public:
    float real;
    float imag;
    public:
    complex()
    {
        real=0.0;
        imag=0.0;
    }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<"Real part: "<<real<<endl;
        cout<<"Imaginary part: "<<imag<<endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};
int main()
{
    complex c1(2.5,3.5);
    complex c2(1.5,2.5);
    complex c3;
    c3=c1+c2;
    cout<<"First complex number: "<<endl;
    c1.display();
    cout<<"Second complex number: "<<endl;
    c2.display();
    cout<<"Sum of two complex numbers: "<<endl;
    c3.display();
    
    return 0;
}