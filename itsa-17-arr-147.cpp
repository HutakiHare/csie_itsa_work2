//高於平均溫度的天數
#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main(){
    map<string,int> month = {{"Jan",31},{"Feb",28},{"Mar",31},{"Apr",30},{"May",31},{"Jun",30},{"Jul",31},{"Aug",31},{"Sep",30},{"Oct",31},{"Nov",30},{"Dec",31}};
    string cur_month;
    cin>>cur_month;
    double temperature[month[cur_month]];
    double avg ,sum = 0;
    for(int i = 0; i < month[cur_month]; i++){
        cin>>temperature[i];
        sum+= temperature[i];
    }
    avg = sum / month[cur_month];
    int above_avg_num = 0;
    for(int j = 0; j < month[cur_month]; j++){
        if(temperature[j] > avg){
            above_avg_num++;
        }
    }
    cout<<"average temperature for "<<cur_month<<" is "<<fixed<<setprecision(2)<<avg<<"\n";
    cout<<above_avg_num<<" days above average\n";
    return 0;
}