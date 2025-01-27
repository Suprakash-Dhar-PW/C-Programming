#include<stdio.h>
int main(){
    int numerator, denominator, quotient, remainder;
    printf("Enter the numerator : ");
    scanf("%d", &numerator);
    printf("Enter the denominator : ");
    scanf("%d", &denominator);
    quotient = numerator / denominator;
    printf("The Quotient is : %d ", quotient);
    remainder  = numerator % denominator;
    printf("The remainder is : %d ", remainder);
    return 0;
}