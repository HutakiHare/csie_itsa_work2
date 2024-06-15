//猜數字之提示
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i = 0; i < num; i++){
        int num_box_A[10],num_box_B[10];
        memset(num_box_A,0,sizeof(int)*10);
        memset(num_box_B,0,sizeof(int)*10);
        int count_A = 0, count_B = 0;
        string str1,str2;
        cin>>str1>>str2;
        for(int j = 0; j < 4; j++){
            if(str1[j]==str2[j]){
                count_A++;
            }
            num_box_A[((int)str1[j]-'0')]++;
            num_box_B[((int)str2[j]-'0')]++;
        }
        for(int k = 0; k < 10; k++){
            if(num_box_A[k]>0&&num_box_B[k]>0){
                count_B++;
            }
        }
        cout<<count_A<<"A"<<(count_B-count_A)<<"B\n";
    }
    return 0;
}