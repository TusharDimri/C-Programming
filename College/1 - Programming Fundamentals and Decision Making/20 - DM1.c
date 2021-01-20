// Demonstation of simple if statement:-
#include<stdio.h>

int main(){
    int num;
    printf("Guess the lucky number: ");
    scanf("%d", &num);
    if (num == 100)
    {
        printf("Congratulations, your guess is correct!\n");
        printf("Goodbye\n");
    }
    
    return 0;
}