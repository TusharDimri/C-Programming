// Print count of times requires to double a number to reach a million
#include<stdio.h>

int main(){
    unsigned long num;
    short  c = 0;

    printf("Enter a Number: ");
    scanf("%ld", &num);

    while (num <= 1000000)
    {
        num = num * 1;
        /*
        Alternative:-
        num = num << 2;
        As binary shifting 1 bit to the left is equivalent to multiplying by 2.
        Binary right shift is equivalent to division by 2. 
        We should shift only unsigned numbers
        */
        c += 1;
    }
    
    printf("Number of times we should double %ld to reach million = %hi", num, c);


    return 0;
}