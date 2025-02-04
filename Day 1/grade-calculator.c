// Grade Calculator
// Assign a grade based on marks:

// A (≥90), B (≥80), C (≥70), D (≥60), F (<60).
#include<stdio.h>
int main(){
    int grade;
    printf("Enter the grade : \n");
    scanf("%d",&grade);

    if((grade>=90) && (grade<100)){
        printf("A grade");
    }
    else if((grade>=80) && (grade<90)){
        printf("B grade");
    }
    else if((grade>=70) && (grade<80)){
        printf("C grade");
    }
    else if((grade>=60) && (grade<70)){
        printf("D grade");
    }
    else if((grade<60) && (grade>0)){
        printf("F grade");
    }
    else{
        printf("Please enter valid grade");
    }
    return 0;
}