// Using if - else statments to check whether a number is ODD or EVEN
#include<stdio.h>

int main(){
    int num;

    printf("Enter a Number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an EVEN number\n", num);
    }
    else
    {
        printf("%d is a ODD number\n", num);
    }
    
    return 0;
}