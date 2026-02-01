// prime no
#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"enter a number ";
cin>>n;
for(int i=2;i<=n;i++){
    if(n%i==0)
    break;
}
if(i<=n/2)
cout<<"number is not prime";
else
cout<<"number is prime";
return 0;
}

