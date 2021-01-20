#include<stdio.h>

int main(){
    /*
    for loop is used for:-
    1. To iterate statements or a part of a program several times. 
    2. It is used to traverse data structures like arrays and linked lists.
    */

    /*
    Syntax of for loop:-
    for(expression1, expression 2, expression3){
        code to be executed
    }
    */

    // Example Code:-
    int i;
    for (i = 0; i < 10; i++) 
    {
        printf("%d\n", i+1);
    }
    /*
    Expression 1 => i = 0 => initialization
    Expression 2 => i < 10 => Condition
    Expression 3 => i++ => Increment


    Expression 1:-
    1. The expression represents the initialization of loop variable.
    2. We can initialize more than one varible in Expression 1.
    3. Expression 1 is optional.
    */
    int j;
    for (i = 0, j = 13; i < 10; i++)
    {
        printf("%d %d\n", i ,j);
    }
    int l = 0;
    for (;l < 10; l++)
    {
        printf("%d \n", l + 1);
    }

    
    /*
    Expression 2:-
    1. It is a conditional Expression. It checks for a specific condition to be satisfied. If it is not, the loop is terminated
    2. It can have more tham one condition. However, the loop will iterate until the last condition becomes false. Other conditions will be treated as statements. 
    3. It is Optional
    4. Expression 2 can perform the task of expression 1 and expression 3.That is, we can initialize the varible as well as update the loop variable in expression 2 itself.
    4. We can pass zero on non zero value in expression 2. However, in C, any non-zero value is true, and 0 is false by default.
    */
    int n1 = 0, n2 = 0;
    for (;n2 < 3, n1 < 5; n1++)
    {
        printf("%d %d\n", n1, n2);
        n2++;
    }
    // Last condition is the one that terminates the loop. Other condition is treated as a statement.


    /*
    Expression 3:-
    1. It is used to update the loop variable.
    2. We can update more than one varibale at the same time.
    3. Expression 3 is optional.
    */

    int a = 0, b= 0;
    for (; a < 14; b++)
    {
        printf("%d %d\n", a, b);
        a++;
    }
    

    
    return 0;
}