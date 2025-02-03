#include<stdio.h>
int main(){
    int a = 2, b = 1;
    // a +=3;
    // b +=2;
    // c = a + b;
    int c = (a +=3, b +=2, a + b);
    printf("%d",c);
    return 0;
}