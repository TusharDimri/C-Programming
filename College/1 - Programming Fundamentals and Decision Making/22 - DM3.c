// Using Conditional statements to check whether a number is +ve, -ve or 0.
#include<stdio.h>

int main(){
    float num;
    
    printf("Enter a number: ");
    scanf("%f", &num);

    if(num > 0){
        printf("%.2f is a positive number\n", num);
    }
    else if(num < 0){
        printf("%.2f is a negative number\n", num);
    }
    else
    {
        printf("Number = 0");
    }
    

    return 0;
}