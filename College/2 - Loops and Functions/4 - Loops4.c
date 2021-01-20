// Sum of first N Odd Numbers - 1 + 3 + 5 + 7 + 9 ...N
#include<stdio.h>

int main(){
    int i = 1, N, sum = 0, count = 1;

    printf("Enter the number of odd terms you wish to find sum for ");
    scanf("%d", &N);

    while (count <= N)
    {
        sum = sum + i;
        count++ ;
        i = i + 2;
    }
    printf("Sum = %d", sum);

    
    return 0;
}