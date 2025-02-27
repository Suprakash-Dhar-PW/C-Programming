#include<stdio.h>
void add(int,int);
int main(){
    int a = 10;
    int b = 20;
    add(a,b);
    return 0;
}

void add(int x, int y){
    int res = x + y;
    printf("%d",res); 
}