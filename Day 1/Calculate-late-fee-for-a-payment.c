#include<stdio.h>
int main(){
    int amount, day, late_amount;
    printf("Enter the amount to pay : \n");
    scanf("%d",&amount);
    printf("Enter the number of day by which payment is delayed : \n");
    scanf("%d",&day);
    if(day>0){
        late_amount = 170 * day;
        amount = amount + late_amount;
        printf("Final amount to be paid : %d",amount);
    }
    return 0;
}