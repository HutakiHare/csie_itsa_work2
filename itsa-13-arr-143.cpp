//轉換英文字母到數字 arr-143
#include<iostream>
using namespace std;

int main(){
    char c;
    cin.get(c);
    while(c!='\n'&&!cin.eof()){
        cout<<"("<<(int)(c-'a')<<")";
        cin.get(c);
    }
    cout<<"\n";
    return 0;
}