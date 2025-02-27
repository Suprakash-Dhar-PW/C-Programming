#include<stdio.h>
int add();
int main(){
int sum = add();
    printf("%d",sum);
    return 0;
}

int add(){
    int a = 10;
    int b = 20;
    int res = a + b;
    return res;
}