#include<stdio.h>
int main(){
    printf("Choose an operation\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Remainder\n");

    int choice, num1, num2;

    printf("Enter the choice : \n");
    scanf("%d",&choice);

    printf("Enter the 1st number : \n");
    scanf("%d",&num1);

    printf("Enter the 2nd number : \n");
    scanf("%d",&num2);

    if(choice==1){
        printf("The addition is %d",num1 + num2);
    }
    else if(choice==2){
        printf("The subtraction is %d", num1 - num2);
    }
    else if(choice==3){
        printf("The multiplication is %d", num1 * num2);
    }
    else if(choice==4){
        printf("The quotient is %d", num1 / num2);
    }
    else if(choice==5){
        printf("The remainder is %d", num1 % num2);
    }
    return 0;
}