//英文字母Histogram arr-108
#include<iostream>
#include<cctype>
#include<cstring>
#include<istream>
using namespace std;

int main(){
    int show_time[26];
    memset(show_time,0,sizeof(show_time[0])*26);
    char c;
    cin.get(c);
    while(!isspace(c)&&!cin.eof()){
        show_time[((int)tolower(c))-'a']++;
        cin.get(c);
    }
    for(int i=0;i<26;i++){
        if(show_time[i]>0){
            cout<<((char)('a'+i))<<" "<<show_time[i]<<"\n";
        }
    }
    return 0;
}