// Famous Conjecture - All Numbers Converge to 1
/*
If a number is even, divide it by 2 else multiply iy by 3 and add 1 to it.
The number will covergo to 1
*/
#include<stdio.h>

int main(){
    unsigned long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    do
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else{
            n = n * 3 + 1;
        }
        printf("%ld ", n);    
    } while (n != 1);
    



    return 0;
}