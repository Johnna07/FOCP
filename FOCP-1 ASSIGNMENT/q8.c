// FIBONACCI SERIES
#include<stdio.h>
int main()
{
    int f=0,s=1,t=0,i;
    printf("fibonacci series\n");
    for(i=1;i<=10;i++){
        t=f+s;
        printf("%d\n",t);
        f=s;
        s=t;
    }
    return 0;
}