#include<stdio.h>

int main(){
    short a, b, c;
    short result;
    a = 04, b = 05, c = 07;
    /*
    a, b, c are Octal Numbers
    Starting Values:-
    0 1 0 0 = A = 4
    0 1 0 1 = B = 5
    0 1 1 1 = C = 7
    */

    result = !a & b & c;
    /* 
    Precedence of logical not is higher than that of bitwise and. 
    !a = !04 = 0
    0 & 05 & 07
    0 & 05 => 0000 & 0101 => 0000 => 0
    0 & 07 => 0000 & 0111 => 0000 => 0
    Hence the output 0(0000)
    */
    printf("%d\n", result); // 0


    result = a | b & c;
    /*
    Precedence of & is higher than |.
    b & c => 0101 & 0111 => 0101
    a | 0101 => 0100 | 0101 => 0101
    Hence the output 5(0101)
    */
    printf("%d\n", result); // 05


    result = a ^ b & c;
    /*
    Precedence of & is higher than that of ^.
    b & c => 0101 & 0111 => 0101
    a ^ 0101 => 0100 ^ 0101 => 0001(1)
    Hence the output 1(0101)
    */
    printf("%d\n", result); // 1


    result = a & b ^ c;
    /*
    Precedence og & is higher than that of ^
    a & b => 0100  & 0101 => 0100
    0100 ^ c => 0100 ^ 0111 => 0011(3)
    Hence the output 3(0011)
    */
    printf("%d\n", result); // 3


    result = a | !a ;
    /*
    Precedence of ! is higher than that of |
    !a = !04 = 0 
    a | 0000 => 0100 | 0000 => 0100(4)
    Hence the putput 4(0100)
    */
    printf("%d\n", result); // 4


    result = a | ~a;
    /*
    Precedence of ~ is higher than that of |
    ~a => ~ 0100 => 1011
    a | 1011 => 0100 | 1011 => 1111(-1)
    Hence the output -1(1111)
    */
    printf("%d\n", result); // -1


    result = a ^ a;
    /*
    a ^ a = 0100 ~ 0100 => 0000(0)
    Hence the output 0(0000)
    */
    printf("%d\n", result); // 0

    return 0;
}