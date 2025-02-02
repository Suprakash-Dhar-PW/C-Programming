#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : \n");
    scanf("%d",&num);
    if(num>=0){
        printf("Positive Number");
    }
    else{
        printf("Negative Number");
    }
    return 0;
}