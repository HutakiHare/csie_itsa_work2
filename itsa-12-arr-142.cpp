//陣列存多少? arr-142
#include<iostream>
using namespace std;

int main(){
    int M,N,sum=0;
    cin>>M>>N;
    for(int i=1;i<=M;i++){
        int tmp=i*i;
        if(tmp%N==0){
            sum+=tmp;
        }
    }
    cout<<sum<<"\n";
    return 0;
}