#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(k=1;k<=i;++k){
            printf(" ");
        }
        for(j=1;j<=2*(5-i+1)-1;++j){
            if(i==5 || i==1 || j==1 || j==2*(5-i+1)-1){
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