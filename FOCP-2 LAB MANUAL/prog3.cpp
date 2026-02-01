// farenheit to celsius and vice-versa
#include<iostream>
#include<iomanip>
int main(){

    int choice;
    float temp;
    float t;
    std::cout<<"1,celsius to farenheit";
    std::cout<<"\n2,farenheit to celsius";
    std::cout<<"\n3,exit";
    std::cout<<"\nenter user choice ";
    std::cin>>choice;
    if(choice==1){
        std::cout<<"enter temp in celsius ";
        std::cin>>temp;
        t=(9.0/5.0)*temp+32; 
        std::cout<<"celsius to farenheit is = "<<t;}
     else if(choice==2){
        std::cout<<"enter temp in farenheit ";
        std::cin>>temp;
        t=(temp-32.0)*(5.0/9.0);
        std::cout<<"farenheit to celsius is = "<<t;}
    else
    std::cout<<" EXIT";
        return 0;
    }
    