//列出介於(含)兩個自然數間的所有質數
#include <iostream>
#include <set>
using namespace std;

int main(){
    int num,strt,end;
    set<int> list;
    cin>>num;
    for(int i = 0;i < num; i++){
        cin>>strt>>end;
        for(int j = strt; j <= end; j++){
            for(int k=2; k < j; k++){
                if(j%k==0){
                    break;
                }else if( k == j-1 ){
                    list.insert(j);
                    break;
                }
            }
        }
        if(!list.empty()){
            for(set<int>::iterator it = list.begin(); it != list.end(); it++){
                if((++it)!=list.end()){
                    --it;
                    cout<<*it<<",";
                }else{
                    --it;
                    cout<<*it<<"\n";
                }
            }
        }else{
            cout<<"none\n";
        }
        list.clear();
    }

    return 0;
}