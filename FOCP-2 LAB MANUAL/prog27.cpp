//maximum price in an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of values in array ";
    cin>>n;
    int price[n];
    cout<<"enter the prices ";
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int max=price[0];
    for(int i=0;i<n;i++){
        if(max<price[i])
        max=price[i];
    }
    cout<<"maximum price in the array is "<<max;
    return 0;
}