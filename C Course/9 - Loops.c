#include<stdio.h>

int main()
{
    // Loops are basically used to do repetitive tasks and to prevent repeating statement.Loops are used for many other things.

    // Advantages of using loops:-
    // 1. Code Reusability.
    // 2. Saves Time
    // 3. Traversing.
    
    // Basic Syntax of a loop:-
    /*
    index = 0;
    loop start
        printf(index);
        index increment;
    loop end (until given condition is satisfied, the loop does not stop)
    */

   // Basic Use of loops(for loop) :- 
   for (size_t i = 0; i < 10; i++)
   {
       printf("%d\n", i+1);
   }

    /*
    Understanding the syntax of a loop:-
    loop starts => check the condition(exits the loop if condition is false) => execute loop(until the condition remains true) and increase the loop variable.
    */

    // Types of loops in C:-    
    // 1. for loop
    // 2. while loop
    // 3. do-while loop
   
    
    return 0;
}
