#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file("saurav.txt",ios::binary);
    file<<"Hello, World!, i am saurav kumar singh!";
    file.close();
    return 0;
}