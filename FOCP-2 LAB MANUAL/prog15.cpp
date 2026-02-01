// maximum sales figure
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of salary entries ";
    cin>>n;
    int num1,num;
    cout<<"enter first salary entry ";
    cin>>num1;
    int max;
    max=num1;
    for(int i=2;i<=n;i++){
        cout<<"enter salary enter no "<<i<<":";
        cin>>num;
        if(num>max)
        max=num;

    }
    cout<<"largest of all salary entries is "<<max;
    return 0;
}