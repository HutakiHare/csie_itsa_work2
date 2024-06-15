//身高排序
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    set<int> height;
    string num;
    cin>>num;
    while(num!="====="){
        int cm = stoi(num);
        height.insert(cm);
        cin>>num;
    }
    cin>>num;
    while(num!="end"){
        set<int>::iterator it = height.end();
        for(int i = 0;i<stoi(num);i++){
            it--;
        }
        cout<<*it<<"\n";
        cin>>num;
    }
    return 0;
}