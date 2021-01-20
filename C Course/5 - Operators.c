#include<stdio.h>

int main(){
    // Operators are used to perform operations in given programming Language             
    // Operators in C:-
    // 1. Arithmatic Oprators  
    // 2. Relational Operators
    // 3. Logical Operators
    // 4. Bitwise Operators
    // 5. Assignment Operators

    int a, b;
    a = 34;
    b = 6;

    // Arithmatic Operators:-
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a mod b = %d\n", a % b);

    // Relational Operators:-
    // Relational Operators return 0(false) or 1(true)
    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a < b);
    printf("%d\n", a > b);
    printf("%d\n", a <= b);
    printf("%d\n", a <= b);
    // Output to above statements is 0 or 1(0 for false and 1 for true)

    // Logical Operators:-
    // && - Logical AND Operator. If both operands are non-zero, then the condition is true.
    // || - Logical OR Operator. If either one of the operands is non-zero, then the condition is true.
    // ! - Logical NOT Operator. It is used to reverse the logical state of its operand.(i.e. if condtion is true, then Logical NOT will make it false)
    int n1 = 0;
    int n2 = 1;
    printf("%d\n", n1&&n2);
    printf("%d\n", n1||n2);
    printf("%d\n", !(n1&&n2));

    // Bitwise Operators:-
    // & - Bitwise AND
    // | - Bitwise 0R
    // ^ - Bitwise XOR(Exclusive OR)
    // Bitwise Operator opearate on the bits of the number.
    //  Bitwise AND and OR work just like Logical AND and OR.
    // Bitwise XOR returns 1 if both bits are opposite.
    // For example:-
    // 1 & 0 - 0
    // 1 | 0 - 1
    // 1 ^ 0 - 1
    printf("%d\n", 2 & 3);
    printf("%d\n", 2 | 3);
    printf("%d\n", 2 ^ 3);

    // Other Bitwise Operators:-
    // ~ - One's omplement Operator
    // << - Binary Left Shifr Operator
    // >> - Binary Rught Shift Oprtator

    // Asdignment Operators:-
    // =
    // +=
    // -=
    // *=
    // /=
    // /=
    // For example:-
    // a += 7 => a = a + 7
    // a -= 7 => a = a - 7
    // a *= 7 => a = a * 7
    // a /= 7 => a = a / 7

    // Miscellaneous Operators:-
    // sixeof() - Returns the size of a variable
    //  & - Returns the address of a variable
    // * - Pointer to a varible
    // ?: - Ternary Operatpr/Contitonal Expression
 
    return 0;
}