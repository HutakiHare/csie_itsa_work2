//貨車司機 arr-109
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<double> weight,value,stack_w,stack_v;
    int num;
    double w,v,total_w=0,total_v=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>v>>w;
        stack_w.push_back(w);
        stack_v.push_back(v);
    }
    for(int i=0;i<num;i++){
        w=stack_w.at(stack_w.size()-1);
        v=stack_v.at(stack_v.size()-1);
        stack_w.pop_back();
        stack_v.pop_back();
        if((total_w+w)<=20.0){
            weight.push_back(w);
            value.push_back(v);
            total_w+=w;
            total_v+=v;
        }else{
            if((total_w-weight.at(weight.size()-1)+w)<=20.0){
                if((value.at(value.size()-1)/weight.at(weight.size()-1))<(v/w)){
                    total_w-=weight.at(weight.size()-1);
                    total_v-=value.at(value.size()-1);
                    weight.pop_back();
                    value.pop_back();
                    weight.push_back(w);
                    value.push_back(v);
                    total_w+=w;
                    total_v+=v;
                }
            }
        }
    }
    //cout.precision(0);
    cout<<total_v<<" "<<total_w<<"\n";
    return 0;
}