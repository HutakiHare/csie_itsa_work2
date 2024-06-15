//陣列元素
#include <iostream>
#include <cstring>
#include <cctype>
#include <sstream>
#include <map>
using namespace std;

int main(){
    int sum_word = 0, num;
    string str;
    getline(cin,str);
    stringstream ss(str);
    map<int,int>num_box;
    while(ss>>num){
        sum_word++;
        if(num_box.find(num)!=num_box.end()){
            num_box[num]++;
        }else{
            num_box.insert({num,1});
        }
    }
    //cout<<num_box[1]<<"\n";
    if(sum_word == 0){
        cout<<"n/a\n";
    }else{
        int over_half;
        if(sum_word%2==0){
            over_half = sum_word/2;
        }else{
            over_half = (sum_word/2) + 1;
        }
        bool done = false;
        for(map<int, int>::iterator it = num_box.begin();it != num_box.end(); it++){
            if((sum_word%2==0&&it->second > over_half)||(sum_word%2!=0&&it->second>=over_half)){
                cout<<it->first<<"\n";
                done = true;  
                break;
            }
        }
        if(!done){
            cout<<"n/a\n";
        }
    }
    
    return 0;
}