#include<stdio.h>
int main(){
    int i;
    for(i=50;i>=1;i--){
        if(i%2==1 || i%2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}