#include<stdio.h>
int main(){
    int i,j;
    int n = 7;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            if((i>=j && i+j<=n-1) || (i<=j && i+j>=n-1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
    return 0;
}