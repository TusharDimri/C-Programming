// Sum of series :  1 - 1/3 + 1/5 - 1/7 .... +- 1/N
#include<stdio.h>

float printSeries(int n)
{
    float sum = 0.0f;
    
    // Teacher's Logic:-
    int sign = 1;

    for (int i = 1; i <= n; i+= 2)
    {
       sum = sum + 1.0/i * sign;
       sign *= -1;
    }
   
    /*
    My Logic:

    int c = 0;

    for (int i = 1; i <= n;  i+=2)
    {
        if (c == 0)
        {
            sum = sum + (1.0 / i);
            c = 1;
        }
        else
        {
            sum = sum - (1.0 / i);
            c = 0;
        }
        
    }
    */

    return sum;
    
}

int main(){
    int N;

    printf("Enter the last term of the series: ");
    scanf("%d", &N);

    if (N % 2 != 0)
    {
        printf("Sum of the series = %0.2f \n", printSeries(N));
    }
    else
    {
        printf("You cannot enter an even number \n");
    }
    
       

    return 0;
}