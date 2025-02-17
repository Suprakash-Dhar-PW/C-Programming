#include<stdio.h>
int main(){
    int num1 = 0;
    int num2 = 1;
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d ",num1);
           int temp = num1 +num2;
           num1 = num2;
           num2 = temp;
        }
        printf("\n");
    }
    return 0;
}