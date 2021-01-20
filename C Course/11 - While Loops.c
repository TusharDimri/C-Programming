#include<stdio.h>

int main(){
    /*
    Syntax of while loop:-
    while(condition){
        code to be executed
    }
    */

   // Example Code:-
   int i = 0; // Initialization 
   while (i< 10) // Condition
   {
       printf("%d\n", i+1);
       i = i + 1; // Increment
   }
   // Note:-
   // When the condition is false while loop does'nt execute because the condition is tested before we enter the loop and this is why do-while loop is called an entry controlled loop.

    return 0;
}