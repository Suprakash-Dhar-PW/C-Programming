#include<stdio.h>
int main(){
    int age, weight;
    printf("Enter your age : \n");
    scanf("%d",&age);
    printf("Enter your weight : \n");
    scanf("%d",&weight);
    if(age>=18){
        if(weight>=50){
            printf("You are eligible to donate blood, Thank you!");
        }
        else{
            printf("Weight must be minimum 50kgs, you are underweight!");
        }
    }
    else{
        printf("Age must be above 18 years, you are underage!");
    }
    return 0;
}