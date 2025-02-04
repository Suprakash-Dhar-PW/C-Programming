#include<stdio.h>
int main(){
    float num;
    printf("Enter the number : ");
    scanf("%f",&num);
    if(num>=40.0){
        printf("Student Passed");
    }
    else if((0.0f<=num)&&(num<40.0)){
        printf("Student Failed");
    }
    else{
        printf("Error");
    }
    return 0;
}