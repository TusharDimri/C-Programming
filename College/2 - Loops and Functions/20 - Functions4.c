// Perfect Numbers between Range R1 and R2.
//  A number is a perfect number if the sum of all its factors is equal to the numbers itself.
#include<stdio.h>

void perfect(int);

int main(){
    int r1, r2;

    printf("Enter range between which you want the perfect numbers\n");
    scanf("%d%d", &r1, &r2);


    for (; r1 <= r2; r1++)
    {
        perfect(r1);
    }
    
    return 0;
}


void perfect(int n){
    int fact_sum = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            fact_sum += i;
        }    
    }
    if (fact_sum == n)
    {
        printf("%d is a perfect number \n", n);
    }
    

    
}