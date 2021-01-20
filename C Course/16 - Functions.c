#include <stdio.h>

int sum(int x, int y); // Function Prototype

void printStar(int N){
    char ch = '*';
    for (int i = 1; i <= N; i++)
    {
        printf("%c", ch);
    }
    printf("\n");
    
}

int takeNumber()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

void func(void){
    printf("This function takes no arguments an does'nt return a value\n");
}


int main()
{
    /*

     Functions in C:-
     1. Functions are used to divide large C programs into smaller pieces.
     2. A function can be callled multiple times to provide reusability and modularity to your C program.
     3. Also called subroutine or procedure.


    Basic Syntax of a Function in C:-
    return_type function_name(data_type parameter 1, data_type parameter 2){
         // Code to be Executed
    }


    Advantages of using Functions:-
    1. We can avoid rewriting same logic through functions.
    2. We can divide work among programmers using functions.
    3. We can easily debug a program using functions.


    Declaration, Definition and Call:-
    1. A function is declared to tell the compiler about its existacne(Function Prototype).
    2. A function is defined to get some task done(Function Code / Function Implementation).
    3. A function is called in order to be used.


    Types of Functions in C:-
    1. Library Functions - Functions included in C Header Files.
    2. User Defined Functions - Functions created by the user(C Programmer) to reduce the complexity of the program.


    Function Code Examples:-
    1. Without arguments and without return value.
    2. Without arguments and with return value. 
    3. With arguments and without return value. 
    4. With arguments and with return value. 

    */
    int a = 67;
    int b = 2;

    int c = sum(a, b);

    printf("Sum is %d\n", c);

    printStar(4);

    int num = takeNumber();
    printf("You entered: %d\n", num);

    func();


    return 0;
}

int sum(int a, int b){
    return a + b;
}