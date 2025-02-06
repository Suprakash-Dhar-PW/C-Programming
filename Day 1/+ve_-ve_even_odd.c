#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : \n");
    scanf("%d",&num);
    if (num&1){
        if(num>=0){
            printf("Odd and Positive");
        }
        else{
            printf("Odd and Negitive");
        }
    }
    else{
        if(num>=0){
            printf("Even and Positive");
        }
        else{
            printf("Even and Negative");
        }
    }
    return 0;
}
        