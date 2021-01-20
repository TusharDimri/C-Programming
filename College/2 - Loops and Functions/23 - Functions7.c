/*
Prime  numbers in a range.
A prime number is a natural number greater than 1 ths thas exactly 2 distinct natural number divisors : 1 and the number itself.
*/
#include<stdio.h>
#include<math.h>

int checkPrime(int);

int main(){
    int r1, r2;

    printf("Enter the range between which you want the prime numbers \n");
    scanf("%d%d", &r1, &r2);

    for (; r1 <= r2; r1++)
    {
        checkPrime(r1);
    }

    return 0;
}

int checkPrime(int num){
    int div = 2;
    while (div <= sqrt(num))
    {
        if(num % div == 0){
            return -1;
        }
        if(div > 2){
            div += 2;
        }
        else
        {
            div++;
        }
    }
    if (num > 1)
    {
        printf("%d ", num);
    }

    return 0;
    
    
    
    
}