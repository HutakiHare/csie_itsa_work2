//成績判斷
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num<0||num>100){
        cout<<"error\n";
    }else if(90<=num&&num<=100){
        cout<<"A\n";
    }else if(80<=num&&num<=89){
        cout<<"B\n";
    }else if(70<=num&&num<=79){
        cout<<"C\n";
    }else if(60<=num&&num<=69){
        cout<<"D\n";
    }else{
        cout<<"E\n";
    }
    return 0;
}