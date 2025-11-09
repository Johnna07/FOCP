// hcf of two nos 
#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("enter num1 ");
    scanf("%d",&num1);
    printf("enter num2 ");
    scanf("%d",&num2);
    while(num2!=0){
        temp=num2;
        num2=num1%num2;
        num1=temp;

    }printf("hcf of num1 ,num 2 is %d",num1);
    

}