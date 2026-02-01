// bill generation
#include<iostream>
int main(){
    int itemno,qty;
    float uprice;
    float amount,damount,discount;
    std::cout<<"enter itemno ";
    std::cin>>itemno;
    std::cout<<"enter quantity ";
    std::cin>>qty;
    std::cout<<"enter uprice ";
    std::cin>>uprice;
    amount=qty*uprice;
    discount=0.20*amount;
    damount=amount-discount;
    std::cout<<"total amount before applying discount "<<amount;
    std::cout<<"\nfinal amount after applying discount "<<damount;
    return 0;



}