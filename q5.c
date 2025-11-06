// xy coordinates in different quadrants
#include<stdio.h>
int main(){
    int x,y;
    printf("enter x coordinate value ");
    scanf("%d",&x);
    printf("enter y coordinate value ");
    scanf("%d",&y);
    if(x>0&&y>0){
        printf("x and y points lie in the first quadrant ");
    }
    else if(x>0&&y<0){
        printf("x and y points lie in the second quadrant ");
    }
     else if(x<0&&y<0){
        printf("x and y points lie in the third quadrant ");
    }
    else{
        printf("x and y points lie in the fourth quadrant ");
    }
return 0;

    
    
}