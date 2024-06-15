//Online Game 選擇角色
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,string> character = {{1,"Person"},{2,"Fairy"},{3,"Dwarf"}};
    int num;
    cin>>num;
    switch (num){
    case 1: cout<<character[num]<<"\n";
        break;
    case 2: cout<<character[num]<<"\n";
        break;
    case 3:cout<<character[num]<<"\n";
        break;
    }
    return 0;
}