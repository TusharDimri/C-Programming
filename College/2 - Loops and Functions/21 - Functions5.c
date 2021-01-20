// Check a number for Palindrome using functions
// A Palindrome number is a number whose reverse is equal to the number itself. For Example - 121, 123321, etc.
#include<stdio.h>

void checkPalindrome(int);

int main(){
    int num;

    printf("Enter the number that you want to check for Palindrome: ");
    scanf("%d", &num);
 
    checkPalindrome(num);

    return 0;
}


void checkPalindrome(int num){
    int temp = num;
    int num2 = 0, digit;

    while (temp > 0)
    {
        digit = temp % 10;
        num2 = num2 * 10 + digit;
        temp /= 10;
    }

    if (num2 == num)
    {
        printf("%d is a Palindrome number \n", num);
    }
    else
    {
        printf("%d is not a Palindrome number \n", num);
    }
    
    
    
}