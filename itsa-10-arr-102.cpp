//計算炸彈數 arr-102
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n,dir[16]={0,0,1,-1,1,1,-1,-1,1,-1,0,0,1,-1,1,-1};
    cin>>n;
    int arr1[n][n],arr2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
        memset(arr2[i],0,sizeof(arr2[0][0])*n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j]==1){
                if(j==n-1){
                    cout<<"0\n";
                }else{
                    cout<<"0 ";
                }
                continue;
            }
            for(int k=0;k<8;k++){
                if((i+dir[k])>=0&&(i+dir[k])<n&&(j+dir[k+8])<n&&(j+dir[k+8])>=0&&arr1[i+dir[k]][j+dir[k+8]]==1){
                    arr2[i][j]++;
                }
            }
            if(j==n-1){
                cout<<arr2[i][j]<<"\n";
            }else{
                cout<<arr2[i][j]<<" ";
            }
            continue;
        }
    }
    return 0;
}