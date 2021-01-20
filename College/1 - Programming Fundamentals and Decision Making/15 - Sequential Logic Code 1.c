// WAP to enter the average of three integer values with result accurate to 2 decimal places
#include<stdio.h>

int main(){
    int a , b, c;
    float average;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    average = (a + b + c) / 3.0; // Implicit Type Conversion used 

    printf("Average = %0.2f", average);

    return 0;
}