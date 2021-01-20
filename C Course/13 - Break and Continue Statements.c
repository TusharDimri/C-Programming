#include <stdio.h>

int main()
{
    /*
    Break Statement:-
    1. Used to bring the program control out of  the loop
    2. The break statement is used inside loops or switch statements.
    */
    int i;
    int age;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your age\n");
        scanf("%d", &age);
        if (age <= 18)
        {
            printf("You are underage\n");
            break; // Control comes out of the loop.
        }
        else
        {
            printf("%d\n", i);
        }
    }
    /*
    In case of nested switch statements of nested loops, the control moves out of the blbok that the statement i part of only.
    */

    /*
    Continue Statement:-
    1. Used to breing program to the next iteration of the loop.
    2. The continue statement skips some code inside the loop and continues with the next iteration.
    3. It is used for a condition so that we can skip some lines of code for a particular condition.
    */

    /*
    Suppose we want to print odd numbers from 1 to n then we can use continue statement as:-
    */

    int j, n;
    printf("Enter the nth term\n");
    scanf("%d", &n);
    for (j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            continue; // Brings the control to the next interation and ignores everthing inside the block after itself
        }
        printf("%d\n", j);
    }
    

    return 0;
}