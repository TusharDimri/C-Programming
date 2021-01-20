#include<stdio.h>
# define UNIT_COST 7 // Cost per unit is Rupees 7

int main(){
    // Simple Electric Bill
    int units;
    int bill;
    
    printf("Enter the number of units consumed\n");
    scanf("%d", &units);
    
    bill = UNIT_COST * units; 

    printf("Your Bill = Rupees %d\n", bill);
     
    return 0;
}