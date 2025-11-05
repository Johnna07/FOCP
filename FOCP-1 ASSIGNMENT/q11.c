// even array and odd array
#include<stdio.h>
int main(){
    int num[13]={24,21,56,79,16,35,86,93,56,11,13,63,48};
    int even_array[13],odd_array[13];
    int i,j=0,k=0;
    for(i=0;i<13;i++){
        if(num[i]%2==0){
            even_array[j]=num[i];
            j++;
        } 
        else{
            odd_array[k]=num[i];
            k++;
        }
    } printf("even elements are");
    for(i=0;i<j;i++){
        printf("\n%d",even_array[i]);}
    printf("\nodd elements are");
    for(i=0;i<k;i++){
        printf("\n%d",odd_array[i]);}
    
    return 0;
    
}