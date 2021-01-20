#include <stdio.h>

int main()
{
    // Withdraw x wheere x is a multiple of 5.
    // For each withdrawal - 0.50 US $  is charged
    // After an attempted tracsaction calculate account balance.
    //  +ve input 0 < x < = 2000 - the amount that user wants to withdraw
    // +ve number 0 < y <= 2000

    int x;
    float y;
    float amount;

    printf("Enter your bank balance(in US $)\n");
    scanf("%f", &y);

    printf("Enter the amount that you want to withdraw(in $)\n");
    scanf("%d", &x);

    printf("Withdraw = $ %d and Balance = $ %0.2f\n", x , y);
 
    if (( x > 0 && x <= 2000) && (y > 0.00 && y <= 2000.00))
    {
        if (x % 5 == 0 && x < (y - 0.5))
        {
            amount = y - (x + 0.5);
            printf("Successful Transaction \nBank Balance = %0.2f $\n", amount);
        }
        else if (x > (y - 0.5))
        {
            printf("Insufficient Funds = %0.2f $\n", y);
        }

        else
        {
            printf("Incorrect Withdrawal Amount\n");
        }
    }
    else{
        printf("Wrong Input (Greater than Expected Value)");
    }



    // if ((x % 5 == 0) && (x < (y - 0.5)))
    // {
    //     amount = y - (x + 0.5);
    //     printf("Successful Transaction \nBank Balance = $%0.2f\n", amount);
    // }
    // else
    // {
    //     if (x > (y - 0.5))
    //     {
    //         printf("Insufficient Funds = $ %0.2f\n", y);
    //     }
    //     else
    //     {
    //         printf("Incorrect Withdrawal Amount\n");
    //     }
    // }

    return 0;
}