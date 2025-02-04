// Check if the year is divisible by 400:

// If YES → Leap year (overrides other rules).

// If NO → Proceed to the next check.

// Example:

// 2000 is divisible by 400 → Leap year.

// 1900 is not divisible by 400 → Move to next check.

// Check if the year is divisible by 100:

// If YES → Not a leap year (even if divisible by 4).

// If NO → Proceed to the next check.

// Example:

// 1900 is divisible by 100 → Not a leap year.

// 2024 is not divisible by 100 → Move to next check.

// Check if the year is divisible by 4:
// If YES → Leap year.
// If NO → Not a leap year.

// Example:
// 2024 is divisible by 4 → Leap year.
// 2023 is not → Not a leap year.

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year : \n");
    scanf("%d",&year);
    if(year%400==0){
        printf("Year is a leap year");
    }
    else if(year%100==0){
        printf("Not a leap year");
    }
    else if(year%4==0){
        printf("year is a leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}