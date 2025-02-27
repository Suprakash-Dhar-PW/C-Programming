#include<stdio.h>
int add(int,int);
int main(){
    int a = 10;
    int b = 20;
    int sum = add(a,b);
    printf("%d",sum); 
    return 0;
}

int add(int x, int y){
    int res = x + y;
    return res;
}