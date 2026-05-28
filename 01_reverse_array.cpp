#include<iostream>
using namespace std;
int main(){
    int arr[5]={43,7,6,5,87};
    int i=0;
    int j=4;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
        
    }
    return arr[5];
   
    return 0;
}