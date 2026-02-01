// compute total expense and apply discount
#include<iostream>
using namespace std;
int main(){
    int items,price,amount,damount;
    float discount ;
    cout<<"enter no of items ";
    cin>>items;
    cout<<"enter price of item ";
    cin>>price;
    amount=items*price;
    discount=0.1*amount;
    cout<<"total amount is "<<amount;
    if(items>1000){
        damount=amount-discount;
        cout<<"\ntotal expense with discount "<<damount;
    }
    else
    cout<<"total expense without discount "<<amount;
    return 0;

}