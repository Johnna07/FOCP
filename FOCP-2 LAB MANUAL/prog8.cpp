//buzzfuzz
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number ";
    cin>>num;
    if(num%3==0){
        if(num%5==0)
        cout<<"buzzfuzz";
        else
        cout<<"buzz";
    }
    else if(num%5==0)
    cout<<"fuzz";
    else
    cout<<"not divisible by 3 or 5 or both";
    return 0;

}