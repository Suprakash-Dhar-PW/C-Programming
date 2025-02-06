#include<stdio.h>
int main(){
    int num;
    printf("Enter a value of num : \n");
    scanf("%d",&num);
    if(num>0){
        printf("Number is positive");
    }
    else if(num<0){
        printf("Number is negative");
    }
    else if(num == 0){
        printf("Number is zero");
    }
    return 0;
}