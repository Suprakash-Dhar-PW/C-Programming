#include<stdio.h>
int main(){
    int i,j,x;
    for(i=1;i<=5;i++){
        x = 5;
        for(j=1;j<=5-i+1;++j){
            printf("%d",x--);
        }
        printf("\n");
    }
    return 0;
}