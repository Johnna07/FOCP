// swapping two nos using various techniques
#include<iostream>
int main(){
    int a,b;
    std::cout<<"enter a value ";
    std::cin>>a;
    std::cout<<"enter b value ";
    std::cin>>b;
    // using temp variable
    int t;
    t=a;
    a=b;
    b=t;
    std::cout<<"value of a after swapping "<<a;
    std::cout<<"\nvalue of b after swapping "<<b;

    // without using temp variable 
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout<<"value of a after swapping "<<a;
    std::cout<<"\nvalue of b after swapping "<<b;

    // using multiplication and division;
    if(a==0||b==0){
        std::cout<<"invalid choice";
    }
    else {
        a=a*b;
        b=a/b;
        a=a/b;
        std::cout<<"value of a after swapping "<<a;
        std::cout<<"\nvalue of b after swapping "<<b;
    }

    // using XOR operator
    a=a^b;
    b=a^b;
    a=a^b;
    std::cout<<"value of a after swapping "<<a;
    std::cout<<"\nvalue of b after swapping "<<b;
    return 0;

    
}