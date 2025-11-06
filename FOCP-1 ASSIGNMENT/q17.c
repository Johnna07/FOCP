// deleting element at the front ,middle or end of any array
#include<stdio.h>
int main(){
    int n,choice,pos,element ;
    printf("enter no of elements in the array ");
    scanf("%d",&n);
    int i,arr[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
    printf("original array\n");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
        }
    
printf("\n1.Deleting  element at the front\n2.Deleting element at the middle\n3.Deleting element at the end\n");
printf("enter your choice ");
scanf("%d",&choice);
switch(choice){
    case 1 : 
    pos=0;break;
    case 2:
    pos=n/2;break;
    case 3:
    pos=n-1;break;
    default:
    printf("invalid choice");}
 for(i=pos;i<n-1;i++){
    arr[i]=arr[i+1];
 }
 n--;
 printf("array after deletion\n");
 for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
        }
}
