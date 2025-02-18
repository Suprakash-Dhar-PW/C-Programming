#include<stdio.h>
int main(){
    int i,k,j;
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i+1;++k){
            printf(" ");
        }
        for(j=1;j<=2*i-1;++j){
            if(i==1 || j==1 || j==2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=2;i<=5;i++){
        for(k=1;k<=i;++k){
            printf(" ");
        }
        for(j=1;j<=2*(5-i+1)-1;++j){
            if(i==1 || j==1 || j==2*(5-i+1)-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}