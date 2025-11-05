// counting prime nos in an array
#include<stdio.h>
int main(){
    int num[10];
    int i,count,j,primecount=0;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    
    for(i=0;i<10;i++){
        count=0;
            if(num[i]<=1)
                continue;
            for(j=1;j<=num[i];j++){
                
            if(num[i]%j==0)
                count++;}
            
            if(count==2)
            primecount++;

        }

printf("\nno of prime nos in the array is %d",primecount);
return 0;}