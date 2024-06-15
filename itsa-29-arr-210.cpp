//簡易加密
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    char c;
    for(int i = 0; i < num; i++){
        cin>>c;
        cout<<(char)(c+2)<<"\n";
    }
    return 0;
}