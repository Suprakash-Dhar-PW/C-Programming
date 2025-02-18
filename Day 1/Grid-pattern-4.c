#include<stdio.h>
int main(){
    int i,j;
    int n = 7;
    for(i=0;i<=n-1;++i){
        for(j=0;j<=n-1;++j){
            if( i-j==n/2 || i+j==(n+(n/2))-1 || i ==n/2) {
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