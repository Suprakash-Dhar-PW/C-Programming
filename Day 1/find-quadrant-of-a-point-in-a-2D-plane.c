#include<stdio.h>
int main(){
    int x, y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>0){
        if(y>0){
            printf("First Quadrant");
        }
        else if(y<0){
             printf("Fourth Quadrant");
        }
        else{
             printf("Positive x axis");
        }
    }
    else if(x<0){
        if(y>0){
            printf("Second Quadrant");
        }
        else if(y<0){
             printf("Third Quadrant");
        }
        else{
             printf("Negative x axis");
        }
    }
    else{
        if(y>0){
            printf("Positive y axis");
        }
        else if(y<0){
            printf("Negative y axis");
        }
        else{
            printf("Origin");
        }
    }
    return 0;
}