//各位數和排序-arr104
#include<iostream>
#include<vector>
#define INT_MAX 1000000
using namespace std;

int add_up(int arr){
    int sum=0;
    while(arr>0){
        sum+=(arr%10);
        arr/=10;
    }
    return sum;
}

int main(){
    int num;
    cin>>num;
    int arr[num],sum[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
        sum[i]=add_up(arr[i]);
    }
    for(int i=0;i<num;i++){
        int min=INT_MAX;
        for(int j=i;j<num;j++){
            if((sum[j]<min)||((j!=i)&&(sum[j]==min)&&(arr[j]<arr[i]))){ //digit aum same see whole
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
                min=sum[j];
                sum[j]=sum[i];
                sum[i]=min;
            }
        }
        cout<<arr[i]<<(i==(num-1)? "\n":" ");
    }
    return 0;
}