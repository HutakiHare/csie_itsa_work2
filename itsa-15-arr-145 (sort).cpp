//What is the Median? arr-145
#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;

int main(){
    vector<double> vec;
    double num;
    char c;
    cin>>num;
    cin.get(c);
    vec.push_back(num);
    while(c!='\n'&&!cin.eof()){
        cin>>num;
        cin.get(c);
        vec.push_back(num);
    }
    double *arr=vec.data();
    sort(arr,arr+vec.size());
    for(int i=0;i<vec.size();i++){
        cout<<arr[i]<<(i==(vec.size()-1)?"\n":" ");
    }
    double cal=vec.size()%2==0? ((arr[(vec.size()-1)/2]+arr[((vec.size()-1)/2)+1])/2):arr[((vec.size()-1)/2)+1]/2;
    cout<<"Median:"<<fixed<<setprecision(2)<<cal<<"\n";
    return 0;
}