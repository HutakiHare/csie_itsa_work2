//Online Game 選擇性別
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<char,string> gender = {{'E',"ByeBye"},{'M',"Male"},{'F',"Female"}};
    char c;
    cin>>c;
    if(c){
        cout<<gender[c]<<"\n";
    }
    return 0;
}