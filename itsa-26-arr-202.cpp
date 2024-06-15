//五行生剋
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string,string> generating = {{"Wood","Fire"},{"Fire","Earth"},{"Earth","Metal"},{"Metal","Water"},{"Water","Wood"}};
    map<string,string> overcoming = {{"Wood","Earth"},{"Earth","Water"},{"Water","Fire"},{"Fire","Metal"},{"Metal","Wood"}};
    int num;
    cin>>num;
    string element, mode;
    for(int i = 0; i < num; i++){
        cin>>element>>mode;
        if(mode == "Generating"){
            cout<<generating[element]<<"\n";
        }else{
            cout<<overcoming[element]<<"\n";
        }
    }
    return 0;
}