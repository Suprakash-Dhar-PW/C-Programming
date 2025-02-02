#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the first number : \n");
    scanf("%d",&num1);
    printf("Enter the second number : \n");
    scanf("%d",&num2);
    if(num1>num2){
        printf("First number : %d is greater than the second number : %d",num1,num2);
    }
    else{
        printf("Second number : %d is greater than the first number : %d",num2,num1);
    }
    return 0;
}