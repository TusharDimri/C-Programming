#include<stdio.h>

int main(){
    int a, b; // Variable Declaration

    printf("Enter first number\n");
    scanf("%d", &a); // Take input from user and put the value in variable a

    printf("Enter second number\n");
    scanf("%d", &b); // Take input from user and put the value in variable b

    int sum = a + b; 
    printf("Sum of given numbers = %d", sum);

    return 0;

    // gcc -Wall -save-temps "Your File Name.c"
    // Above line will give us the .exe file along with .i, .s and .o files
    // After Preprocessing :- .i file which is sent to the compiler
    // After Compilation :- .s file which i sent to the assembler
    // After Assembly:- .o file which is sent to the linker
    // After Linking :- .exe file
}
