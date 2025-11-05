// ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int main(){
    int num,onum,cnum=0,i=0,r;
    printf("enter a number: ");
    scanf("%d",&num);
    onum=num;
    // finding power=no of digits
    while(onum!=0){
        onum=onum/10;
        i=i+1;
     }
     onum=num;
   // armstrong calculation
   while(onum!=0){
        r=onum%10;
        cnum=cnum+pow(r,i);
        onum=onum/10;
      }
    
    // Check if Armstrong
    if (cnum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

    
