#include<stdio.h>

int main(){
    int si = 1000;
    char ch = 'G';

    int *iptr = &si;
    char *cptr = &ch;

    int **diptr = &iptr;
    char **dcptr = &cptr;

    // Printing Values in different manner
    printf("si = %d and ch = %c\n", si, ch);    
    printf("si = %d and ch = %c\n", *iptr, *cptr); // Single Pointer    
    printf("si = %d and ch = %c\n", **diptr, **dcptr); // Pointer-to-Pointer    

    // Some more ways of printing values
    printf("si = %d and ch = %c\n", *(&si), *(&ch));
    printf("si = %d and ch = %c\n", **(&iptr), **(&cptr));
    printf("si = %d and ch = %c\n", ***(&diptr), ***(&dcptr));

    return 0;
}