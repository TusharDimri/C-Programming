// Guess the number till you get it right
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    short num;
    float per;

    while (true)
    {
        printf("Guess a Number between 1 and 15: ");
        scanf("%hi", &num);

        if (num == 13)
        {
            break;
        }

        per = (num - 13.0)/100.0 ;
        per = fabs(per);

        printf("You Guess is wrong\n");
        printf("You are %.3f percent close to the number\n", per );
        
    }

    printf("Congratulations, your guess is right!\n");
    

    return 0;
}