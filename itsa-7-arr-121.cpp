//吃麵包 arr-121
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int bread_num,data,tmp,Q,R;
    vector<int> bread_f;
    cin>>bread_num>>data;
    for(int i=0;i<bread_num;i++){
        cin>>tmp;
        bread_f.push_back(tmp);
    }
    for(int j=0;j<data;j++){
        cin>>Q>>R;
        int full=0;
        for(int k=Q-1;k<R;k++){
            full+=bread_f.at(k);
        }
        cout<<full<<"\n";
    }
    return 0;
}