//黃金探測 arr-139
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int m,n,dir[16]={0,0,1,-1,1,1,-1,-1,1,-1,0,0,1,-1,1,-1};
    cin>>m>>n;
    int arr1[m][n],arr2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
        memset(arr2[i],0,sizeof(arr2[0][0])*n);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j]==1){
                if(j==n-1){
                    cout<<"9\n";
                }else{
                    cout<<"9 ";
                }
                continue;
            }
            for(int k=0;k<8;k++){
                if((i+dir[k])>=0&&(i+dir[k])<m&&(j+dir[k+8])<n&&(j+dir[k+8])>=0&&arr1[i+dir[k]][j+dir[k+8]]==1){
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