#include<stdio.h>
#define PI 3.14

int main(){
    // Format Specifier - It tells the compiler what type of data is in a varibale during taking input and displaying output to the user.
    // For Example:-
    // printf("This is a good boy %a.bf", var) will print var with b decimal points in a 'a' character space.

    int a = 8;
    float b = 7.333;

    printf("The value of a is %d and the value of b is %f\n", a, b);
    // Here :-
    // %d - Format Specifier for integer values
    // %f - Format Specifier for floating point values
    
    printf("%0.5f\n", b);
    // Five decimal places will be shown without offset as there are 5 characters(icluding decimal point) but we gave 0(0.5)
    // In simple words we have character space of 0(defaults - size of the specifed characters)  with accuracy of 5 decimal places

    printf("%8.5f\n", b);
    // Five decimal places will be printed and as there sre 7 characeters(5 decimal places,  decimal point and 7) so we get one space(offest) before the output.
    // In simple words we have character space of 8(which includes decimal point) with accuracy of 5 decimal places

    printf("%-10.5f Check\n", b);
    // We specify character space of 10 with 5 decimal points.
    // We have total 7 characters(7, decimal point, 5 decimal places) so we get 3 blank spaces
    // Here - sign specifies that the spaces will be placed after the characters are displayed


    // Important Format Specifiers:-
    // 1. %c - Character
    // 2. %d - Integer
    // 3. %f - Floating Point Number
    // 4. %l - Long Integer
    // 5. %lf - Double
    // 5. %Lf - Long Double

    // int n;
    // printf("Enter a Number\n");
    // scanf("%Lf", &n);
    // printf("%d = %d", sizeof(long double), sizeof(n));


    // Constants in C:-
    // A constant is a vbalue or variable that can't be changes in the program.
    // For Example:- 15, 2.3, "Tushar Dimri", etc.

    // There are 2 ways to define constants in C:-

    // 1. const keyword
    const float pi = 3.14;
    // We cannot change the value of pi.
    printf("%f\n", pi);

    // 2. #define preprocessor
    // Check line 2 of this code.
    printf("%0.2f\n", PI);

    // Escape Sequences in C:-
    // An escape sequence in C is a sequence of characters. It doesn't represent itself when used inside string literal or character.It is composed of 2 or more characters starting with a backslash(\)
    // For Example:- \n - New Line
    // Some Escape Sequences:-
    // 1. \a - Alram or Beep
    // 2. \b - Backspace
    // 3. \t - Tab(Horizontal)
    // 4. \' - Single Quote
    // 5. \" - Double Quote
    // 6. \\ - Backslash

    printf("Backslash - \\ \n");
    printf("Newline Character - \\n \n");
    printf("Tab\tCharacter\n"); 

    // Comments in C:-

    // 1.
    // Single line Comment
    
    // 2.
    /*
    Multi
    Line 
    Comment
    */ 
    
    return 0;
}