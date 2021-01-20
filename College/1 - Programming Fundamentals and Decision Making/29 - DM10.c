// Guess age range within five years using nested if statements
#include<stdio.h>

int main(){
    short age;

    printf("Enter your age: ");
    scanf("%hi", &age);

    if (age >= 1 && age <= 20){
    
        if (age >= 1 && age <= 10)
        {

            if(age >= 1 && age <= 5){
                printf("Age is between 1 and 5 years\n");
            }

            else
            {
                printf("Age is between 6 and 10 years\n");
            }
        }
    
        else
        {
            
            if(age >= 11 && age <= 15){
                printf("Age is between 11 and 15 years\n");
            }

            else{
                printf("Age is between 16 and 20 years\n");
            }

        }

    }

    else{
        printf("Age is greater than 20 years\n");
    }


    return 0;
}