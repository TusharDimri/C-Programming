// Sum of Natural Numbers from 1 to N using for loop
#include<stdio.h>

int main(){
    int i, N, sum = 0;
    
    printf("Enter the value of the Last Term ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);    

    return 0;
}