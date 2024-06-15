//三階行列式運算 arr-107
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    int num;
    for(int i=0;i<9;i++){
        cin>>num;
        arr.push_back(num);
    }
    cout<<((arr.at(0)*arr.at(4)*arr.at(8)+arr.at(1)*arr.at(5)*arr.at(6)+arr.at(3)*arr.at(7)*arr.at(2))-(arr.at(2)*arr.at(4)*arr.at(6)+arr.at(1)*arr.at(3)*arr.at(8)+arr.at(0)*arr.at(7)*arr.at(5)))<<"\n"; //外積
    return 0;
}