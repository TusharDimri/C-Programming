#include<stdio.h>

int main(){
    
    // Using Switch Case Statement in C:-
    int ch;
    printf("Enter Your Choice\n");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            printf("You entered 1\n");
            break;
        case 0:
            printf("You Entered 0\n");
            break;
        default:
            printf("You entered neither 0 nor 1\n");
    }
    // We use break statement to take the control pu of switch block once the case matches and the task we wanted to perform is performed.If we don't use break statement, every case is executed.
    /*
    Rules for Switch Case Statements:-
    1. Expression given to switch statement can either be an integer or a character.
    2. Case value must be an integer or a character.
    3. Case must always be inside switch block. 
    4. break statement is not a must.
    5. default block is not a must.
    */


   int age = 18;
   switch (age)
   {
   case 18:
       printf("You are eligible for voting\n");
       break;       
   
   default:
       printf("You are not eligible for voting\n");
   }

    return 0;
}