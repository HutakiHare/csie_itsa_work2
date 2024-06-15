//正整數統計
#include <iostream>
#include <map>
using namespace std;

int main(){
    unsigned int num, gap, n;
    cin>>num>>gap;
    map<unsigned int, int> dif_num;
    for(int i = 0; i< num; i++){
        cin>>n;
        if(dif_num.find(n)!=dif_num.end()){
            dif_num[n]++;
        }else{
            dif_num.insert({n,1});
        }
    }
    for(map<unsigned int,int>::iterator it = dif_num.begin(); it !=dif_num.end(); it++){
        if(it->second >= gap){
            cout<<it->first<<","<<it->second<<"\n";
        }
    }
    return 0;
}