// 數字排序
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    set<int> num;
    string str;
    int dele1,dele2;
    cin>>str>>dele1>>dele2;
    for(int i=0;i<5;i++){
        if(i+1!=dele1&&i+1!=dele2){
            num.insert(((int)str[i])-'0');
        }
    }
    for(set<int>::iterator it = num.begin(); it!= num.end(); it++){
        cout<<*it;
    }
    cout<<"\n";
    return 0;
}