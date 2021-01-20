#include<stdio.h>

int main(){
    // Variable is the name given to a memory location.
    // Data Type specifes the type and capacity of the variable.

    // Flow of a C Program:-
    // Program => Preprocessing => Compilation => Assembly => Linking => Loading => Output
    //  Loading - Program Loads in the RAM(memory/main memory)

    // Declaring a variable:-
    int a;
    int b, c, d;

    // Initializing a Variable:-
    int num = 69;
    int n;
    n = 34;

    // Rules for Naming Varibales:-
    // 1. Can contain alphabets, digits and underscore(_) only.
    // 2. A variable name can strart with an alphabet and underscore but not with a digit
    // 3. No whitespaces and reserved keywords are allowed.
    // Valid varibale names :- int Tushar, int sum, int diff, char your_gender
    // Invalid names :- int 19tushar, int for, int $tushar

    // Data Types in C:-
    // 1. Basic Data Types:- int, char, float, double
    // 2. Derived Data Types (Derived from basic data types) :- array, pointer, structure, union
    // 3. Enumeration Data Type :- enum
    //  Void Data Type (it means empty) :- void

    // Size of data type depend on the complier and system architecture.

    printf("%lu bytes\n", sizeof(int)); 
    // 4

    printf("%lu bytes\n", sizeof(float));
    // 4

    printf("%lu bytes\n", sizeof(double));
    // 8

    printf("%lu bytes\n", sizeof(char));
    // 1

    // Basic Operators and Functions:-
    printf("%d\n", 7+3);
    printf("%d\n", 7-3);
    printf("%d\n", 7*3);
    printf("%d\n", 8/4);

    int t;
    printf("Enter a number\n");
    scanf("%d", &t);
    printf("%d", t);
































































    return 0;
}