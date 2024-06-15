//用弓字的方式列印陣列
#include<iostream>
using namespace std;

int main(){
    int col,row;
    cin>>row>>col;
    int matrix[row][col],arr[row*col];
    for(int i = 0;i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>matrix[i][j];
        }
    }
    int count=0;
    for(int i = 0; i < row; i++){
        for(int j = (i%2==0? 0 : col-1); (i%2==0? (j<col):(j>=0)); (i%2==0? (j++):(j--))){
            arr[count] = matrix[i][j];
            count++;
        }
    }
    for(int k = 0; k < row*col; k++){
        if(k!=row*col-1){
            cout<<arr[k]<<" ";
        }else{
            cout<<arr[k]<<"\n";
        }
    }
    return 0;
}