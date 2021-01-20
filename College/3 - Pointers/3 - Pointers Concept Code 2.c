#include<stdio.h>

int main(){
    // Declaring 2 short int variables
    short int si;
    short int sj;

    // Declaring 2 Pointer Varibales
    short *iptr;
    short *jptr;

    // POINTER variables assigned the ADDRESS of short variables
    iptr = &si;
    jptr = &sj;

    // Reading Values into si and sj using iptr and jptr
    printf("Enter 2 numbers\n");
    // scanf("%hi%hi", &si, &sj);
    scanf("%hi%hi", iptr, jptr);

    // Address of si and sj
    printf("Address of si = %lu and that of sj = %lu\n", (unsigned long) &si, (unsigned long) &sj);
    printf("Address of si = %lu and that of sj = %lu\n", (unsigned long) iptr, (unsigned long) jptr);

    //  Value is si and sj
    printf("Value is si = %hi and value in sj = %hi\n", si, sj);
    printf("Value is si = %hi and value in sj = %hi\n", *iptr, *jptr);

    return 0;
}