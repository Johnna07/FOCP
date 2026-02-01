// armstrong no
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,onum,rnum=0,i=0,r;
    cout<<"enter a number ";
    cin>>num;
    onum=num;
    //power calculation
    while(onum!=0){
        onum=onum/10;
        i=i+1;
    }
    onum=num;
    //armstrog calculation
    while(onum!=0){
        r=onum%10;
        rnum=rnum+(int)pow(r,i);
        onum=onum/10;
    }
    //check if armstrong
    if(rnum==num)
    cout<<"it is an armstrong no";
    else
    cout<<"not a armstrong no";
    return 0;

}