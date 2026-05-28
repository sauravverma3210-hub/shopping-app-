# include<iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cout<<"enter no:";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(num % i==0){
            count++;
        }

    }
    if(count>=2){
        cout<<"given no is prime";
    }
    else{
        cout<<"given no is not prime:";
    }
    return 0;

}
