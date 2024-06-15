//十二星座
#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cin>>num;
    int date,month,day;
    for(int i = 0; i < num; i++){
        cin>>date;
        month = date/100;
        day = date % 100;
        if((3==month&&day>=21)||(month==4&&day<=19)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Aries\n";
        }else if((4==month&&day>=20)||(month==5&&day<=20)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Taurus\n";
        }else if((5==month&&day>=21)||(month==6&&day<=21)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Gemini\n";
        }else if((6==month&&day>=22)||(month==7&&day<=22)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Cancer\n";
        }else if((7==month&&day>=23)||(month==8&&day<=22)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Leo\n";
        }else if((8==month&&day>=23)||(month==9&&day<=22)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Virgo\n";
        }else if((9==month&&day>=23)||(month==10&&day<=23)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Libra\n";
        }else if((10==month&&day>=24)||(month==11&&day<=21)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Scorpio\n";
        }else if((11==month&&day>=22)||(month==12&&day<=20)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Sagittarius\n";
        }else if((12==month&&day>=21)||(month==1&&day<=20)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Capricorn\n";
        }else if((1==month&&day>=21)||(month==2&&day<=19)){
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Aquarius\n";
        }else{
            cout<<month;
            cout<<setfill('0')<<setw(2)<<day<<" Pisces\n";
        }
    }
    return 0;
}