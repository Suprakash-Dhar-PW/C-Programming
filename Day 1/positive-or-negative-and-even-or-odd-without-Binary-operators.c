#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : \n");
    scanf("%d",&num);
    if(num>=0){
        if(num%2==0){
        printf("The given number is positive and an even number");
        }
        else{
            printf("The given number is positive and an odd number ");
        }
    }
    else{
        if(num%2==0){
            printf("The given number is negavite and an even number");
        }
        else{
            printf("The given number is negative and an odd number");
        }
    }

    return 0;
}