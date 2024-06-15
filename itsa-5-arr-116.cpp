//到底有幾隻兔子? arr-116
#include<iostream>
using namespace std;

long long int Fib(int month){
    if(month<2){
        return 1;
    }else{
        long long int tmp1=0,tmp2=1,result;
        for(int i=2;i<=month;i++){
            result=tmp1+tmp2;
            tmp1=tmp2;
            tmp2=result;
        }
        return result;
    }
}

int main(){
    int month_n;
    cin>>month_n;
    while(!cin.eof()){
        cout<<Fib(month_n)<<"\n";
        cin>>month_n;
    }
    
    return 0;
}