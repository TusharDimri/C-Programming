#include<stdio.h>

int main()
{
    int i;

    i = 10 - -4 + 6 * 2 + 5; //31
    printf("%d\n", i);

    i =10 + 5 - 6 % 4 * 2 + 1; // 12
    printf("%d\n", i);

    i = 10 + -4 + 6 / 5 + 5/3 + 10 % 4; // 10
    printf("%d\n", i);

    i = (10 + 3 * (5 + 6)) + 8 % -5 + 3 / 2; // 47
    printf("%d\n", i);

    i = -4 * 5 % 3 * 2 / 5; // 0
    printf("%d\n", i);

    /*
    NOTE:- 
    As per C99 standard,the sign obtained as a result of using a MOD(%) operator is the sign of the dividend.
    For example:-
    7 % 4 = 3
    -7 % 4 = -3
    7 % -4 = 3
    -7 % -4 = -3
    */
    
    return 0;
}
