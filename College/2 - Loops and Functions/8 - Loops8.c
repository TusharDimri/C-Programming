// Sum of given series until the term is greater than 0.001
// S = 1 + (1/3) + (1/5) + (1/7) + (1/9) + ... (1/N) 
#include<stdio.h>

int main(){
    int i = 1;
    float sum = 0.0;
    float term = 1.0;

    while (term > 0.001)
    {
        sum = sum + term;
        i += 2;
        term = 1.0 / i;    
    }

    printf("Sum = %0.3f", sum);
    

    return 0;
}