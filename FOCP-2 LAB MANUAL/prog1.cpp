//average marks of three students 
#include<iostream>
#include<iomanip>
int main(){
    int m1,m2,m3;
    float average;
    std::cout<<"enter marks of first student ";
    std::cin>>m1;
    std::cout<<"enter marks of second  student ";
    std::cin>>m2;
    std::cout<<"enter marks of third  student ";
    std::cin>>m3;
    average=(m1+m2+m3)/3.0;
    std::cout<<"average marks of three students "<<std::setw(20)<<average;
    return 0;
    }