//地雷危險指數表 arr-119
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int dir[16]={0,0,1,-1,1,1,-1,-1,1,-1,0,0,1,-1,1,-1};
    char arr1[9][9];
    int arr2[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr1[i][j];
        }
        memset(arr2[i],0,sizeof(arr2[0][0])*9);
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(arr1[i][j]=='#'){
                if(j==8){
                    cout<<"9\n";
                }else{
                    cout<<"9";
                }
                continue;
            }
            for(int k=0;k<8;k++){
                if((i+dir[k])>=0&&(i+dir[k])<9&&(j+dir[k+8])<9&&(j+dir[k+8])>=0&&arr1[i+dir[k]][j+dir[k+8]]=='#'){
                    arr2[i][j]++;
                }
            }
            if(j==8){
                cout<<arr2[i][j]<<"\n";
            }else{
                cout<<arr2[i][j];
            }
            continue;
        }
    }
    return 0;
}