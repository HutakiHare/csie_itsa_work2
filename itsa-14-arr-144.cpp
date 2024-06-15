//關鍵任務 Mission Impossible arr-144
#include<iostream>
using namespace std;

int main(){
    int num,min,max,max_spot,sum=0;
    char c;
    cin>>min;
    cin.get(c);
    max=min;
    max_spot=0;
    sum+=min;
    for(int 關鍵任務 Mission Impossiblei=1;c!='\n'&&!cin.eof();i++){
        cin>>num;
        cin.get(c);
        if(num<min){
            min=num;
        }
        if(num>max){
            max=num;
            max_spot=i;
        }
        sum+=num;
    }
    cout<<min<<" "<<max_spot<<" "<<sum<<"\n";
    return 0;
}