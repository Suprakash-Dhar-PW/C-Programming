#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(k=1;k<=2*(5-i+1)-2;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}