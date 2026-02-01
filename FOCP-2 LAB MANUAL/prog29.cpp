// minimum temperature of the month
#include<iostream>
using namespace std;
int main(){
    float temp[30];
    cout<<"enter the temperature record of the month ";
    for(int i=0;i<30;i++){
        cin>>temp[i];
    }
    int min=temp[0];
    for(int i=0;i<30;i++){
        if(min>temp[i])
        min=temp[i];
    }
    cout<<"minimum temperature recorded in the month was "<<min<<"degree celsius";
    return 0;

}