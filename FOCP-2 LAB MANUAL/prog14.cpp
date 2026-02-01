// menu driven program for arithmetic operations
#include<iostream>
using namespace std;
int main(){
    cout<<"1,addition\n2,subtraction\n3,mutilpication\n4,division\n5,exit";
    float num1,num2;
    cout<<"\nenter number 1 ";
    cin>>num1;
    cout<<"enter number 2 ";
    cin>>num2;
    int choice;
    cout<<"\nenter your choice ";
    cin>>choice;
    float ans;
    if(choice>=5){
        cout<<"invalid choice";}
        else if(choice==1){
            ans=num1+num2;
            cout<<"sum of two nos is "<<ans;}
        else if(choice==2){
            ans=num1-num2;
            cout<<"difference of two nos is "<<ans;}
        else if(choice==3){
            ans=num1*num2;
            cout<<"product of two nos is "<<ans;}
        else{
                ans=num1/num2;
                cout<<"quotient of two nos is "<<ans;}
     return 0;}
            