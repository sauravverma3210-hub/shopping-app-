# include<iostream>
# include<fstream>
 using namespace std;
 int main(){
    ifstream file("saurav.txt",ios::in);
    string s;
    getline(file,s);
    cout<<s;
    return 0;


 }