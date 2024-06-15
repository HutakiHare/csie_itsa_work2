//遞迴數列 arr-120
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    long long int sum=0;
    vector<long long int> it;
    it.push_back(1);
    if(num>=1){
        for(int i=1;i<=num;i++){
            sum=0;
            for(int j=0;j<i/2;j++){
                sum+=((it.at(j))*(it.at(i-j-1))*2);
            }
            if(i%2!=0){
                sum+=((it.at((i-1)/2))*it.at((i-1)/2));
            }
            it.push_back(sum);
        }
    }
    cout<<"f("<<num<<")="<<it.at(num)<<"\n";
    return 0;
}