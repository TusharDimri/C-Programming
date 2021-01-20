#include <stdio.h>

int main(){
    int si = 100;
    char ch = 'G';

    int *iptr = &si;
    char *cptr = &ch;

    int **diptr;
    char **dcptr;

    diptr = &iptr;
    dcptr = &cptr;

    // Size of Data Types First:-
    printf("%lu %lu\n", (unsigned long) sizeof(si), (unsigned long) sizeof(ch));
    printf("%lu %lu\n", (unsigned long) sizeof(*iptr), (unsigned long) sizeof(*cptr));

    // Size of Single-Pointer(*) Variables:-
    printf("%lu %lu\n", (unsigned long) sizeof(iptr), (unsigned long) sizeof(cptr));

    // Size of Double-Pointer(**) Variable:-
    printf("%lu %lu\n", (unsigned long) sizeof(diptr), (unsigned long) sizeof(dcptr));

    return 0;
}