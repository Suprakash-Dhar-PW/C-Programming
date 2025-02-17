#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        char elem = 64 + i;
        for(j=1;j<=5-i+1;++j){
            printf("%c",elem++);
        }
        printf("\n");
    }
    return 0;
}