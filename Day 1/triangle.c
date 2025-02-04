// Triangle Type Checker
// Check if three sides form a valid triangle. If yes, determine if it’s equilateral, isosceles, or scalene.

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the first side : ");
    scanf("%d",&a);
    printf("Enter the second side : ");
    scanf("%d",&b);
    printf("Enter the third side : ");
    scanf("%d",&c);
    if((a==b)&&(b==c)&&(a==c)){
        printf("Equalatoral Triangle");
    }
    else if((a==b)&&(b!=c)&&(a!=c)){
        printf("Isoceles Triangle");
    }
    else if((a!=b)&&(b!=c)&&(a==c)){
        printf("Isoceles Triangle");
    }
    else if((a!=b)&&(b!=c)&&(a!=c)){
        printf("Scalene Triangle");
    }
    else{
        printf("Error");
    }
    return 0;
}