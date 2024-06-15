//判斷撲克牌的牌型是否有成對
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<char,int> poker;
    char num,dont_care;
    for(int i = 0; i < 5; i++){
        cin>>num>>dont_care;
        if(poker.find(num)!=poker.end()){
            poker[num]++;
        }else{
            poker.insert({num,1});
        }
    }
    int sum = 0;
    for(map<char,int>::iterator it = poker.begin(); it != poker.end();it++){
        if(it->second>=4){
            sum+=2;
        }else if(it->second>=2){
            sum++;
        }
    }
    cout<<sum<<"\n";
    return 0;
}