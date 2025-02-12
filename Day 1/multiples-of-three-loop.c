#include<stdio.h>
int main(){
    int i,N;
    printf("Enter the ending number : \n");
    scanf("%d",&N);
    for(i=3;i<=N;i+=3){
        if(i%3==0){
            printf("%d ",i);
        }
    }
    return 0;
}