#include<stdio.h>
int main(){
    int x, y;
    x = (y=10, y*2);
    printf("%d",x);
    return 0;
}