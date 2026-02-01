// area of circular fountain
#include<iostream>
#include<iomanip>

int main(){
     float radius;
     float area;
     float pi=3.14;
     std::cout<<"enter radius of circular fountain ";
     std::cin>>radius;
     area=pi*radius*radius;
     std::cout<<"area of circular fountain "<<std::setw(5)<<std::setfill('*')<<area;
     return 0;
}