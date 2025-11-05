// how many students scored 99 marks
#include<stdio.h>
int main(){
    int marks[10]={12,45,14,76,99,18,34,90,97,99};
    int i,count=0;
    for(i=0;i<=10;i++){
        if(marks[i]==99){
           count++;
    }}
    printf("number of students who scored 99 are %d ",count);
    return 0;
}
