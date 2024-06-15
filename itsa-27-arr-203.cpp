//九大行星
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<int,string> star = {{1,"Mercury"},{2,"Venus"},{3,"Earth"},{4,"Mars"},{5,"Juputer"},{6,"Saturn"},{7,"Uranus"},{8,"Neptunus"},{9,"Pluto"}};
    int num;
    cin>>num;
    int distance;
    for(int i = 0; i < num; i++){
        cin>>distance;
        cout<<distance<<" "<<star[distance]<<"\n";
    }
    return 0;
}