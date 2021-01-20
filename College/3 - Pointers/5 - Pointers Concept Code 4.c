#include<stdio.h>

int main(){
    short si = 10;
    short sj = 20;

    short *iptr = &si;
    short *jptr = NULL;

    jptr = iptr; // Both refer to the address of varible si
    si = si * 5; // si = 50

    *iptr = *jptr + si; // si = 50 + 50 => si = 100
    iptr = &sj; // iptr refer to the address of variable sj
    *iptr = *iptr + si + sj + *jptr; // sj = 20 + 100 + 20 + 100 => sj = 240

    printf("Value of si = %hi and that of sj = %hi\n", *jptr, *iptr);
    printf("Value of si = %hi and that of sj = %hi\n", si, sj);

    return 0;
}