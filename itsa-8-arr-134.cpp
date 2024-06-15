//撲克牌排組檢查 arr-134
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    bool straight=true,pair1=false,pair2=false,triple=false,single=true;
    int hash[14],card[5];
    memset(hash,0,sizeof(hash[0])*14);
    for(int i=0;i<5;i++){
        cin>>card[i];
        hash[card[i]]++;
    }
    for(int j=1;j<=13;j++){
        //cout<<j<<" : "<<hash[j]<<"\n";
        if(hash[j]==4){
            cout<<"tiki\n";
            single=false;
            break;
        }else if(hash[j]==3){
            triple=true;
            single=false;
        }else if(hash[j]==2){
            if(!pair1){
                pair1=true;
                single=false;
                //cout<<j<<":1111\n";
            }else{
                pair2=true;
                single=false;
                //cout<<j<<":22222\n";
                cout<<"two pairs\n";
                break;
            }
        }else if(hash[j]==1&&straight){
            for(int k=0;k<4;k++){
                if(hash[j+k]!=1){
                    straight=false;
                    break;
                } 
            }
            if(straight){
                single=false;
                cout<<"straight\n";
                break;
            }  
        }
    }
    if(triple&&pair1){
        cout<<"full house\n";
    }else if(triple){
        cout<<"triple\n";
    }else if(pair1&&(!pair2)){
        cout<<"one pair\n";
    }
    if(single){
        cout<<"single\n";
    }
    return 0;
}