#include <stdio.h>

int main()
{
    /*
    int a;
    int *int_ptr = &a;

    printf("Size of int variable in my machine = %d\n", sizeof(int));

    printf("Address of a = %lu\n", (unsigned long) int_ptr);

    int_ptr ++;
    printf("Address of a after increment by 1 = %lu\n", (unsigned long) int_ptr);

    int_ptr --;
    printf("Address of a after decrement by 1 = %lu\n", (unsigned long) int_ptr);
    */

    short sh;
    short *short_ptr = &sh;

    printf("Size of short variable in my machine = %d\n", sizeof(short));

    printf("Address of sh = %lu\n", (unsigned long) short_ptr);

    short_ptr ++;
    printf("Address of sh after increment by 1 = %lu\n", (unsigned long) short_ptr);

    short_ptr --;
    printf("Address of sh after decrement by 1 = %lu\n", (unsigned long) short_ptr);
    return 0;
}