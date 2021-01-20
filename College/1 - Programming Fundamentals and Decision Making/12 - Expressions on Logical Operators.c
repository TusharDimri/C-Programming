#include<stdio.h>

int main(){
    int i, j = 2, k = 1, m = 0;
    
    i = j && k;
    //  True(Non-Zero Value) && True(Non-Zero Value) = True(1)
    printf("%d\n", i); // 1


    i = -1 && -1;
    //  True(Non-Zero Value) && True(Non-Zero Value) = True(1)
    printf("%d\n", i); // 1


    i = 0 && -1;
    //  False(Zero) && True(Non-Zero Value) = False(0)
    printf("%d\n", i); // 0


    i = j && k || m; // Compiler Warning to include parenthesis
    // As precedence of && is greater then that of || therefore above expression can be written as:-
    //  i = (j && k) || m;
    // 2 && 1 || 0
    // 1 || 0 = 1
    printf("%d\n", i); // 1

    
    i = m || k && m; // Compiler Warning to include parenthesis
    // As precedence of && is greater then that of || therefore above expression can be written as:-
    //  i = m || (k && m)
    // 0 || (1 & 0)
    // 0 || 0 = 0
    printf("%d\n", i); // 0

    return 0;
}