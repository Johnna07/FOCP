// maximum and minimum score in an array
#include<stdio.h>
int main(){
    int num[13]={24,21,56,79,16,35,86,93,56,11,13,63,48};
    int min,max,i;
    max=24;
    for(i=0;i<13;i++){
        if(num[i]>max){
            max=num[i];
        }}
    min=24;
     for(i=0;i<13;i++){
        if(num[i]<min){
            min=num[i];
        }

    }
    printf("maximum no in the array is %d",max);
    printf("\nminimum no in the array is %d",min);
return 0;}
    