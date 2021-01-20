#include<stdio.h>

int main(){
    // ++ i - prefix increment
    //  j ++ - postfix increment

    int i, j = 2, k = 2;

    i = ++j + k++;
    printf("%d\n", i); // i = 5, j = 3,k = 3 

    i = j++ + ++k * -1;
    printf("%d\n", i); // i = -1, j = 4, k = 4

    i = k++ + --k; //Compiler warning k may be undefined
    printf("%d\n", i); // 8
    /*
    C has a rule that if we modify the valu of the same variable or memory location more than once in the same expression, then the result will be unexpected and will be different for different compilers.
    */


    return 0;
}