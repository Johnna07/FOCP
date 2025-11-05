// first occurence of 99 in array
#include<stdio.h>
int main(){
    int score[10]={12,45,14,76,99,18,34,90,97,15};
    int i;
    for(i=0;i<=10;i++){
        if(score[i]==99){
            printf("first occurence of 99 score is at %d index",i);
            break;
        }
    } return 0;
}