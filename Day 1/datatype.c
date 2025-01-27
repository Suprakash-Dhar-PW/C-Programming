#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    
    printf("short: [%d, %d]\n", SHRT_MIN,SHRT_MAX);
    printf("int: [%d, %d]\n", INT_MIN,INT_MAX);
    printf("long int: [%ld, %ld]\n", LONG_MIN,LONG_MAX);

    return 0;
}