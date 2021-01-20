//  Given 2 numbers, divide the larger one by the smaller one and take care of error conditions.
#include<stdio.h>

int main(){
    int n1, n2;
    float div;

    printf("Enter 2 Numbers\n");
    scanf("%d%d", &n1, &n2);
    
    if (n1 == 0 && n2 == 0)
    {
        printf("Indeterminent Form\n");
    }

    else if (n1 > n2){
        if (n2 != 0)
        {
            div = (float) n1 / n2;
            printf("Divisor = %0.3f\n", div);
        }
        else
        {
            printf("0 Division Error\n");
        }
    }

    else if(n1 < n2){
        if (n1 != 0)
        {
            div = (float) n2 / n1;
            printf("Divisor = %0.3f\n", div);
        }
        else
        {
            printf("O Division Error\n");
        }
    }

    else if(n1 == n2)
    {
        div = (float) n1 / n2;
        printf("Divisor = %0.3f\n", div);

    }
    
    

    return 0;
}