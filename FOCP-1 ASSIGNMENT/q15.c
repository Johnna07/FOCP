// rotating the array clockwise
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the no of elements in the array");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }printf("array before rotation\n");
    for(i=0;i<n;i++){ // printing the original array
        printf("%d",num[i]);
    }
    int last;
    last=num[n-1];
    for(i=n-1;i>0;i--){
        num[i]=num[i-1];
    }
    num[0]=last;
    printf("\narray after rotation\n");
    for(i=0;i<n;i++){ // printing the final array after rotation
       printf("%d",num[i]);
    }
    



}