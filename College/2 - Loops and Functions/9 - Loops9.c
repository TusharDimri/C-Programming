// Print digits of a number from R to L
#include<stdio.h>

int main(){
    int n;
    int digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    /*
    Using while loop
    while (n > 0)
    {
        digit = n % 10;
        printf("%d ", digit);
        n = n / 10;
    
    }
    */

    // Using for loop
    for (; n > 0; n /= 10)
    {
        digit = n % 10;
        printf("%d ", digit);
    }
    
    



    return 0;
}