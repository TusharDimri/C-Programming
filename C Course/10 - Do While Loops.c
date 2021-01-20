#include <stdio.h>

int main()
{
    /*
    Syntax of Do While Loop:-
    do{
        code to be executed
    }while(condition is true)
    */

    // Example Code:-
    int i = 0; // Initialization
    do
    {
        i += 1; // Increment
        printf("%d\n", i);
    } while (i < 10); // Condition

    // Note:-
    // When the condition is false do while loop executes at once because the condition is tested after we execute the do block. This is why do-while loop is called an entry controlled loop.

    return 0;
}