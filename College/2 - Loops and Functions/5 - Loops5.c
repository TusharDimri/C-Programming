//  Sum of the Series - 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... 1/N
#include<stdio.h>

int main(){
    int i, N;
    float sum = 0.0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        sum = sum + (1.0/i);
    }

    printf("Sum = %0.2f", sum);
    
     
    return 0;
}