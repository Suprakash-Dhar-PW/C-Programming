#include<stdio.h>
int main(){
    // Display the menu 
    printf("Choose an operation\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Remainder\n");

    int choice, num1, num2, res;

    printf("Enter the choice (1-4) : \n");
    scanf("%d",&choice);

    // Input the numbers 

    printf("Enter the 1st number : \n");
    scanf("%d",&num1);

    printf("Enter the 2nd number : \n");
    scanf("%d",&num2);

    int flag = 1;
     
    // Perform the selected operation

    if(choice==1){
        res = num1 + num2;
    }
    else if(choice==2){
        res = num1 - num2;
    }
    else if(choice==3){
        res = num1 * num2;
    }
    else if(choice==4){
       res = num1 / num2;
    }
    else if(choice==5){
        res = num1 % num2;
    }
    else{
        printf("Invalid choice. Please select a valid option !\n");
        flag = 0;
    }
    if(flag==1){
        printf("Result : %d",res);
    }
    return 0;
}