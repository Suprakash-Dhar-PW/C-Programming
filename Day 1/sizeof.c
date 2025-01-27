#include<stdio.h>
int main(){
    short a = 12;
    int b = 24;
    float c  = 45.5;
    double d = 75.5;
    double res = a + b + c + d;
    printf("%lu",sizeof(a + b + c + d));
    // printf("%f",res);
    return 0;
}