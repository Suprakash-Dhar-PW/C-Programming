#include<stdio.h>
int main(){
    int a, b, c;
    a = 2;
    b = 1;
    c = (a+=3, b+=2, a+b);
    printf("%d",c);
    return 0;
}