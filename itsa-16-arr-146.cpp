//最大值與最小值 arr-146
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double num,min,max;
    cin>>min;
    max=min;
    for(int i=1;i<10;i++){
        cin>>num;
        if(num<min){
            min=num;
        }
        if(num>max){
            max=num;
        }
    }
    cout<<fixed<<setprecision(2)<<"maximum:"<<max<<"\n";
    cout<<fixed<<setprecision(2)<<"minimum:"<<min<<"\n";
    return 0;
}