#include<stdio.h>
int main(){
    int num, rem;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while(num!=0){
        rem = num%10;
        printf("%d\n",rem);
        num = num/10;
    }
    return 0;
}
