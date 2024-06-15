//迴文
#include <iostream>
#include <string>
using namespace std;

int main(){
    string hue_wan;
    bool qualified = true;
    cin>>hue_wan;
    for(int i = 0;i!=hue_wan.length()-1-i;i++){
        if((hue_wan[i]<'1'||hue_wan[i]>'9')||hue_wan[i]!=hue_wan[hue_wan.length()-1-i]){
            qualified = false;
            break;
        }
    }
    if(qualified&&(hue_wan.length()%2==0 || hue_wan.length() >= 11)){
        qualified = false;
    }
    if(qualified){
        cout<<"TRUE\n";
    }else{
        cout<<"FALSE\n";
    }
    return 0;
}