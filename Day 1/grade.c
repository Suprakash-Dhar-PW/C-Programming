//Order of codition's matter <IMPORTANT>
#include<stdio.h>
int main(){
    int score;
    char grade;
    printf("Enter your grade : \n");
    scanf("%d",&score);
    if(score>=90){
        grade = 'A';
    }
    else if(score>=80){
        grade = 'B';
    }
    else if(score>=70){
        grade = 'C';
    }
    else if(score>=60){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
    printf("Your grade is %c",grade);
    return 0;
}