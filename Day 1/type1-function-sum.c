#include<stdio.h>
void add();
int main(){
    add();
    return 0;
}

void add(){
    int a = 10;
    int b = 20;
    int res = a + b;
    printf("%d",res);
}