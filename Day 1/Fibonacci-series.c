#include<stdio.h>
int main(){
        int i,temp;
        int num1 = 0;
        int num2 = 1;
       for(i=1;i<=7;i++){
            printf("%d ",num1);
            temp = num1+num2;
            num1 = num2;
            num2 = temp;
        }
        
    return 0;
}